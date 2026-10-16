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

// Function: sub_00123B78
// Address: 0x123b78 - 0x123cd8
void sub_00123B78_0x123b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123B78_0x123b78");
#endif

    switch (ctx->pc) {
        case 0x123b78u: goto label_123b78;
        case 0x123b7cu: goto label_123b7c;
        case 0x123b80u: goto label_123b80;
        case 0x123b84u: goto label_123b84;
        case 0x123b88u: goto label_123b88;
        case 0x123b8cu: goto label_123b8c;
        case 0x123b90u: goto label_123b90;
        case 0x123b94u: goto label_123b94;
        case 0x123b98u: goto label_123b98;
        case 0x123b9cu: goto label_123b9c;
        case 0x123ba0u: goto label_123ba0;
        case 0x123ba4u: goto label_123ba4;
        case 0x123ba8u: goto label_123ba8;
        case 0x123bacu: goto label_123bac;
        case 0x123bb0u: goto label_123bb0;
        case 0x123bb4u: goto label_123bb4;
        case 0x123bb8u: goto label_123bb8;
        case 0x123bbcu: goto label_123bbc;
        case 0x123bc0u: goto label_123bc0;
        case 0x123bc4u: goto label_123bc4;
        case 0x123bc8u: goto label_123bc8;
        case 0x123bccu: goto label_123bcc;
        case 0x123bd0u: goto label_123bd0;
        case 0x123bd4u: goto label_123bd4;
        case 0x123bd8u: goto label_123bd8;
        case 0x123bdcu: goto label_123bdc;
        case 0x123be0u: goto label_123be0;
        case 0x123be4u: goto label_123be4;
        case 0x123be8u: goto label_123be8;
        case 0x123becu: goto label_123bec;
        case 0x123bf0u: goto label_123bf0;
        case 0x123bf4u: goto label_123bf4;
        case 0x123bf8u: goto label_123bf8;
        case 0x123bfcu: goto label_123bfc;
        case 0x123c00u: goto label_123c00;
        case 0x123c04u: goto label_123c04;
        case 0x123c08u: goto label_123c08;
        case 0x123c0cu: goto label_123c0c;
        case 0x123c10u: goto label_123c10;
        case 0x123c14u: goto label_123c14;
        case 0x123c18u: goto label_123c18;
        case 0x123c1cu: goto label_123c1c;
        case 0x123c20u: goto label_123c20;
        case 0x123c24u: goto label_123c24;
        case 0x123c28u: goto label_123c28;
        case 0x123c2cu: goto label_123c2c;
        case 0x123c30u: goto label_123c30;
        case 0x123c34u: goto label_123c34;
        case 0x123c38u: goto label_123c38;
        case 0x123c3cu: goto label_123c3c;
        case 0x123c40u: goto label_123c40;
        case 0x123c44u: goto label_123c44;
        case 0x123c48u: goto label_123c48;
        case 0x123c4cu: goto label_123c4c;
        case 0x123c50u: goto label_123c50;
        case 0x123c54u: goto label_123c54;
        case 0x123c58u: goto label_123c58;
        case 0x123c5cu: goto label_123c5c;
        case 0x123c60u: goto label_123c60;
        case 0x123c64u: goto label_123c64;
        case 0x123c68u: goto label_123c68;
        case 0x123c6cu: goto label_123c6c;
        case 0x123c70u: goto label_123c70;
        case 0x123c74u: goto label_123c74;
        case 0x123c78u: goto label_123c78;
        case 0x123c7cu: goto label_123c7c;
        case 0x123c80u: goto label_123c80;
        case 0x123c84u: goto label_123c84;
        case 0x123c88u: goto label_123c88;
        case 0x123c8cu: goto label_123c8c;
        case 0x123c90u: goto label_123c90;
        case 0x123c94u: goto label_123c94;
        case 0x123c98u: goto label_123c98;
        case 0x123c9cu: goto label_123c9c;
        case 0x123ca0u: goto label_123ca0;
        case 0x123ca4u: goto label_123ca4;
        case 0x123ca8u: goto label_123ca8;
        case 0x123cacu: goto label_123cac;
        case 0x123cb0u: goto label_123cb0;
        case 0x123cb4u: goto label_123cb4;
        case 0x123cb8u: goto label_123cb8;
        case 0x123cbcu: goto label_123cbc;
        case 0x123cc0u: goto label_123cc0;
        case 0x123cc4u: goto label_123cc4;
        case 0x123cc8u: goto label_123cc8;
        case 0x123cccu: goto label_123ccc;
        case 0x123cd0u: goto label_123cd0;
        case 0x123cd4u: goto label_123cd4;
        default: break;
    }

    ctx->pc = 0x123b78u;

