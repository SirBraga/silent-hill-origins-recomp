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

// Function: sub_0017EA18
// Address: 0x17ea18 - 0x17eae0
void sub_0017EA18_0x17ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EA18_0x17ea18");
#endif

    switch (ctx->pc) {
        case 0x17ea40u: goto label_17ea40;
        case 0x17ea48u: goto label_17ea48;
        case 0x17ea90u: goto label_17ea90;
        case 0x17eaa0u: goto label_17eaa0;
        case 0x17eab0u: goto label_17eab0;
        case 0x17eac0u: goto label_17eac0;
        case 0x17ead0u: goto label_17ead0;
        default: break;
    }

    ctx->pc = 0x17ea18u;

    // 0x17ea18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ea1c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ea20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ea24: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ea28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17ea28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ea2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ea30: 0xac708974  sw          $s0, -0x768C($v1)
    ctx->pc = 0x17ea30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338974u, _value); } while (0);
    // 0x17ea34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea38: 0xc05fdd6  jal         func_17F758
    ctx->pc = 0x17EA38u;
    SET_GPR_U32(ctx, 31, 0x17EA40u);
    ctx->pc = 0x17EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA38u;
    // 0x17ea3c: 0xac408980  sw          $zero, -0x7680($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F758u, 0x17EA38u, 0x17EA40u)) {
        return;
    }
    ctx->pc = 0x17EA40u;
label_17ea40:
    // 0x17ea40: 0xc07cd60  jal         func_1F3580
    ctx->pc = 0x17EA40u;
    SET_GPR_U32(ctx, 31, 0x17EA48u);
    ctx->pc = 0x1F3580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3580u, 0x17EA40u, 0x17EA48u)) {
        return;
    }
    ctx->pc = 0x17EA48u;
label_17ea48:
    // 0x17ea48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EA48u;
    {
        const bool branch_taken_0x17ea48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA48u;
        // 0x17ea4c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea48) {
            ctx->pc = 0x17EA58u;
            goto label_17ea58;
        }
    }
    ctx->pc = 0x17EA50u;
    // 0x17ea50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17EA50u;
    {
        const bool branch_taken_0x17ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA50u;
        // 0x17ea54: 0xac508984  sw          $s0, -0x767C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936964), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea50) {
            ctx->pc = 0x17EA5Cu;
            goto label_17ea5c;
        }
    }
    ctx->pc = 0x17EA58u;
label_17ea58:
    // 0x17ea58: 0xac408984  sw          $zero, -0x767C($v0)
    ctx->pc = 0x17ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936964), GPR_U32(ctx, 0));
label_17ea5c:
    // 0x17ea5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ea5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ea64: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17ea68: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x17ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x17ea6c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x17ea70: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ea74: 0xac908984  sw          $s0, -0x767C($a0)
    ctx->pc = 0x17ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294936964), GPR_U32(ctx, 16));
    // 0x17ea78: 0xac70898c  sw          $s0, -0x7674($v1)
    ctx->pc = 0x17ea78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x33898Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33898Cu, _value); } while (0);
    // 0x17ea7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea80: 0xaca08990  sw          $zero, -0x7670($a1)
    ctx->pc = 0x17ea80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x338990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338990u, _value); } while (0);
    // 0x17ea84: 0xacc08994  sw          $zero, -0x766C($a2)
    ctx->pc = 0x17ea84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x338994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338994u, _value); } while (0);
    // 0x17ea88: 0xc05fdf4  jal         func_17F7D0
    ctx->pc = 0x17EA88u;
    SET_GPR_U32(ctx, 31, 0x17EA90u);
    ctx->pc = 0x17EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA88u;
    // 0x17ea8c: 0xac508988  sw          $s0, -0x7678($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936968), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F7D0u, 0x17EA88u, 0x17EA90u)) {
        return;
    }
    ctx->pc = 0x17EA90u;
label_17ea90:
    // 0x17ea90: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17ea94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ea98: 0xc05fe08  jal         func_17F820
    ctx->pc = 0x17EA98u;
    SET_GPR_U32(ctx, 31, 0x17EAA0u);
    ctx->pc = 0x17EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA98u;
    // 0x17ea9c: 0xac508998  sw          $s0, -0x7668($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936984), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F820u, 0x17EA98u, 0x17EAA0u)) {
        return;
    }
    ctx->pc = 0x17EAA0u;
label_17eaa0:
    // 0x17eaa0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17eaa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaa8: 0xc05fe10  jal         func_17F840
    ctx->pc = 0x17EAA8u;
    SET_GPR_U32(ctx, 31, 0x17EAB0u);
    ctx->pc = 0x17EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAA8u;
    // 0x17eaac: 0xac40899c  sw          $zero, -0x7664($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936988), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F840u, 0x17EAA8u, 0x17EAB0u)) {
        return;
    }
    ctx->pc = 0x17EAB0u;
label_17eab0:
    // 0x17eab0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17eab4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17eab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eab8: 0xc05fdca  jal         func_17F728
    ctx->pc = 0x17EAB8u;
    SET_GPR_U32(ctx, 31, 0x17EAC0u);
    ctx->pc = 0x17EABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAB8u;
    // 0x17eabc: 0xac4089a0  sw          $zero, -0x7660($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936992), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F728u, 0x17EAB8u, 0x17EAC0u)) {
        return;
    }
    ctx->pc = 0x17EAC0u;
label_17eac0:
    // 0x17eac0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17eac4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eac8: 0xc05fe1e  jal         func_17F878
    ctx->pc = 0x17EAC8u;
    SET_GPR_U32(ctx, 31, 0x17EAD0u);
    ctx->pc = 0x17EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAC8u;
    // 0x17eacc: 0xac4089a4  sw          $zero, -0x765C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936996), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F878u, 0x17EAC8u, 0x17EAD0u)) {
        return;
    }
    ctx->pc = 0x17EAD0u;
label_17ead0:
    // 0x17ead0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ead0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ead4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ead4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ead8: 0x3e00008  jr          $ra
    ctx->pc = 0x17EAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAD8u;
        // 0x17eadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EAE0u;
}
