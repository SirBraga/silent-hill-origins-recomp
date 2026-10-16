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

// Function: sub_002479C8
// Address: 0x2479c8 - 0x247aa8
void sub_002479C8_0x2479c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002479C8_0x2479c8");
#endif

    switch (ctx->pc) {
        case 0x2479e0u: goto label_2479e0;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f4u: goto label_2479f4;
        case 0x247a00u: goto label_247a00;
        case 0x247a34u: goto label_247a34;
        case 0x247a40u: goto label_247a40;
        case 0x247a48u: goto label_247a48;
        case 0x247a54u: goto label_247a54;
        case 0x247a80u: goto label_247a80;
        case 0x247a8cu: goto label_247a8c;
        case 0x247a94u: goto label_247a94;
        default: break;
    }

    ctx->pc = 0x2479c8u;

    // 0x2479c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2479c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2479cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2479ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2479d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2479d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2479d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2479d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2479d8: 0xc091e4c  jal         func_247930
    ctx->pc = 0x2479D8u;
    SET_GPR_U32(ctx, 31, 0x2479E0u);
    ctx->pc = 0x2479DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479D8u;
    // 0x2479dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247930u, 0x2479D8u, 0x2479E0u)) {
        return;
    }
    ctx->pc = 0x2479E0u;
label_2479e0:
    // 0x2479e0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x2479e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2479e4: 0xc091e66  jal         func_247998
    ctx->pc = 0x2479E4u;
    SET_GPR_U32(ctx, 31, 0x2479ECu);
    ctx->pc = 0x2479E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479E4u;
    // 0x2479e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x2479E4u, 0x2479ECu)) {
        return;
    }
    ctx->pc = 0x2479ECu;
label_2479ec:
    // 0x2479ec: 0xc091e64  jal         func_247990
    ctx->pc = 0x2479ECu;
    SET_GPR_U32(ctx, 31, 0x2479F4u);
    ctx->pc = 0x2479F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479ECu;
    // 0x2479f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247990u, 0x2479ECu, 0x2479F4u)) {
        return;
    }
    ctx->pc = 0x2479F4u;
label_2479f4:
    // 0x2479f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2479f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479f8: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2479F8u;
    SET_GPR_U32(ctx, 31, 0x247A00u);
    ctx->pc = 0x2479FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479F8u;
    // 0x2479fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2479F8u, 0x247A00u)) {
        return;
    }
    ctx->pc = 0x247A00u;
label_247a00:
    // 0x247a00: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x247a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x247a04: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x247a04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x247a08: 0x720424c8  ppacw       $a0, $s0, $a0
    ctx->pc = 0x247a08u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x247a0c: 0x721114c8  ppacw       $v0, $s0, $s1
    ctx->pc = 0x247a0cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 17)));
    // 0x247a10: 0x708224c8  ppacw       $a0, $a0, $v0
    ctx->pc = 0x247a10u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x247a14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x247a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x247a18: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x247a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x247a1c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x247a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x247a20: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x247a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x247a24: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247a28: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247a2c: 0xc091e4c  jal         func_247930
    ctx->pc = 0x247A2Cu;
    SET_GPR_U32(ctx, 31, 0x247A34u);
    ctx->pc = 0x247A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A2Cu;
    // 0x247a30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247930u, 0x247A2Cu, 0x247A34u)) {
        return;
    }
    ctx->pc = 0x247A34u;
label_247a34:
    // 0x247a34: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x247a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x247a38: 0xc091e66  jal         func_247998
    ctx->pc = 0x247A38u;
    SET_GPR_U32(ctx, 31, 0x247A40u);
    ctx->pc = 0x247A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A38u;
    // 0x247a3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247A38u, 0x247A40u)) {
        return;
    }
    ctx->pc = 0x247A40u;
label_247a40:
    // 0x247a40: 0xc091e64  jal         func_247990
    ctx->pc = 0x247A40u;
    SET_GPR_U32(ctx, 31, 0x247A48u);
    ctx->pc = 0x247A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A40u;
    // 0x247a44: 0x72118cc8  ppacw       $s1, $s0, $s1 (Delay Slot)
    SET_GPR_VEC(ctx, 17, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247990u, 0x247A40u, 0x247A48u)) {
        return;
    }
    ctx->pc = 0x247A48u;
label_247a48:
    // 0x247a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a4c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x247A4Cu;
    SET_GPR_U32(ctx, 31, 0x247A54u);
    ctx->pc = 0x247A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A4Cu;
    // 0x247a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x247A4Cu, 0x247A54u)) {
        return;
    }
    ctx->pc = 0x247A54u;
label_247a54:
    // 0x247a54: 0x3c031300  lui         $v1, 0x1300
    ctx->pc = 0x247a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4864 << 16));
    // 0x247a58: 0x720384c8  ppacw       $s0, $s0, $v1
    ctx->pc = 0x247a58u;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x247a5c: 0x721184c8  ppacw       $s0, $s0, $s1
    ctx->pc = 0x247a5cu;
    SET_GPR_VEC(ctx, 16, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 17)));
    // 0x247a60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247a64: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x247a68: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x247a68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
    // 0x247a6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x247a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x247a70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247a74: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x247a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247a78: 0xc091e4c  jal         func_247930
    ctx->pc = 0x247A78u;
    SET_GPR_U32(ctx, 31, 0x247A80u);
    ctx->pc = 0x247A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A78u;
    // 0x247a7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247930u, 0x247A78u, 0x247A80u)) {
        return;
    }
    ctx->pc = 0x247A80u;
label_247a80:
    // 0x247a80: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x247a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x247a84: 0xc091e66  jal         func_247998
    ctx->pc = 0x247A84u;
    SET_GPR_U32(ctx, 31, 0x247A8Cu);
    ctx->pc = 0x247A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A84u;
    // 0x247a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247A84u, 0x247A8Cu)) {
        return;
    }
    ctx->pc = 0x247A8Cu;
label_247a8c:
    // 0x247a8c: 0xc091e64  jal         func_247990
    ctx->pc = 0x247A8Cu;
    SET_GPR_U32(ctx, 31, 0x247A94u);
    ctx->pc = 0x247990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247990u, 0x247A8Cu, 0x247A94u)) {
        return;
    }
    ctx->pc = 0x247A94u;
label_247a94:
    // 0x247a94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x247a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x247AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AA0u;
        // 0x247aa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247AA8u;
}