label_123b78:
    // 0x123b78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_123b7c:
    // 0x123b7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x123b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_123b80:
    // 0x123b80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x123b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_123b84:
    // 0x123b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123b88:
    // 0x123b88: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x123b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_123b8c:
    // 0x123b8c: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x123b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_123b90:
    // 0x123b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x123b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_123b94:
    // 0x123b94: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x123b94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_123b98:
    // 0x123b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_123b9c:
    // 0x123b9c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x123b9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_123ba0:
    // 0x123ba0: 0x8e03080c  lw          $v1, 0x80C($s0)
    ctx->pc = 0x123ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
label_123ba4:
    // 0x123ba4: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x123ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123ba8:
    // 0x123ba8: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x123ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_123bac:
    // 0x123bac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_123bb0:
    // 0x123bb0: 0x84a401a8  lh          $a0, 0x1A8($a1)
    ctx->pc = 0x123bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
label_123bb4:
    // 0x123bb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x123bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_123bb8:
    // 0x123bb8: 0x8ca201ac  lw          $v0, 0x1AC($a1)
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 428)));
label_123bbc:
    // 0x123bbc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x123bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_123bc0:
    // 0x123bc0: 0x40f809  jalr        $v0
label_123bc4:
    if (ctx->pc == 0x123BC4u) {
        ctx->pc = 0x123BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BC0u;
        // 0x123bc4: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BC8u;
        goto label_123bc8;
    }
    ctx->pc = 0x123BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123BC8u);
        ctx->pc = 0x123BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BC0u;
        // 0x123bc4: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123BC0u, 0x123BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123BC8u;
label_123bc8:
    // 0x123bc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123bcc:
    // 0x123bcc: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x123bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_123bd0:
    // 0x123bd0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_123bd4:
    if (ctx->pc == 0x123BD4u) {
        ctx->pc = 0x123BD8u;
        goto label_123bd8;
    }
    ctx->pc = 0x123BD0u;
    {
        const bool branch_taken_0x123bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123bd0) {
            ctx->pc = 0x123C30u;
            goto label_123c30;
        }
    }
    ctx->pc = 0x123BD8u;
label_123bd8:
    // 0x123bd8: 0xc06820a  jal         func_1A0828
label_123bdc:
    if (ctx->pc == 0x123BDCu) {
        ctx->pc = 0x123BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BD8u;
        // 0x123bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BE0u;
        goto label_123be0;
    }
    ctx->pc = 0x123BD8u;
    SET_GPR_U32(ctx, 31, 0x123BE0u);
    ctx->pc = 0x123BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BD8u;
    // 0x123bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0828u, 0x123BD8u, 0x123BE0u)) {
        return;
    }
    ctx->pc = 0x123BE0u;
label_123be0:
    // 0x123be0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_123be4:
    if (ctx->pc == 0x123BE4u) {
        ctx->pc = 0x123BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BE0u;
        // 0x123be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BE8u;
        goto label_123be8;
    }
    ctx->pc = 0x123BE0u;
    {
        const bool branch_taken_0x123be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BE0u;
        // 0x123be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123be0) {
            ctx->pc = 0x123C30u;
            goto label_123c30;
        }
    }
    ctx->pc = 0x123BE8u;
label_123be8:
    // 0x123be8: 0xc0406e8  jal         func_101BA0
label_123bec:
    if (ctx->pc == 0x123BECu) {
        ctx->pc = 0x123BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BE8u;
        // 0x123bec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BF0u;
        goto label_123bf0;
    }
    ctx->pc = 0x123BE8u;
    SET_GPR_U32(ctx, 31, 0x123BF0u);
    ctx->pc = 0x123BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BE8u;
    // 0x123bec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x123BE8u, 0x123BF0u)) {
        return;
    }
    ctx->pc = 0x123BF0u;
label_123bf0:
    // 0x123bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123bf4:
    // 0x123bf4: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x123bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_123bf8:
    // 0x123bf8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x123bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_123bfc:
    // 0x123bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_123c00:
    if (ctx->pc == 0x123C00u) {
        ctx->pc = 0x123C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BFCu;
        // 0x123c00: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C04u;
        goto label_123c04;
    }
    ctx->pc = 0x123BFCu;
    {
        const bool branch_taken_0x123bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BFCu;
        // 0x123c00: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bfc) {
            ctx->pc = 0x123C18u;
            goto label_123c18;
        }
    }
    ctx->pc = 0x123C04u;
