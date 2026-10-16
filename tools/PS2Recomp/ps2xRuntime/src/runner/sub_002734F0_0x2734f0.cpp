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

// Function: sub_002734F0
// Address: 0x2734f0 - 0x273560
void sub_002734F0_0x2734f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002734F0_0x2734f0");
#endif

    switch (ctx->pc) {
        case 0x273538u: goto label_273538;
        default: break;
    }

    ctx->pc = 0x2734f0u;

    // 0x2734f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2734f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2734f4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2734f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2734f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2734f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2734fc: 0x245153c8  addiu       $s1, $v0, 0x53C8
    ctx->pc = 0x2734fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21448));
    // 0x273500: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x273500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x273504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273508: 0xac4053c8  sw          $zero, 0x53C8($v0)
    ctx->pc = 0x273508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7053C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7053C8u, _value); } while (0);
    // 0x27350c: 0xaf808f84  sw          $zero, -0x707C($gp)
    ctx->pc = 0x27350cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938500), GPR_U32(ctx, 0));
    // 0x273510: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x273510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7053CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7053CCu, _value); } while (0);
    // 0x273514: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x273514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7053D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7053D0u, _value); } while (0);
    // 0x273518: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x273518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7053DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7053DCu, _value); } while (0);
    // 0x27351c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x27351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x273520: 0x244253b0  addiu       $v0, $v0, 0x53B0
    ctx->pc = 0x273520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21424));
    // 0x273524: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x273524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27352c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x27352cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7053B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7053B8u, _value); } while (0);
    // 0x273530: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x273530u;
    SET_GPR_U32(ctx, 31, 0x273538u);
    ctx->pc = 0x273534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273530u;
    // 0x273534: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x273530u, 0x273538u)) {
        return;
    }
    ctx->pc = 0x273538u;
label_273538:
    // 0x273538: 0xaf828f80  sw          $v0, -0x7080($gp)
    ctx->pc = 0x273538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938496), GPR_U32(ctx, 2));
    // 0x27353c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x27353cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x273540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x273544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27354c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273550: 0x3e00008  jr          $ra
    ctx->pc = 0x273550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273550u;
        // 0x273554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273558u;
    // 0x273558: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x273558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x27355c: 0x0  nop
    ctx->pc = 0x27355cu;
    // NOP
    ctx->pc = 0x273560u;
}
