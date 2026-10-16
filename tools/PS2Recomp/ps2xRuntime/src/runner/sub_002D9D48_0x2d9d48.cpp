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

// Function: sub_002D9D48
// Address: 0x2d9d48 - 0x2d9dc0
void sub_002D9D48_0x2d9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9D48_0x2d9d48");
#endif

    switch (ctx->pc) {
        case 0x2d9d48u: goto label_2d9d48;
        case 0x2d9d4cu: goto label_2d9d4c;
        case 0x2d9d50u: goto label_2d9d50;
        case 0x2d9d54u: goto label_2d9d54;
        case 0x2d9d58u: goto label_2d9d58;
        case 0x2d9d5cu: goto label_2d9d5c;
        case 0x2d9d60u: goto label_2d9d60;
        case 0x2d9d64u: goto label_2d9d64;
        case 0x2d9d68u: goto label_2d9d68;
        case 0x2d9d6cu: goto label_2d9d6c;
        case 0x2d9d70u: goto label_2d9d70;
        case 0x2d9d74u: goto label_2d9d74;
        case 0x2d9d78u: goto label_2d9d78;
        case 0x2d9d7cu: goto label_2d9d7c;
        case 0x2d9d80u: goto label_2d9d80;
        case 0x2d9d84u: goto label_2d9d84;
        case 0x2d9d88u: goto label_2d9d88;
        case 0x2d9d8cu: goto label_2d9d8c;
        case 0x2d9d90u: goto label_2d9d90;
        case 0x2d9d94u: goto label_2d9d94;
        case 0x2d9d98u: goto label_2d9d98;
        case 0x2d9d9cu: goto label_2d9d9c;
        case 0x2d9da0u: goto label_2d9da0;
        case 0x2d9da4u: goto label_2d9da4;
        case 0x2d9da8u: goto label_2d9da8;
        case 0x2d9dacu: goto label_2d9dac;
        case 0x2d9db0u: goto label_2d9db0;
        case 0x2d9db4u: goto label_2d9db4;
        case 0x2d9db8u: goto label_2d9db8;
        case 0x2d9dbcu: goto label_2d9dbc;
        default: break;
    }

    ctx->pc = 0x2d9d48u;

label_2d9d48:
    // 0x2d9d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d9d4c:
    // 0x2d9d4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d9d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2d9d50:
    // 0x2d9d50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d9d54:
    // 0x2d9d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d58:
    // 0x2d9d58: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2d9d58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d9d5c:
    // 0x2d9d5c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2d9d60:
    if (ctx->pc == 0x2D9D60u) {
        ctx->pc = 0x2D9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D5Cu;
        // 0x2d9d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9D64u;
        goto label_2d9d64;
    }
    ctx->pc = 0x2D9D5Cu;
    {
        const bool branch_taken_0x2d9d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D5Cu;
        // 0x2d9d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d5c) {
            ctx->pc = 0x2D9D90u;
            goto label_2d9d90;
        }
    }
    ctx->pc = 0x2D9D64u;
label_2d9d64:
    // 0x2d9d64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9d68:
    // 0x2d9d68: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9d68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9d6c:
    // 0x2d9d6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9d70:
    // 0x2d9d70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d9d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d74:
    // 0x2d9d74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d9d78:
    // 0x2d9d78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9d7c:
    // 0x2d9d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9d80:
    // 0x2d9d80: 0x40f809  jalr        $v0
label_2d9d84:
    if (ctx->pc == 0x2D9D84u) {
        ctx->pc = 0x2D9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D80u;
        // 0x2d9d84: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9D88u;
        goto label_2d9d88;
    }
    ctx->pc = 0x2D9D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9D88u);
        ctx->pc = 0x2D9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D80u;
        // 0x2d9d84: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D80u, 0x2D9D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9D88u;
label_2d9d88:
    // 0x2d9d88: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9d88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9d8c:
    // 0x2d9d8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d90:
    // 0x2d9d90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d9d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9d94:
    // 0x2d9d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9d98:
    // 0x2d9d98: 0x3e00008  jr          $ra
label_2d9d9c:
    if (ctx->pc == 0x2D9D9Cu) {
        ctx->pc = 0x2D9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D98u;
        // 0x2d9d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9DA0u;
        goto label_2d9da0;
    }
    ctx->pc = 0x2D9D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D98u;
        // 0x2d9d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9DA0u;
label_2d9da0:
    // 0x2d9da0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9da4:
    // 0x2d9da4: 0x0  nop
    ctx->pc = 0x2d9da4u;
    // NOP
label_2d9da8:
    // 0x2d9da8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9dac:
    // 0x2d9dac: 0x0  nop
    ctx->pc = 0x2d9dacu;
    // NOP
label_2d9db0:
    // 0x2d9db0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9db4:
    // 0x2d9db4: 0x0  nop
    ctx->pc = 0x2d9db4u;
    // NOP
label_2d9db8:
    // 0x2d9db8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9dbc:
    // 0x2d9dbc: 0x0  nop
    ctx->pc = 0x2d9dbcu;
    // NOP
    ctx->pc = 0x2d9dc0u;
}
