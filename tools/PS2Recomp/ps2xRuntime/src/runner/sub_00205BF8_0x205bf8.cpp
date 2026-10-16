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

// Function: sub_00205BF8
// Address: 0x205bf8 - 0x205ce0
void sub_00205BF8_0x205bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205BF8_0x205bf8");
#endif

    switch (ctx->pc) {
        case 0x205bf8u: goto label_205bf8;
        case 0x205bfcu: goto label_205bfc;
        case 0x205c00u: goto label_205c00;
        case 0x205c04u: goto label_205c04;
        case 0x205c08u: goto label_205c08;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c10u: goto label_205c10;
        case 0x205c14u: goto label_205c14;
        case 0x205c18u: goto label_205c18;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c20u: goto label_205c20;
        case 0x205c24u: goto label_205c24;
        case 0x205c28u: goto label_205c28;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c30u: goto label_205c30;
        case 0x205c34u: goto label_205c34;
        case 0x205c38u: goto label_205c38;
        case 0x205c3cu: goto label_205c3c;
        case 0x205c40u: goto label_205c40;
        case 0x205c44u: goto label_205c44;
        case 0x205c48u: goto label_205c48;
        case 0x205c4cu: goto label_205c4c;
        case 0x205c50u: goto label_205c50;
        case 0x205c54u: goto label_205c54;
        case 0x205c58u: goto label_205c58;
        case 0x205c5cu: goto label_205c5c;
        case 0x205c60u: goto label_205c60;
        case 0x205c64u: goto label_205c64;
        case 0x205c68u: goto label_205c68;
        case 0x205c6cu: goto label_205c6c;
        case 0x205c70u: goto label_205c70;
        case 0x205c74u: goto label_205c74;
        case 0x205c78u: goto label_205c78;
        case 0x205c7cu: goto label_205c7c;
        case 0x205c80u: goto label_205c80;
        case 0x205c84u: goto label_205c84;
        case 0x205c88u: goto label_205c88;
        case 0x205c8cu: goto label_205c8c;
        case 0x205c90u: goto label_205c90;
        case 0x205c94u: goto label_205c94;
        case 0x205c98u: goto label_205c98;
        case 0x205c9cu: goto label_205c9c;
        case 0x205ca0u: goto label_205ca0;
        case 0x205ca4u: goto label_205ca4;
        case 0x205ca8u: goto label_205ca8;
        case 0x205cacu: goto label_205cac;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cb4u: goto label_205cb4;
        case 0x205cb8u: goto label_205cb8;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc0u: goto label_205cc0;
        case 0x205cc4u: goto label_205cc4;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cccu: goto label_205ccc;
        case 0x205cd0u: goto label_205cd0;
        case 0x205cd4u: goto label_205cd4;
        case 0x205cd8u: goto label_205cd8;
        case 0x205cdcu: goto label_205cdc;
        default: break;
    }

    ctx->pc = 0x205bf8u;

label_205bf8:
    // 0x205bf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_205bfc:
    // 0x205bfc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x205bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_205c00:
    // 0x205c00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x205c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_205c04:
    // 0x205c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_205c08:
    // 0x205c08: 0xc0815b2  jal         func_2056C8
label_205c0c:
    if (ctx->pc == 0x205C0Cu) {
        ctx->pc = 0x205C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C08u;
        // 0x205c0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C10u;
        goto label_205c10;
    }
    ctx->pc = 0x205C08u;
    SET_GPR_U32(ctx, 31, 0x205C10u);
    ctx->pc = 0x205C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C08u;
    // 0x205c0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205C08u, 0x205C10u)) {
        return;
    }
    ctx->pc = 0x205C10u;
label_205c10:
    // 0x205c10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x205c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205c14:
    // 0x205c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205c18:
    // 0x205c18: 0xc08161c  jal         func_205870
label_205c1c:
    if (ctx->pc == 0x205C1Cu) {
        ctx->pc = 0x205C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C18u;
        // 0x205c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C20u;
        goto label_205c20;
    }
    ctx->pc = 0x205C18u;
    SET_GPR_U32(ctx, 31, 0x205C20u);
    ctx->pc = 0x205C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C18u;
    // 0x205c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205870u, 0x205C18u, 0x205C20u)) {
        return;
    }
    ctx->pc = 0x205C20u;
label_205c20:
    // 0x205c20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205c24:
    // 0x205c24: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_205c28:
    if (ctx->pc == 0x205C28u) {
        ctx->pc = 0x205C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C24u;
        // 0x205c28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C2Cu;
        goto label_205c2c;
    }
    ctx->pc = 0x205C24u;
    {
        const bool branch_taken_0x205c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C24u;
        // 0x205c28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c24) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C2Cu;
label_205c2c:
    // 0x205c2c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x205c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_205c30:
    // 0x205c30: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_205c34:
    if (ctx->pc == 0x205C34u) {
        ctx->pc = 0x205C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C30u;
        // 0x205c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C38u;
        goto label_205c38;
    }
    ctx->pc = 0x205C30u;
    {
        const bool branch_taken_0x205c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c30) {
            ctx->pc = 0x205C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C30u;
            // 0x205c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205C5Cu;
            goto label_205c5c;
        }
    }
    ctx->pc = 0x205C38u;
label_205c38:
    // 0x205c38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205c3c:
    // 0x205c3c: 0x0  nop
    ctx->pc = 0x205c3cu;
    // NOP
label_205c40:
    // 0x205c40: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_205c44:
    if (ctx->pc == 0x205C44u) {
        ctx->pc = 0x205C48u;
        goto label_205c48;
    }
    ctx->pc = 0x205C40u;
    {
        const bool branch_taken_0x205c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x205c40) {
            ctx->pc = 0x205C5Cu;
            goto label_205c5c;
        }
    }
    ctx->pc = 0x205C48u;
