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

// Function: sub_00138B78
// Address: 0x138b78 - 0x138d10
void sub_00138B78_0x138b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138B78_0x138b78");
#endif

    switch (ctx->pc) {
        case 0x138b78u: goto label_138b78;
        case 0x138b7cu: goto label_138b7c;
        case 0x138b80u: goto label_138b80;
        case 0x138b84u: goto label_138b84;
        case 0x138b88u: goto label_138b88;
        case 0x138b8cu: goto label_138b8c;
        case 0x138b90u: goto label_138b90;
        case 0x138b94u: goto label_138b94;
        case 0x138b98u: goto label_138b98;
        case 0x138b9cu: goto label_138b9c;
        case 0x138ba0u: goto label_138ba0;
        case 0x138ba4u: goto label_138ba4;
        case 0x138ba8u: goto label_138ba8;
        case 0x138bacu: goto label_138bac;
        case 0x138bb0u: goto label_138bb0;
        case 0x138bb4u: goto label_138bb4;
        case 0x138bb8u: goto label_138bb8;
        case 0x138bbcu: goto label_138bbc;
        case 0x138bc0u: goto label_138bc0;
        case 0x138bc4u: goto label_138bc4;
        case 0x138bc8u: goto label_138bc8;
        case 0x138bccu: goto label_138bcc;
        case 0x138bd0u: goto label_138bd0;
        case 0x138bd4u: goto label_138bd4;
        case 0x138bd8u: goto label_138bd8;
        case 0x138bdcu: goto label_138bdc;
        case 0x138be0u: goto label_138be0;
        case 0x138be4u: goto label_138be4;
        case 0x138be8u: goto label_138be8;
        case 0x138becu: goto label_138bec;
        case 0x138bf0u: goto label_138bf0;
        case 0x138bf4u: goto label_138bf4;
        case 0x138bf8u: goto label_138bf8;
        case 0x138bfcu: goto label_138bfc;
        case 0x138c00u: goto label_138c00;
        case 0x138c04u: goto label_138c04;
        case 0x138c08u: goto label_138c08;
        case 0x138c0cu: goto label_138c0c;
        case 0x138c10u: goto label_138c10;
        case 0x138c14u: goto label_138c14;
        case 0x138c18u: goto label_138c18;
        case 0x138c1cu: goto label_138c1c;
        case 0x138c20u: goto label_138c20;
        case 0x138c24u: goto label_138c24;
        case 0x138c28u: goto label_138c28;
        case 0x138c2cu: goto label_138c2c;
        case 0x138c30u: goto label_138c30;
        case 0x138c34u: goto label_138c34;
        case 0x138c38u: goto label_138c38;
        case 0x138c3cu: goto label_138c3c;
        case 0x138c40u: goto label_138c40;
        case 0x138c44u: goto label_138c44;
        case 0x138c48u: goto label_138c48;
        case 0x138c4cu: goto label_138c4c;
        case 0x138c50u: goto label_138c50;
        case 0x138c54u: goto label_138c54;
        case 0x138c58u: goto label_138c58;
        case 0x138c5cu: goto label_138c5c;
        case 0x138c60u: goto label_138c60;
        case 0x138c64u: goto label_138c64;
        case 0x138c68u: goto label_138c68;
        case 0x138c6cu: goto label_138c6c;
        case 0x138c70u: goto label_138c70;
        case 0x138c74u: goto label_138c74;
        case 0x138c78u: goto label_138c78;
        case 0x138c7cu: goto label_138c7c;
        case 0x138c80u: goto label_138c80;
        case 0x138c84u: goto label_138c84;
        case 0x138c88u: goto label_138c88;
        case 0x138c8cu: goto label_138c8c;
        case 0x138c90u: goto label_138c90;
        case 0x138c94u: goto label_138c94;
        case 0x138c98u: goto label_138c98;
        case 0x138c9cu: goto label_138c9c;
        case 0x138ca0u: goto label_138ca0;
        case 0x138ca4u: goto label_138ca4;
        case 0x138ca8u: goto label_138ca8;
        case 0x138cacu: goto label_138cac;
        case 0x138cb0u: goto label_138cb0;
        case 0x138cb4u: goto label_138cb4;
        case 0x138cb8u: goto label_138cb8;
        case 0x138cbcu: goto label_138cbc;
        case 0x138cc0u: goto label_138cc0;
        case 0x138cc4u: goto label_138cc4;
        case 0x138cc8u: goto label_138cc8;
        case 0x138cccu: goto label_138ccc;
        case 0x138cd0u: goto label_138cd0;
        case 0x138cd4u: goto label_138cd4;
        case 0x138cd8u: goto label_138cd8;
        case 0x138cdcu: goto label_138cdc;
        case 0x138ce0u: goto label_138ce0;
        case 0x138ce4u: goto label_138ce4;
        case 0x138ce8u: goto label_138ce8;
        case 0x138cecu: goto label_138cec;
        case 0x138cf0u: goto label_138cf0;
        case 0x138cf4u: goto label_138cf4;
        case 0x138cf8u: goto label_138cf8;
        case 0x138cfcu: goto label_138cfc;
        case 0x138d00u: goto label_138d00;
        case 0x138d04u: goto label_138d04;
        case 0x138d08u: goto label_138d08;
        case 0x138d0cu: goto label_138d0c;
        default: break;
    }

    ctx->pc = 0x138b78u;

