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

// Function: sub_0017D970
// Address: 0x17d970 - 0x17d9f0
void sub_0017D970_0x17d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D970_0x17d970");
#endif

    switch (ctx->pc) {
        case 0x17d984u: goto label_17d984;
        case 0x17d9d8u: goto label_17d9d8;
        default: break;
    }

    ctx->pc = 0x17d970u;

    // 0x17d970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d97c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x17D97Cu;
    SET_GPR_U32(ctx, 31, 0x17D984u);
    ctx->pc = 0x17D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D97Cu;
    // 0x17d980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x17D97Cu, 0x17D984u)) {
        return;
    }
    ctx->pc = 0x17D984u;
label_17d984:
    // 0x17d984: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17d984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17d988: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17d98c: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x17d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x17d990: 0x24637550  addiu       $v1, $v1, 0x7550
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30032));
    // 0x17d994: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17d994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x17d998: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17d998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17d99c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x17d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x17d9a0: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x17d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17d9a4: 0x24a599c0  addiu       $a1, $a1, -0x6640
    ctx->pc = 0x17d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941120));
    // 0x17d9a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x17d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x17d9ac: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x17d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x17d9b0: 0x248446a0  addiu       $a0, $a0, 0x46A0
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    // 0x17d9b4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17d9b8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17d9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17d9bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17d9c0: 0x24a57540  addiu       $a1, $a1, 0x7540
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
    // 0x17d9c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17d9c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9cc: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x17d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x17d9d0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17D9D0u;
    SET_GPR_U32(ctx, 31, 0x17D9D8u);
    ctx->pc = 0x17D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9D0u;
    // 0x17d9d4: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17D9D0u, 0x17D9D8u)) {
        return;
    }
    ctx->pc = 0x17D9D8u;
label_17d9d8:
    // 0x17d9d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d9e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9E4u;
        // 0x17d9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D9ECu;
    // 0x17d9ec: 0x0  nop
    ctx->pc = 0x17d9ecu;
    // NOP
    ctx->pc = 0x17d9f0u;
}
