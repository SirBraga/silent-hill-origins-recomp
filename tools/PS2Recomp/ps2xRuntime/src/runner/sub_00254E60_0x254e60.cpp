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

// Function: sub_00254E60
// Address: 0x254e60 - 0x254f28
void sub_00254E60_0x254e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E60_0x254e60");
#endif

    switch (ctx->pc) {
        case 0x254e9cu: goto label_254e9c;
        case 0x254ebcu: goto label_254ebc;
        case 0x254ed0u: goto label_254ed0;
        case 0x254ee4u: goto label_254ee4;
        default: break;
    }

    ctx->pc = 0x254e60u;

    // 0x254e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254e64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x254e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x254e68: 0x8c423fa8  lw          $v0, 0x3FA8($v0)
    ctx->pc = 0x254e68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x254e6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x254e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x254e70: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x254e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x254e74: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x254e74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x254e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254e80: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x254e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x254e84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x254e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x254e8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x254e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254e90: 0x24a54300  addiu       $a1, $a1, 0x4300
    ctx->pc = 0x254e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17152));
    // 0x254e94: 0xc093210  jal         func_24C840
    ctx->pc = 0x254E94u;
    SET_GPR_U32(ctx, 31, 0x254E9Cu);
    ctx->pc = 0x254E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E94u;
    // 0x254e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C840u, 0x254E94u, 0x254E9Cu)) {
        return;
    }
    ctx->pc = 0x254E9Cu;
label_254e9c:
    // 0x254e9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x254e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x254ea0: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x254ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x254ea4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x254ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x254ea8: 0x24a54320  addiu       $a1, $a1, 0x4320
    ctx->pc = 0x254ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17184));
    // 0x254eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x254eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254eb0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x254eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x254eb4: 0xc093210  jal         func_24C840
    ctx->pc = 0x254EB4u;
    SET_GPR_U32(ctx, 31, 0x254EBCu);
    ctx->pc = 0x254EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EB4u;
    // 0x254eb8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C840u, 0x254EB4u, 0x254EBCu)) {
        return;
    }
    ctx->pc = 0x254EBCu;
label_254ebc:
    // 0x254ebc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x254ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x254ec0: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x254ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x254ec4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x254ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x254ec8: 0xc093106  jal         func_24C418
    ctx->pc = 0x254EC8u;
    SET_GPR_U32(ctx, 31, 0x254ED0u);
    ctx->pc = 0x254ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EC8u;
    // 0x254ecc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x254EC8u, 0x254ED0u)) {
        return;
    }
    ctx->pc = 0x254ED0u;
label_254ed0:
    // 0x254ed0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x254ed4: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x254ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x254ed8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x254ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x254edc: 0xc093106  jal         func_24C418
    ctx->pc = 0x254EDCu;
    SET_GPR_U32(ctx, 31, 0x254EE4u);
    ctx->pc = 0x254EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EDCu;
    // 0x254ee0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x254EDCu, 0x254EE4u)) {
        return;
    }
    ctx->pc = 0x254EE4u;
label_254ee4:
    // 0x254ee4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x254ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x254ee8: 0x8c843fac  lw          $a0, 0x3FAC($a0)
    ctx->pc = 0x254ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3FACu));
    // 0x254eec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x254eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ef0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x254ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x254ef4: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x254ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FA8u));
    // 0x254ef8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x254ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x254efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254f00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x254f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x254f04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x254f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x254f08: 0xac243fac  sw          $a0, 0x3FAC($at)
    ctx->pc = 0x254f08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FACu, _value); } while (0);
    // 0x254f0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x254f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254f14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x254f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x254f18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x254f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x254f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x254F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F1Cu;
        // 0x254f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254F24u;
    // 0x254f24: 0x0  nop
    ctx->pc = 0x254f24u;
    // NOP
    ctx->pc = 0x254f28u;
}