label_138b78:
    // 0x138b78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x138b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_138b7c:
    // 0x138b7c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x138b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_138b80:
    // 0x138b80: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x138b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_138b84:
    // 0x138b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_138b88:
    // 0x138b88: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x138b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_138b8c:
    // 0x138b8c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x138b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_138b90:
    // 0x138b90: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x138b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_138b94:
    // 0x138b94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x138b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_138b98:
    // 0x138b98: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x138b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_138b9c:
    // 0x138b9c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x138b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_138ba0:
    // 0x138ba0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_138ba4:
    // 0x138ba4: 0x8e221a98  lw          $v0, 0x1A98($s1)
    ctx->pc = 0x138ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6808)));
label_138ba8:
    // 0x138ba8: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_138bac:
    if (ctx->pc == 0x138BACu) {
        ctx->pc = 0x138BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BA8u;
        // 0x138bac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BB0u;
        goto label_138bb0;
    }
    ctx->pc = 0x138BA8u;
    {
        const bool branch_taken_0x138ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BA8u;
        // 0x138bac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ba8) {
            ctx->pc = 0x138CE4u;
            goto label_138ce4;
        }
    }
    ctx->pc = 0x138BB0u;
label_138bb0:
    // 0x138bb0: 0xa2201a94  sb          $zero, 0x1A94($s1)
    ctx->pc = 0x138bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6804), (uint8_t)GPR_U32(ctx, 0));
label_138bb4:
    // 0x138bb4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x138bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_138bb8:
    // 0x138bb8: 0xa2201a97  sb          $zero, 0x1A97($s1)
    ctx->pc = 0x138bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6807), (uint8_t)GPR_U32(ctx, 0));
label_138bbc:
    // 0x138bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x138bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138bc0:
    // 0x138bc0: 0xa2201a96  sb          $zero, 0x1A96($s1)
    ctx->pc = 0x138bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6806), (uint8_t)GPR_U32(ctx, 0));
label_138bc4:
    // 0x138bc4: 0xa2201a95  sb          $zero, 0x1A95($s1)
    ctx->pc = 0x138bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6805), (uint8_t)GPR_U32(ctx, 0));
label_138bc8:
    // 0x138bc8: 0xc07f1c0  jal         func_1FC700
