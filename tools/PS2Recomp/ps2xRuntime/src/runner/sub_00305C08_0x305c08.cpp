#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305C08
// Address: 0x305c08 - 0x305cd8
void sub_00305C08_0x305c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305C08_0x305c08");
#endif

    switch (ctx->pc) {
        case 0x305c08u: goto label_305c08;
        case 0x305c0cu: goto label_305c0c;
        case 0x305c10u: goto label_305c10;
        case 0x305c14u: goto label_305c14;
        case 0x305c18u: goto label_305c18;
        case 0x305c1cu: goto label_305c1c;
        case 0x305c20u: goto label_305c20;
        case 0x305c24u: goto label_305c24;
        case 0x305c28u: goto label_305c28;
        case 0x305c2cu: goto label_305c2c;
        case 0x305c30u: goto label_305c30;
        case 0x305c34u: goto label_305c34;
        case 0x305c38u: goto label_305c38;
        case 0x305c3cu: goto label_305c3c;
        case 0x305c40u: goto label_305c40;
        case 0x305c44u: goto label_305c44;
        case 0x305c48u: goto label_305c48;
        case 0x305c4cu: goto label_305c4c;
        case 0x305c50u: goto label_305c50;
        case 0x305c54u: goto label_305c54;
        case 0x305c58u: goto label_305c58;
        case 0x305c5cu: goto label_305c5c;
        case 0x305c60u: goto label_305c60;
        case 0x305c64u: goto label_305c64;
        case 0x305c68u: goto label_305c68;
        case 0x305c6cu: goto label_305c6c;
        case 0x305c70u: goto label_305c70;
        case 0x305c74u: goto label_305c74;
        case 0x305c78u: goto label_305c78;
        case 0x305c7cu: goto label_305c7c;
        case 0x305c80u: goto label_305c80;
        case 0x305c84u: goto label_305c84;
        case 0x305c88u: goto label_305c88;
        case 0x305c8cu: goto label_305c8c;
        case 0x305c90u: goto label_305c90;
        case 0x305c94u: goto label_305c94;
        case 0x305c98u: goto label_305c98;
        case 0x305c9cu: goto label_305c9c;
        case 0x305ca0u: goto label_305ca0;
        case 0x305ca4u: goto label_305ca4;
        case 0x305ca8u: goto label_305ca8;
        case 0x305cacu: goto label_305cac;
        case 0x305cb0u: goto label_305cb0;
        case 0x305cb4u: goto label_305cb4;
        case 0x305cb8u: goto label_305cb8;
        case 0x305cbcu: goto label_305cbc;
        case 0x305cc0u: goto label_305cc0;
        case 0x305cc4u: goto label_305cc4;
        case 0x305cc8u: goto label_305cc8;
        case 0x305cccu: goto label_305ccc;
        case 0x305cd0u: goto label_305cd0;
        case 0x305cd4u: goto label_305cd4;
        default: break;
    }

    ctx->pc = 0x305c08u;

label_305c08:
    // 0x305c08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x305c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_305c0c:
    // 0x305c0c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x305c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_305c10:
    // 0x305c10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x305c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_305c14:
    // 0x305c14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x305c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_305c18:
    // 0x305c18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x305c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_305c1c:
    // 0x305c1c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x305c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305c20:
    // 0x305c20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x305c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_305c24:
    // 0x305c24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305c28:
    // 0x305c28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x305c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_305c2c:
    // 0x305c2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x305c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_305c30:
    // 0x305c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_305c34:
    // 0x305c34: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_305c38:
    if (ctx->pc == 0x305C38u) {
        ctx->pc = 0x305C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C34u;
        // 0x305c38: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C3Cu;
        goto label_305c3c;
    }
    ctx->pc = 0x305C34u;
    {
        const bool branch_taken_0x305c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C34u;
        // 0x305c38: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c34) {
            ctx->pc = 0x305CB4u;
            goto label_305cb4;
        }
    }
    ctx->pc = 0x305C3Cu;
label_305c3c:
    // 0x305c3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x305c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305c40:
    // 0x305c40: 0x10b00012  beq         $a1, $s0, . + 4 + (0x12 << 2)
label_305c44:
    if (ctx->pc == 0x305C44u) {
        ctx->pc = 0x305C48u;
        goto label_305c48;
    }
    ctx->pc = 0x305C40u;
    {
        const bool branch_taken_0x305c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x305c40) {
            ctx->pc = 0x305C8Cu;
            goto label_305c8c;
        }
    }
    ctx->pc = 0x305C48u;