label_205c48:
    // 0x205c48: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x205c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_205c4c:
    // 0x205c4c: 0x0  nop
    ctx->pc = 0x205c4cu;
    // NOP
label_205c50:
    // 0x205c50: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_205c54:
    if (ctx->pc == 0x205C54u) {
        ctx->pc = 0x205C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C50u;
        // 0x205c54: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C58u;
        goto label_205c58;
    }
    ctx->pc = 0x205C50u;
    {
        const bool branch_taken_0x205c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x205c50) {
            ctx->pc = 0x205C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C50u;
            // 0x205c54: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205c40;
        }
    }
    ctx->pc = 0x205C58u;
label_205c58:
    // 0x205c58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205c5c:
    // 0x205c5c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_205c60:
    if (ctx->pc == 0x205C60u) {
        ctx->pc = 0x205C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C5Cu;
        // 0x205c60: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C64u;
        goto label_205c64;
    }
    ctx->pc = 0x205C5Cu;
    {
        const bool branch_taken_0x205c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C5Cu;
        // 0x205c60: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c5c) {
            ctx->pc = 0x205CACu;
            goto label_205cac;
        }
    }
    ctx->pc = 0x205C64u;
label_205c64:
    // 0x205c64: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x205c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_205c68:
    // 0x205c68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_205c6c:
    if (ctx->pc == 0x205C6Cu) {
        ctx->pc = 0x205C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C68u;
        // 0x205c6c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C70u;
        goto label_205c70;
    }
    ctx->pc = 0x205C68u;
    {
        const bool branch_taken_0x205c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C68u;
        // 0x205c6c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c68) {
            ctx->pc = 0x205C78u;
            goto label_205c78;
        }
    }
    ctx->pc = 0x205C70u;
label_205c70:
    // 0x205c70: 0x10000002  b           . + 4 + (0x2 << 2)
label_205c74:
    if (ctx->pc == 0x205C74u) {
        ctx->pc = 0x205C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C70u;
        // 0x205c74: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C78u;
        goto label_205c78;
    }
    ctx->pc = 0x205C70u;
    {
        const bool branch_taken_0x205c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C70u;
        // 0x205c74: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c70) {
            ctx->pc = 0x205C7Cu;
            goto label_205c7c;
        }
    }
    ctx->pc = 0x205C78u;
label_205c78:
    // 0x205c78: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x205c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_205c7c:
    // 0x205c7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x205c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_205c80:
    // 0x205c80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_205c84:
    if (ctx->pc == 0x205C84u) {
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C88u;
        goto label_205c88;
    }
    ctx->pc = 0x205C80u;
    {
        const bool branch_taken_0x205c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c80) {
            ctx->pc = 0x205C90u;
            goto label_205c90;
        }
    }
    ctx->pc = 0x205C88u;
label_205c88:
    // 0x205c88: 0x10000002  b           . + 4 + (0x2 << 2)
label_205c8c:
    if (ctx->pc == 0x205C8Cu) {
        ctx->pc = 0x205C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C88u;
        // 0x205c8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C90u;
        goto label_205c90;
    }
    ctx->pc = 0x205C88u;
    {
        const bool branch_taken_0x205c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C88u;
        // 0x205c8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c88) {
            ctx->pc = 0x205C94u;
            goto label_205c94;
        }
    }
    ctx->pc = 0x205C90u;
label_205c90:
    // 0x205c90: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x205c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_205c94:
    // 0x205c94: 0xc0808b8  jal         func_2022E0
label_205c98:
    if (ctx->pc == 0x205C98u) {
        ctx->pc = 0x205C9Cu;
        goto label_205c9c;
    }
    ctx->pc = 0x205C94u;
    SET_GPR_U32(ctx, 31, 0x205C9Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x205C94u, 0x205C9Cu)) {
        return;
    }
    ctx->pc = 0x205C9Cu;
label_205c9c:
    // 0x205c9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_205ca0:
    // 0x205ca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_205ca4:
    // 0x205ca4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x205ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_205ca8:
    // 0x205ca8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x205ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_205cac:
    // 0x205cac: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_205cb0:
    if (ctx->pc == 0x205CB0u) {
        ctx->pc = 0x205CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CACu;
        // 0x205cb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CB4u;
        goto label_205cb4;
    }
    ctx->pc = 0x205CACu;
    {
        const bool branch_taken_0x205cac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CACu;
        // 0x205cb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cac) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205CB4u;
label_205cb4:
    // 0x205cb4: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x205cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_205cb8:
    // 0x205cb8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x205cb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_205cbc:
    // 0x205cbc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x205cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_205cc0:
    // 0x205cc0: 0x60f809  jalr        $v1
label_205cc4:
    if (ctx->pc == 0x205CC4u) {
        ctx->pc = 0x205CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CC0u;
        // 0x205cc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CC8u;
        goto label_205cc8;
    }
    ctx->pc = 0x205CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205CC8u);
        ctx->pc = 0x205CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CC0u;
        // 0x205cc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205CC0u, 0x205CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205CC8u;
label_205cc8:
    // 0x205cc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x205cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205ccc:
    // 0x205ccc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x205cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205cd0:
    // 0x205cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_205cd4:
    // 0x205cd4: 0x3e00008  jr          $ra
label_205cd8:
    if (ctx->pc == 0x205CD8u) {
        ctx->pc = 0x205CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CD4u;
        // 0x205cd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CDCu;
        goto label_205cdc;
    }
    ctx->pc = 0x205CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CD4u;
        // 0x205cd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205CDCu;
label_205cdc:
    // 0x205cdc: 0x0  nop
    ctx->pc = 0x205cdcu;
    // NOP
    ctx->pc = 0x205ce0u;
}