label_138bcc:
    if (ctx->pc == 0x138BCCu) {
        ctx->pc = 0x138BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BC8u;
        // 0x138bcc: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BD0u;
        goto label_138bd0;
    }
    ctx->pc = 0x138BC8u;
    SET_GPR_U32(ctx, 31, 0x138BD0u);
    ctx->pc = 0x138BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BC8u;
    // 0x138bcc: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x138BC8u, 0x138BD0u)) {
        return;
    }
    ctx->pc = 0x138BD0u;
label_138bd0:
    // 0x138bd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x138bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138bd4:
    // 0x138bd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_138bd8:
    // 0x138bd8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_138bdc:
    if (ctx->pc == 0x138BDCu) {
        ctx->pc = 0x138BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BD8u;
        // 0x138bdc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BE0u;
        goto label_138be0;
    }
    ctx->pc = 0x138BD8u;
    {
        const bool branch_taken_0x138bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BD8u;
        // 0x138bdc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bd8) {
            ctx->pc = 0x138CE0u;
            goto label_138ce0;
        }
    }
    ctx->pc = 0x138BE0u;
label_138be0:
    // 0x138be0: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x138be0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
label_138be4:
    // 0x138be4: 0x2456108c  addiu       $s6, $v0, 0x108C
    ctx->pc = 0x138be4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_138be8:
    // 0x138be8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x138be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138bec:
    // 0x138bec: 0x0  nop
    ctx->pc = 0x138becu;
    // NOP
label_138bf0:
    // 0x138bf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x138bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_138bf4:
    // 0x138bf4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_138bf8:
    if (ctx->pc == 0x138BF8u) {
        ctx->pc = 0x138BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BF4u;
        // 0x138bf8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138BFCu;
        goto label_138bfc;
    }
    ctx->pc = 0x138BF4u;
    {
        const bool branch_taken_0x138bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BF4u;
        // 0x138bf8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bf4) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BFCu;
label_138bfc:
    // 0x138bfc: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x138bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_138c00:
    // 0x138c00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x138c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_138c04:
    // 0x138c04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x138c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_138c08:
    // 0x138c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138c0c:
    // 0x138c0c: 0xc08063c  jal         func_2018F0
label_138c10:
    if (ctx->pc == 0x138C10u) {
        ctx->pc = 0x138C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C0Cu;
        // 0x138c10: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C14u;
        goto label_138c14;
    }
    ctx->pc = 0x138C0Cu;
    SET_GPR_U32(ctx, 31, 0x138C14u);
    ctx->pc = 0x138C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C0Cu;
    // 0x138c10: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x138C0Cu, 0x138C14u)) {
        return;
    }
    ctx->pc = 0x138C14u;
label_138c14:
    // 0x138c14: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_138c18:
    if (ctx->pc == 0x138C18u) {
        ctx->pc = 0x138C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C14u;
        // 0x138c18: 0x26e4e560  addiu       $a0, $s7, -0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C1Cu;
        goto label_138c1c;
    }
    ctx->pc = 0x138C14u;
    {
        const bool branch_taken_0x138c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C14u;
        // 0x138c18: 0x26e4e560  addiu       $a0, $s7, -0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c14) {
            ctx->pc = 0x138CB4u;
            goto label_138cb4;
        }
    }
    ctx->pc = 0x138C1Cu;
label_138c1c:
    // 0x138c1c: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x138c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_138c20:
    // 0x138c20: 0x40f809  jalr        $v0
label_138c24:
    if (ctx->pc == 0x138C24u) {
        ctx->pc = 0x138C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C20u;
        // 0x138c24: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C28u;
        goto label_138c28;
    }
    ctx->pc = 0x138C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138C28u);
        ctx->pc = 0x138C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C20u;
        // 0x138c24: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138C20u, 0x138C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138C28u;
