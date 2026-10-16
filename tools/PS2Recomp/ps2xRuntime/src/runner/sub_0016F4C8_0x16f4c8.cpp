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

// Function: sub_0016F4C8
// Address: 0x16f4c8 - 0x16f548
void sub_0016F4C8_0x16f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F4C8_0x16f4c8");
#endif

    switch (ctx->pc) {
        case 0x16f4e4u: goto label_16f4e4;
        case 0x16f524u: goto label_16f524;
        case 0x16f530u: goto label_16f530;
        default: break;
    }

    ctx->pc = 0x16f4c8u;

    // 0x16f4c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f4cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16f4d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16f4d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16f4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f4dc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16F4DCu;
    SET_GPR_U32(ctx, 31, 0x16F4E4u);
    ctx->pc = 0x16F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4DCu;
    // 0x16f4e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16F4DCu, 0x16F4E4u)) {
        return;
    }
    ctx->pc = 0x16F4E4u;
label_16f4e4:
    // 0x16f4e4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16f4e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f4ec: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x16f4f0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16F4F0u;
    {
        const bool branch_taken_0x16f4f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4F0u;
        // 0x16f4f4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4f0) {
            ctx->pc = 0x16F530u;
            goto label_16f530;
        }
    }
    ctx->pc = 0x16F4F8u;
    // 0x16f4f8: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x16f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16f4fc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16f500: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x16f500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x16f504: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16f504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16f508: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F508u;
    {
        const bool branch_taken_0x16f508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F508u;
        // 0x16f50c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f508) {
            ctx->pc = 0x16F524u;
            goto label_16f524;
        }
    }
    ctx->pc = 0x16F510u;
    // 0x16f510: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F514u;
    {
        const bool branch_taken_0x16f514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F514u;
        // 0x16f518: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f514) {
            ctx->pc = 0x16F528u;
            goto label_16f528;
        }
    }
    ctx->pc = 0x16F51Cu;
    // 0x16f51c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16F51Cu;
    SET_GPR_U32(ctx, 31, 0x16F524u);
    ctx->pc = 0x16F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F51Cu;
    // 0x16f520: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16F51Cu, 0x16F524u)) {
        return;
    }
    ctx->pc = 0x16F524u;
label_16f524:
    // 0x16f524: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_16f528:
    // 0x16f528: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F528u;
    SET_GPR_U32(ctx, 31, 0x16F530u);
    ctx->pc = 0x16F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F528u;
    // 0x16f52c: 0x26058880  addiu       $a1, $s0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F528u, 0x16F530u)) {
        return;
    }
    ctx->pc = 0x16F530u;
label_16f530:
    // 0x16f530: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16f530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f534: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16f534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f53c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F53Cu;
        // 0x16f540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F544u;
    // 0x16f544: 0x0  nop
    ctx->pc = 0x16f544u;
    // NOP
    ctx->pc = 0x16f548u;
}