label_123c04:
    // 0x123c04: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_123c08:
    // 0x123c08: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x123c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_123c0c:
    // 0x123c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123c10:
    // 0x123c10: 0x10000002  b           . + 4 + (0x2 << 2)
label_123c14:
    if (ctx->pc == 0x123C14u) {
        ctx->pc = 0x123C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C10u;
        // 0x123c14: 0x8c42005c  lw          $v0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C18u;
        goto label_123c18;
    }
    ctx->pc = 0x123C10u;
    {
        const bool branch_taken_0x123c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C10u;
        // 0x123c14: 0x8c42005c  lw          $v0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c10) {
            ctx->pc = 0x123C1Cu;
            goto label_123c1c;
        }
    }
    ctx->pc = 0x123C18u;
label_123c18:
    // 0x123c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123c1c:
    // 0x123c1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_123c20:
    if (ctx->pc == 0x123C20u) {
        ctx->pc = 0x123C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C1Cu;
        // 0x123c20: 0x41027  nor         $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C24u;
        goto label_123c24;
    }
    ctx->pc = 0x123C1Cu;
    {
        const bool branch_taken_0x123c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C1Cu;
        // 0x123c20: 0x41027  nor         $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c1c) {
            ctx->pc = 0x123C2Cu;
            goto label_123c2c;
        }
    }
    ctx->pc = 0x123C24u;
label_123c24:
    // 0x123c24: 0x10000002  b           . + 4 + (0x2 << 2)
label_123c28:
    if (ctx->pc == 0x123C28u) {
        ctx->pc = 0x123C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C24u;
        // 0x123c28: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C2Cu;
        goto label_123c2c;
    }
    ctx->pc = 0x123C24u;
    {
        const bool branch_taken_0x123c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C24u;
        // 0x123c28: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c24) {
            ctx->pc = 0x123C30u;
            goto label_123c30;
        }
    }
    ctx->pc = 0x123C2Cu;
label_123c2c:
    // 0x123c2c: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x123c2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4));
label_123c30:
    // 0x123c30: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x123c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_123c34:
    // 0x123c34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x123c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_123c38:
    // 0x123c38: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
label_123c3c:
    if (ctx->pc == 0x123C3Cu) {
        ctx->pc = 0x123C40u;
        goto label_123c40;
    }
    ctx->pc = 0x123C38u;
    {
        const bool branch_taken_0x123c38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x123c38) {
            ctx->pc = 0x123C4Cu;
            goto label_123c4c;
        }
    }
    ctx->pc = 0x123C40u;
label_123c40:
    // 0x123c40: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x123c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_123c44:
    // 0x123c44: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_123c48:
    if (ctx->pc == 0x123C48u) {
        ctx->pc = 0x123C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C44u;
        // 0x123c48: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C4Cu;
        goto label_123c4c;
    }
    ctx->pc = 0x123C44u;
    {
        const bool branch_taken_0x123c44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x123C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C44u;
        // 0x123c48: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c44) {
            ctx->pc = 0x123C60u;
            goto label_123c60;
        }
    }
    ctx->pc = 0x123C4Cu;
label_123c4c:
    // 0x123c4c: 0x1263001c  beq         $s3, $v1, . + 4 + (0x1C << 2)
label_123c50:
    if (ctx->pc == 0x123C50u) {
        ctx->pc = 0x123C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C4Cu;
        // 0x123c50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C54u;
        goto label_123c54;
    }
    ctx->pc = 0x123C4Cu;
    {
        const bool branch_taken_0x123c4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x123C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C4Cu;
        // 0x123c50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c4c) {
            ctx->pc = 0x123CC0u;
            goto label_123cc0;
        }
    }
    ctx->pc = 0x123C54u;
label_123c54:
    // 0x123c54: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x123c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_123c58:
    // 0x123c58: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
label_123c5c:
    if (ctx->pc == 0x123C5Cu) {
        ctx->pc = 0x123C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C58u;
        // 0x123c5c: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C60u;
        goto label_123c60;
    }
    ctx->pc = 0x123C58u;
    {
        const bool branch_taken_0x123c58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x123C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C58u;
        // 0x123c5c: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c58) {
            ctx->pc = 0x123CBCu;
            goto label_123cbc;
        }
    }
    ctx->pc = 0x123C60u;
