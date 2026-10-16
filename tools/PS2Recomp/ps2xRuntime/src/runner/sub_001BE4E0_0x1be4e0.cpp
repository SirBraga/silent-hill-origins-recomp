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

// Function: sub_001BE4E0
// Address: 0x1be4e0 - 0x1be570
void sub_001BE4E0_0x1be4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE4E0_0x1be4e0");
#endif

    switch (ctx->pc) {
        case 0x1be53cu: goto label_1be53c;
        case 0x1be54cu: goto label_1be54c;
        case 0x1be55cu: goto label_1be55c;
        default: break;
    }

    ctx->pc = 0x1be4e0u;

    // 0x1be4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be4e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1be4e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be4ec: 0x2442d6e8  addiu       $v0, $v0, -0x2918
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956776));
    // 0x1be4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1be4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1be4fc: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1be4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1be500: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1be500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1be504: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1be504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1be508: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1be508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1be50c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1be50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1be510: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1be510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1be514: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1be514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1be518: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1be518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1be51c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1be51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1be520: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1be520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1be524: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1be524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1be528: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1be528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1be52c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1be52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1be530: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1be530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1be534: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BE534u;
    SET_GPR_U32(ctx, 31, 0x1BE53Cu);
    ctx->pc = 0x1BE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE534u;
    // 0x1be538: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BE534u, 0x1BE53Cu)) {
        return;
    }
    ctx->pc = 0x1BE53Cu;
label_1be53c:
    // 0x1be53c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1be53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1be540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be544: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BE544u;
    SET_GPR_U32(ctx, 31, 0x1BE54Cu);
    ctx->pc = 0x1BE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE544u;
    // 0x1be548: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BE544u, 0x1BE54Cu)) {
        return;
    }
    ctx->pc = 0x1BE54Cu;
label_1be54c:
    // 0x1be54c: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x1be54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1be550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be554: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BE554u;
    SET_GPR_U32(ctx, 31, 0x1BE55Cu);
    ctx->pc = 0x1BE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE554u;
    // 0x1be558: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BE554u, 0x1BE55Cu)) {
        return;
    }
    ctx->pc = 0x1BE55Cu;
label_1be55c:
    // 0x1be55c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1be55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be568: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE568u;
        // 0x1be56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE570u;
}