label_138c28:
    // 0x138c28: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_138c2c:
    if (ctx->pc == 0x138C2Cu) {
        ctx->pc = 0x138C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C28u;
        // 0x138c2c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C30u;
        goto label_138c30;
    }
    ctx->pc = 0x138C28u;
    {
        const bool branch_taken_0x138c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C28u;
        // 0x138c2c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c28) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C30u;
label_138c30:
    // 0x138c30: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x138c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_138c34:
    // 0x138c34: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_138c38:
    if (ctx->pc == 0x138C38u) {
        ctx->pc = 0x138C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C34u;
        // 0x138c38: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C3Cu;
        goto label_138c3c;
    }
    ctx->pc = 0x138C34u;
    {
        const bool branch_taken_0x138c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C34u;
        // 0x138c38: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c34) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C3Cu;
label_138c3c:
    // 0x138c3c: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x138c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_138c40:
    // 0x138c40: 0x245383f8  addiu       $s3, $v0, -0x7C08
    ctx->pc = 0x138c40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935544));
label_138c44:
    // 0x138c44: 0x26301a98  addiu       $s0, $s1, 0x1A98
    ctx->pc = 0x138c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6808));
label_138c48:
    // 0x138c48: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x138c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138c4c:
    // 0x138c4c: 0x0  nop
    ctx->pc = 0x138c4cu;
    // NOP
label_138c50:
    // 0x138c50: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x138c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_138c54:
    // 0x138c54: 0xc065c68  jal         func_1971A0
label_138c58:
    if (ctx->pc == 0x138C58u) {
        ctx->pc = 0x138C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C54u;
        // 0x138c58: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C5Cu;
        goto label_138c5c;
    }
    ctx->pc = 0x138C54u;
    SET_GPR_U32(ctx, 31, 0x138C5Cu);
    ctx->pc = 0x138C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C54u;
    // 0x138c58: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x138C54u, 0x138C5Cu)) {
        return;
    }
    ctx->pc = 0x138C5Cu;
label_138c5c:
    // 0x138c5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_138c60:
    if (ctx->pc == 0x138C60u) {
        ctx->pc = 0x138C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C5Cu;
        // 0x138c60: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C64u;
        goto label_138c64;
    }
    ctx->pc = 0x138C5Cu;
    {
        const bool branch_taken_0x138c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C5Cu;
        // 0x138c60: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c5c) {
            ctx->pc = 0x138CA4u;
            goto label_138ca4;
        }
    }
    ctx->pc = 0x138C64u;
label_138c64:
    // 0x138c64: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x138c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_138c68:
    // 0x138c68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_138c6c:
    if (ctx->pc == 0x138C6Cu) {
        ctx->pc = 0x138C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C68u;
        // 0x138c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C70u;
        goto label_138c70;
    }
    ctx->pc = 0x138C68u;
    {
        const bool branch_taken_0x138c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C68u;
        // 0x138c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c68) {
            ctx->pc = 0x138C74u;
            goto label_138c74;
        }
    }
    ctx->pc = 0x138C70u;
label_138c70:
    // 0x138c70: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_138c74:
    // 0x138c74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x138c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_138c78:
    // 0x138c78: 0x26271a94  addiu       $a3, $s1, 0x1A94
    ctx->pc = 0x138c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 6804));
label_138c7c:
    // 0x138c7c: 0xc058d5a  jal         func_163568
label_138c80:
    if (ctx->pc == 0x138C80u) {
        ctx->pc = 0x138C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C7Cu;
        // 0x138c80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C84u;
        goto label_138c84;
    }
    ctx->pc = 0x138C7Cu;
    SET_GPR_U32(ctx, 31, 0x138C84u);
    ctx->pc = 0x138C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C7Cu;
    // 0x138c80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x138C7Cu, 0x138C84u)) {
        return;
    }
    ctx->pc = 0x138C84u;
label_138c84:
    // 0x138c84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138c88:
    // 0x138c88: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_138c8c:
    if (ctx->pc == 0x138C8Cu) {
        ctx->pc = 0x138C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C88u;
        // 0x138c8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C90u;
        goto label_138c90;
    }
    ctx->pc = 0x138C88u;
    {
        const bool branch_taken_0x138c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c88) {
            ctx->pc = 0x138C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138C88u;
            // 0x138c8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138CA8u;
            goto label_138ca8;
        }
    }
    ctx->pc = 0x138C90u;