label_123c60:
    // 0x123c60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x123c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123c64:
    // 0x123c64: 0x8e02080c  lw          $v0, 0x80C($s0)
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
label_123c68:
    // 0x123c68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123c6c:
    // 0x123c6c: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_123c70:
    // 0x123c70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123c74:
    // 0x123c74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x123c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_123c78:
    // 0x123c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123c7c:
    // 0x123c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123c80:
    // 0x123c80: 0xc048e08  jal         func_123820
label_123c84:
    if (ctx->pc == 0x123C84u) {
        ctx->pc = 0x123C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C80u;
        // 0x123c84: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C88u;
        goto label_123c88;
    }
    ctx->pc = 0x123C80u;
    SET_GPR_U32(ctx, 31, 0x123C88u);
    ctx->pc = 0x123C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C80u;
    // 0x123c84: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123820u, 0x123C80u, 0x123C88u)) {
        return;
    }
    ctx->pc = 0x123C88u;
label_123c88:
    // 0x123c88: 0xc04094c  jal         func_102530
label_123c8c:
    if (ctx->pc == 0x123C8Cu) {
        ctx->pc = 0x123C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C88u;
        // 0x123c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C90u;
        goto label_123c90;
    }
    ctx->pc = 0x123C88u;
    SET_GPR_U32(ctx, 31, 0x123C90u);
    ctx->pc = 0x123C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C88u;
    // 0x123c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x123C88u, 0x123C90u)) {
        return;
    }
    ctx->pc = 0x123C90u;
label_123c90:
    // 0x123c90: 0xc601081c  lwc1        $f1, 0x81C($s0)
    ctx->pc = 0x123c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123c94:
    // 0x123c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123c98:
    // 0x123c98: 0xe600081c  swc1        $f0, 0x81C($s0)
    ctx->pc = 0x123c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2076), bits); }
label_123c9c:
    // 0x123c9c: 0xc040950  jal         func_102540
label_123ca0:
    if (ctx->pc == 0x123CA0u) {
        ctx->pc = 0x123CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C9Cu;
        // 0x123ca0: 0xe6010820  swc1        $f1, 0x820($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2080), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CA4u;
        goto label_123ca4;
    }
    ctx->pc = 0x123C9Cu;
    SET_GPR_U32(ctx, 31, 0x123CA4u);
    ctx->pc = 0x123CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C9Cu;
    // 0x123ca0: 0xe6010820  swc1        $f1, 0x820($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2080), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x123C9Cu, 0x123CA4u)) {
        return;
    }
    ctx->pc = 0x123CA4u;
label_123ca4:
    // 0x123ca4: 0xc6010828  lwc1        $f1, 0x828($s0)
    ctx->pc = 0x123ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123ca8:
    // 0x123ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123cac:
    // 0x123cac: 0xe6000828  swc1        $f0, 0x828($s0)
    ctx->pc = 0x123cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2088), bits); }
label_123cb0:
    // 0x123cb0: 0xc04095e  jal         func_102578
label_123cb4:
    if (ctx->pc == 0x123CB4u) {
        ctx->pc = 0x123CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CB0u;
        // 0x123cb4: 0xe601082c  swc1        $f1, 0x82C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CB8u;
        goto label_123cb8;
    }
    ctx->pc = 0x123CB0u;
    SET_GPR_U32(ctx, 31, 0x123CB8u);
    ctx->pc = 0x123CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CB0u;
    // 0x123cb4: 0xe601082c  swc1        $f1, 0x82C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2092), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102578u, 0x123CB0u, 0x123CB8u)) {
        return;
    }
    ctx->pc = 0x123CB8u;
label_123cb8:
    // 0x123cb8: 0xe6000824  swc1        $f0, 0x824($s0)
    ctx->pc = 0x123cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2084), bits); }
label_123cbc:
    // 0x123cbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x123cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123cc0:
    // 0x123cc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x123cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_123cc4:
    // 0x123cc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123cc8:
    // 0x123cc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x123cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123ccc:
    // 0x123ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123cd0:
    // 0x123cd0: 0x3e00008  jr          $ra
label_123cd4:
    if (ctx->pc == 0x123CD4u) {
        ctx->pc = 0x123CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CD0u;
        // 0x123cd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CD8u;
        goto label_fallthrough_0x123cd0;
    }
    ctx->pc = 0x123CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CD0u;
        // 0x123cd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123cd0:
    ctx->pc = 0x123CD8u;
}