label_305c48:
    // 0x305c48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x305c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_305c4c:
    // 0x305c4c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x305c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_305c50:
    // 0x305c50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x305c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_305c54:
    // 0x305c54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x305c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_305c58:
    // 0x305c58: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_305c5c:
    if (ctx->pc == 0x305C5Cu) {
        ctx->pc = 0x305C60u;
        goto label_305c60;
    }
    ctx->pc = 0x305C58u;
    {
        const bool branch_taken_0x305c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x305c58) {
            ctx->pc = 0x305C84u;
            goto label_305c84;
        }
    }
    ctx->pc = 0x305C60u;
label_305c60:
    // 0x305c60: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x305c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_305c64:
    // 0x305c64: 0x0  nop
    ctx->pc = 0x305c64u;
    // NOP
label_305c68:
    // 0x305c68: 0x10b00008  beq         $a1, $s0, . + 4 + (0x8 << 2)
label_305c6c:
    if (ctx->pc == 0x305C6Cu) {
        ctx->pc = 0x305C70u;
        goto label_305c70;
    }
    ctx->pc = 0x305C68u;
    {
        const bool branch_taken_0x305c68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x305c68) {
            ctx->pc = 0x305C8Cu;
            goto label_305c8c;
        }
    }
    ctx->pc = 0x305C70u;
label_305c70:
    // 0x305c70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x305c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_305c74:
    // 0x305c74: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x305c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_305c78:
    // 0x305c78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x305c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_305c7c:
    // 0x305c7c: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
label_305c80:
    if (ctx->pc == 0x305C80u) {
        ctx->pc = 0x305C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C7Cu;
        // 0x305c80: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C84u;
        goto label_305c84;
    }
    ctx->pc = 0x305C7Cu;
    {
        const bool branch_taken_0x305c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x305c7c) {
            ctx->pc = 0x305C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C7Cu;
            // 0x305c80: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305c68;
        }
    }
    ctx->pc = 0x305C84u;
label_305c84:
    // 0x305c84: 0x54b00009  bnel        $a1, $s0, . + 4 + (0x9 << 2)
label_305c88:
    if (ctx->pc == 0x305C88u) {
        ctx->pc = 0x305C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C84u;
        // 0x305c88: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C8Cu;
        goto label_305c8c;
    }
    ctx->pc = 0x305C84u;
    {
        const bool branch_taken_0x305c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        if (branch_taken_0x305c84) {
            ctx->pc = 0x305C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C84u;
            // 0x305c88: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305CACu;
            goto label_305cac;
        }
    }
    ctx->pc = 0x305C8Cu;
label_305c8c:
    // 0x305c8c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_305c90:
    if (ctx->pc == 0x305C90u) {
        ctx->pc = 0x305C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C8Cu;
        // 0x305c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C94u;
        goto label_305c94;
    }
    ctx->pc = 0x305C8Cu;
    {
        const bool branch_taken_0x305c8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C8Cu;
        // 0x305c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c8c) {
            ctx->pc = 0x305CA4u;
            goto label_305ca4;
        }
    }
    ctx->pc = 0x305C94u;
label_305c94:
    // 0x305c94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x305c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_305c98:
    // 0x305c98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x305c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_305c9c:
    // 0x305c9c: 0x240f809  jalr        $s2
label_305ca0:
    if (ctx->pc == 0x305CA0u) {
        ctx->pc = 0x305CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C9Cu;
        // 0x305ca0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CA4u;
        goto label_305ca4;
    }
    ctx->pc = 0x305C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x305CA4u);
        ctx->pc = 0x305CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C9Cu;
        // 0x305ca0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305C9Cu, 0x305CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305CA4u;
label_305ca4:
    // 0x305ca4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_305ca8:
    // 0x305ca8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x305ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_305cac:
    // 0x305cac: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_305cb0:
    if (ctx->pc == 0x305CB0u) {
        ctx->pc = 0x305CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CACu;
        // 0x305cb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CB4u;
        goto label_305cb4;
    }
    ctx->pc = 0x305CACu;
    {
        const bool branch_taken_0x305cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x305CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CACu;
        // 0x305cb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cac) {
            ctx->pc = 0x305C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305c40;
        }
    }
    ctx->pc = 0x305CB4u;
label_305cb4:
    // 0x305cb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x305cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305cb8:
    // 0x305cb8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x305cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_305cbc:
    // 0x305cbc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x305cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_305cc0:
    // 0x305cc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x305cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_305cc4:
    // 0x305cc4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x305cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_305cc8:
    // 0x305cc8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x305cc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_305ccc:
    // 0x305ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_305cd0:
    // 0x305cd0: 0x3e00008  jr          $ra
label_305cd4:
    if (ctx->pc == 0x305CD4u) {
        ctx->pc = 0x305CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CD0u;
        // 0x305cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CD8u;
        goto label_fallthrough_0x305cd0;
    }
    ctx->pc = 0x305CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CD0u;
        // 0x305cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x305cd0:
    ctx->pc = 0x305CD8u;
}