label_138c90:
    // 0x138c90: 0x8c620660  lw          $v0, 0x660($v1)
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
label_138c94:
    // 0x138c94: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_138c98:
    if (ctx->pc == 0x138C98u) {
        ctx->pc = 0x138C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C94u;
        // 0x138c98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138C9Cu;
        goto label_138c9c;
    }
    ctx->pc = 0x138C94u;
    {
        const bool branch_taken_0x138c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c94) {
            ctx->pc = 0x138C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138C94u;
            // 0x138c98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138CA8u;
            goto label_138ca8;
        }
    }
    ctx->pc = 0x138C9Cu;
label_138c9c:
    // 0x138c9c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_138ca0:
    // 0x138ca0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x138ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_138ca4:
    // 0x138ca4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x138ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_138ca8:
    // 0x138ca8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x138ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_138cac:
    // 0x138cac: 0x641ffe8  bgez        $s2, . + 4 + (-0x18 << 2)
label_138cb0:
    if (ctx->pc == 0x138CB0u) {
        ctx->pc = 0x138CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CACu;
        // 0x138cb0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CB4u;
        goto label_138cb4;
    }
    ctx->pc = 0x138CACu;
    {
        const bool branch_taken_0x138cac = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x138CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CACu;
        // 0x138cb0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cac) {
            ctx->pc = 0x138C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138c50;
        }
    }
    ctx->pc = 0x138CB4u;
label_138cb4:
    // 0x138cb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x138cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138cb8:
    // 0x138cb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x138cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138cbc:
    // 0x138cbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138cc0:
    // 0x138cc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_138cc4:
    // 0x138cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_138cc8:
    // 0x138cc8: 0xc07f0c8  jal         func_1FC320
label_138ccc:
    if (ctx->pc == 0x138CCCu) {
        ctx->pc = 0x138CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CC8u;
        // 0x138ccc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CD0u;
        goto label_138cd0;
    }
    ctx->pc = 0x138CC8u;
    SET_GPR_U32(ctx, 31, 0x138CD0u);
    ctx->pc = 0x138CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138CC8u;
    // 0x138ccc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x138CC8u, 0x138CD0u)) {
        return;
    }
    ctx->pc = 0x138CD0u;
label_138cd0:
    // 0x138cd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_138cd4:
    // 0x138cd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x138cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_138cd8:
    // 0x138cd8: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
label_138cdc:
    if (ctx->pc == 0x138CDCu) {
        ctx->pc = 0x138CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CD8u;
        // 0x138cdc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138CE0u;
        goto label_138ce0;
    }
    ctx->pc = 0x138CD8u;
    {
        const bool branch_taken_0x138cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CD8u;
        // 0x138cdc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cd8) {
            ctx->pc = 0x138BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138bf0;
        }
    }
    ctx->pc = 0x138CE0u;
label_138ce0:
    // 0x138ce0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x138ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_138ce4:
    // 0x138ce4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x138ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_138ce8:
    // 0x138ce8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x138ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_138cec:
    // 0x138cec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x138cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_138cf0:
    // 0x138cf0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x138cf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_138cf4:
    // 0x138cf4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_138cf8:
    // 0x138cf8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x138cf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138cfc:
    // 0x138cfc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x138cfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138d00:
    // 0x138d00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x138d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_138d04:
    // 0x138d04: 0x3e00008  jr          $ra
label_138d08:
    if (ctx->pc == 0x138D08u) {
        ctx->pc = 0x138D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D04u;
        // 0x138d08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138D0Cu;
        goto label_138d0c;
    }
    ctx->pc = 0x138D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D04u;
        // 0x138d08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D0Cu;
label_138d0c:
    // 0x138d0c: 0x0  nop
    ctx->pc = 0x138d0cu;
    // NOP
    ctx->pc = 0x138d10u;
}
