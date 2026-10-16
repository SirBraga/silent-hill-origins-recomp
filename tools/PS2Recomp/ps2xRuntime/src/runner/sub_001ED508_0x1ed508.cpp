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

// Function: sub_001ED508
// Address: 0x1ed508 - 0x1ed558
void sub_001ED508_0x1ed508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED508_0x1ed508");
#endif

    switch (ctx->pc) {
        case 0x1ed508u: goto label_1ed508;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed510u: goto label_1ed510;
        case 0x1ed514u: goto label_1ed514;
        case 0x1ed518u: goto label_1ed518;
        case 0x1ed51cu: goto label_1ed51c;
        case 0x1ed520u: goto label_1ed520;
        case 0x1ed524u: goto label_1ed524;
        case 0x1ed528u: goto label_1ed528;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed530u: goto label_1ed530;
        case 0x1ed534u: goto label_1ed534;
        case 0x1ed538u: goto label_1ed538;
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed540u: goto label_1ed540;
        case 0x1ed544u: goto label_1ed544;
        case 0x1ed548u: goto label_1ed548;
        case 0x1ed54cu: goto label_1ed54c;
        case 0x1ed550u: goto label_1ed550;
        case 0x1ed554u: goto label_1ed554;
        default: break;
    }

    ctx->pc = 0x1ed508u;

label_1ed508:
    // 0x1ed508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ed50c:
    // 0x1ed50c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ed50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ed510:
    // 0x1ed510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ed514:
    // 0x1ed514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ed514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ed518:
    // 0x1ed518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ed51c:
    // 0x1ed51c: 0xc0932d4  jal         func_24CB50
label_1ed520:
    if (ctx->pc == 0x1ED520u) {
        ctx->pc = 0x1ED520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED51Cu;
        // 0x1ed520: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED524u;
        goto label_1ed524;
    }
    ctx->pc = 0x1ED51Cu;
    SET_GPR_U32(ctx, 31, 0x1ED524u);
    ctx->pc = 0x1ED520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED51Cu;
    // 0x1ed520: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1ED51Cu, 0x1ED524u)) {
        return;
    }
    ctx->pc = 0x1ED524u;
label_1ed524:
    // 0x1ed524: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ed524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ed528:
    // 0x1ed528: 0x60f809  jalr        $v1
label_1ed52c:
    if (ctx->pc == 0x1ED52Cu) {
        ctx->pc = 0x1ED52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED528u;
        // 0x1ed52c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED530u;
        goto label_1ed530;
    }
    ctx->pc = 0x1ED528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED530u);
        ctx->pc = 0x1ED52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED528u;
        // 0x1ed52c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED528u, 0x1ED530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED530u;
label_1ed530:
    // 0x1ed530: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1ed530u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1ed534:
    // 0x1ed534: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ed538:
    if (ctx->pc == 0x1ED538u) {
        ctx->pc = 0x1ED538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED534u;
        // 0x1ed538: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED53Cu;
        goto label_1ed53c;
    }
    ctx->pc = 0x1ED534u;
    {
        const bool branch_taken_0x1ed534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED534u;
        // 0x1ed538: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed534) {
            ctx->pc = 0x1ED548u;
            goto label_1ed548;
        }
    }
    ctx->pc = 0x1ED53Cu;
label_1ed53c:
    // 0x1ed53c: 0xc0808b8  jal         func_2022E0
label_1ed540:
    if (ctx->pc == 0x1ED540u) {
        ctx->pc = 0x1ED540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED53Cu;
        // 0x1ed540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED544u;
        goto label_1ed544;
    }
    ctx->pc = 0x1ED53Cu;
    SET_GPR_U32(ctx, 31, 0x1ED544u);
    ctx->pc = 0x1ED540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED53Cu;
    // 0x1ed540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1ED53Cu, 0x1ED544u)) {
        return;
    }
    ctx->pc = 0x1ED544u;
label_1ed544:
    // 0x1ed544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ed544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed548:
    // 0x1ed548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed54c:
    // 0x1ed54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed550:
    // 0x1ed550: 0x3e00008  jr          $ra
label_1ed554:
    if (ctx->pc == 0x1ED554u) {
        ctx->pc = 0x1ED554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED550u;
        // 0x1ed554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED558u;
        goto label_fallthrough_0x1ed550;
    }
    ctx->pc = 0x1ED550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED550u;
        // 0x1ed554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ed550:
    ctx->pc = 0x1ED558u;
}
