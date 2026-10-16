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

// Function: sub_001794D0
// Address: 0x1794d0 - 0x179558
void sub_001794D0_0x1794d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001794D0_0x1794d0");
#endif

    switch (ctx->pc) {
        case 0x1794ecu: goto label_1794ec;
        case 0x1794f4u: goto label_1794f4;
        case 0x179504u: goto label_179504;
        case 0x179514u: goto label_179514;
        case 0x179520u: goto label_179520;
        case 0x179528u: goto label_179528;
        case 0x179538u: goto label_179538;
        default: break;
    }

    ctx->pc = 0x1794d0u;

    // 0x1794d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1794d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1794d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1794d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1794d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1794d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1794dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1794dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1794e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1794e4: 0xc05e57a  jal         func_1795E8
    ctx->pc = 0x1794E4u;
    SET_GPR_U32(ctx, 31, 0x1794ECu);
    ctx->pc = 0x1794E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794E4u;
    // 0x1794e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1795E8u, 0x1794E4u, 0x1794ECu)) {
        return;
    }
    ctx->pc = 0x1794ECu;
label_1794ec:
    // 0x1794ec: 0xc0773f4  jal         func_1DCFD0
    ctx->pc = 0x1794ECu;
    SET_GPR_U32(ctx, 31, 0x1794F4u);
    ctx->pc = 0x1DCFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCFD0u, 0x1794ECu, 0x1794F4u)) {
        return;
    }
    ctx->pc = 0x1794F4u;
label_1794f4:
    // 0x1794f4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x1794f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1794f8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1794f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1794fc: 0xc097a9e  jal         func_25EA78
    ctx->pc = 0x1794FCu;
    SET_GPR_U32(ctx, 31, 0x179504u);
    ctx->pc = 0x179500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794FCu;
    // 0x179500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x1794FCu, 0x179504u)) {
        return;
    }
    ctx->pc = 0x179504u;
label_179504:
    // 0x179504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179508: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x179508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17950c: 0xc097b28  jal         func_25ECA0
    ctx->pc = 0x17950Cu;
    SET_GPR_U32(ctx, 31, 0x179514u);
    ctx->pc = 0x179510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17950Cu;
    // 0x179510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x17950Cu, 0x179514u)) {
        return;
    }
    ctx->pc = 0x179514u;
label_179514:
    // 0x179514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179518: 0xc056364  jal         func_158D90
    ctx->pc = 0x179518u;
    SET_GPR_U32(ctx, 31, 0x179520u);
    ctx->pc = 0x17951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179518u;
    // 0x17951c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158D90u, 0x179518u, 0x179520u)) {
        return;
    }
    ctx->pc = 0x179520u;
label_179520:
    // 0x179520: 0xc05e598  jal         func_179660
    ctx->pc = 0x179520u;
    SET_GPR_U32(ctx, 31, 0x179528u);
    ctx->pc = 0x179524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179520u;
    // 0x179524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179660u, 0x179520u, 0x179528u)) {
        return;
    }
    ctx->pc = 0x179528u;
label_179528:
    // 0x179528: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x179528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x17952c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179530: 0xc097b28  jal         func_25ECA0
    ctx->pc = 0x179530u;
    SET_GPR_U32(ctx, 31, 0x179538u);
    ctx->pc = 0x179534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179530u;
    // 0x179534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x179530u, 0x179538u)) {
        return;
    }
    ctx->pc = 0x179538u;
label_179538:
    // 0x179538: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x179538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17953c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17953cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179544: 0x3e00008  jr          $ra
    ctx->pc = 0x179544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179544u;
        // 0x179548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17954Cu;
    // 0x17954c: 0x0  nop
    ctx->pc = 0x17954cu;
    // NOP
    // 0x179550: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x179550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179554: 0x0  nop
    ctx->pc = 0x179554u;
    // NOP
    ctx->pc = 0x179558u;
}
