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

// Function: sub_001D73E8
// Address: 0x1d73e8 - 0x1d7550
void sub_001D73E8_0x1d73e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D73E8_0x1d73e8");
#endif

    switch (ctx->pc) {
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d7454u: goto label_1d7454;
        case 0x1d7460u: goto label_1d7460;
        case 0x1d746cu: goto label_1d746c;
        case 0x1d7478u: goto label_1d7478;
        case 0x1d7484u: goto label_1d7484;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74b8u: goto label_1d74b8;
        case 0x1d74c8u: goto label_1d74c8;
        case 0x1d74d8u: goto label_1d74d8;
        case 0x1d74e8u: goto label_1d74e8;
        case 0x1d74f8u: goto label_1d74f8;
        case 0x1d7508u: goto label_1d7508;
        case 0x1d7518u: goto label_1d7518;
        case 0x1d7528u: goto label_1d7528;
        case 0x1d7538u: goto label_1d7538;
        default: break;
    }

    ctx->pc = 0x1d73e8u;

    // 0x1d73e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d73e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d73ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d73ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d73f0: 0x14a20051  bne         $a1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D73F0u;
    {
        const bool branch_taken_0x1d73f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F0u;
        // 0x1d73f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73f0) {
            ctx->pc = 0x1D7538u;
            goto label_1d7538;
        }
    }
    ctx->pc = 0x1D73F8u;
    // 0x1d73f8: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D73F8u;
    {
        const bool branch_taken_0x1d73f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73f8) {
            ctx->pc = 0x1D73FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D73F8u;
            // 0x1d73fc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D748Cu;
            goto label_1d748c;
        }
    }
    ctx->pc = 0x1D7400u;
    // 0x1d7400: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7404: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7404u;
    SET_GPR_U32(ctx, 31, 0x1D740Cu);
    ctx->pc = 0x1D7408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7404u;
    // 0x1d7408: 0x24848860  addiu       $a0, $a0, -0x77A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7404u, 0x1D740Cu)) {
        return;
    }
    ctx->pc = 0x1D740Cu;
label_1d740c:
    // 0x1d740c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d740cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7410: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7410u;
    SET_GPR_U32(ctx, 31, 0x1D7418u);
    ctx->pc = 0x1D7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7410u;
    // 0x1d7414: 0x24848868  addiu       $a0, $a0, -0x7798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7410u, 0x1D7418u)) {
        return;
    }
    ctx->pc = 0x1D7418u;
label_1d7418:
    // 0x1d7418: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d741c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D741Cu;
    SET_GPR_U32(ctx, 31, 0x1D7424u);
    ctx->pc = 0x1D7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D741Cu;
    // 0x1d7420: 0x24848870  addiu       $a0, $a0, -0x7790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D741Cu, 0x1D7424u)) {
        return;
    }
    ctx->pc = 0x1D7424u;
label_1d7424:
    // 0x1d7424: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7428: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7428u;
    SET_GPR_U32(ctx, 31, 0x1D7430u);
    ctx->pc = 0x1D742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7428u;
    // 0x1d742c: 0x24848878  addiu       $a0, $a0, -0x7788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7428u, 0x1D7430u)) {
        return;
    }
    ctx->pc = 0x1D7430u;
label_1d7430:
    // 0x1d7430: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7434: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7434u;
    SET_GPR_U32(ctx, 31, 0x1D743Cu);
    ctx->pc = 0x1D7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7434u;
    // 0x1d7438: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7434u, 0x1D743Cu)) {
        return;
    }
    ctx->pc = 0x1D743Cu;
label_1d743c:
    // 0x1d743c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d743cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7440: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7440u;
    SET_GPR_U32(ctx, 31, 0x1D7448u);
    ctx->pc = 0x1D7444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7440u;
    // 0x1d7444: 0x24848888  addiu       $a0, $a0, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7440u, 0x1D7448u)) {
        return;
    }
    ctx->pc = 0x1D7448u;
label_1d7448:
    // 0x1d7448: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d744c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D744Cu;
    SET_GPR_U32(ctx, 31, 0x1D7454u);
    ctx->pc = 0x1D7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D744Cu;
    // 0x1d7450: 0x24848890  addiu       $a0, $a0, -0x7770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D744Cu, 0x1D7454u)) {
        return;
    }
    ctx->pc = 0x1D7454u;
label_1d7454:
    // 0x1d7454: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7458: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7458u;
    SET_GPR_U32(ctx, 31, 0x1D7460u);
    ctx->pc = 0x1D745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7458u;
    // 0x1d745c: 0x24848898  addiu       $a0, $a0, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7458u, 0x1D7460u)) {
        return;
    }
    ctx->pc = 0x1D7460u;
label_1d7460:
    // 0x1d7460: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7464: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7464u;
    SET_GPR_U32(ctx, 31, 0x1D746Cu);
    ctx->pc = 0x1D7468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7464u;
    // 0x1d7468: 0x248488a0  addiu       $a0, $a0, -0x7760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7464u, 0x1D746Cu)) {
        return;
    }
    ctx->pc = 0x1D746Cu;
label_1d746c:
    // 0x1d746c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7470: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7470u;
    SET_GPR_U32(ctx, 31, 0x1D7478u);
    ctx->pc = 0x1D7474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7470u;
    // 0x1d7474: 0x248488a8  addiu       $a0, $a0, -0x7758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7470u, 0x1D7478u)) {
        return;
    }
    ctx->pc = 0x1D7478u;
label_1d7478:
    // 0x1d7478: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d747c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D747Cu;
    SET_GPR_U32(ctx, 31, 0x1D7484u);
    ctx->pc = 0x1D7480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D747Cu;
    // 0x1d7480: 0x248488b0  addiu       $a0, $a0, -0x7750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D747Cu, 0x1D7484u)) {
        return;
    }
    ctx->pc = 0x1D7484u;
label_1d7484:
    // 0x1d7484: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D7484u;
    {
        const bool branch_taken_0x1d7484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7484u;
        // 0x1d7488: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7484) {
            ctx->pc = 0x1D753Cu;
            goto label_1d753c;
        }
    }
    ctx->pc = 0x1D748Cu;
label_1d748c:
    // 0x1d748c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7490: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7490u;
    SET_GPR_U32(ctx, 31, 0x1D7498u);
    ctx->pc = 0x1D7494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7490u;
    // 0x1d7494: 0x248488b0  addiu       $a0, $a0, -0x7750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7490u, 0x1D7498u)) {
        return;
    }
    ctx->pc = 0x1D7498u;
label_1d7498:
    // 0x1d7498: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d749c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d74a0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D74A0u;
    SET_GPR_U32(ctx, 31, 0x1D74A8u);
    ctx->pc = 0x1D74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74A0u;
    // 0x1d74a4: 0x248488a8  addiu       $a0, $a0, -0x7758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D74A0u, 0x1D74A8u)) {
        return;
    }
    ctx->pc = 0x1D74A8u;
label_1d74a8:
    // 0x1d74a8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d74ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d74acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d74b0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D74B0u;
    SET_GPR_U32(ctx, 31, 0x1D74B8u);
    ctx->pc = 0x1D74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74B0u;
    // 0x1d74b4: 0x248488a0  addiu       $a0, $a0, -0x7760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D74B0u, 0x1D74B8u)) {
        return;
    }
    ctx->pc = 0x1D74B8u;
label_1d74b8:
    // 0x1d74b8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d74bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d74bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d74c0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D74C0u;
    SET_GPR_U32(ctx, 31, 0x1D74C8u);
    ctx->pc = 0x1D74C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74C0u;
    // 0x1d74c4: 0x24848898  addiu       $a0, $a0, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D74C0u, 0x1D74C8u)) {
        return;
    }
    ctx->pc = 0x1D74C8u;
label_1d74c8:
    // 0x1d74c8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d74c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d74cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d74ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d74d0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D74D0u;
    SET_GPR_U32(ctx, 31, 0x1D74D8u);
    ctx->pc = 0x1D74D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74D0u;
    // 0x1d74d4: 0x24848890  addiu       $a0, $a0, -0x7770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D74D0u, 0x1D74D8u)) {
        return;
    }
    ctx->pc = 0x1D74D8u;
label_1d74d8:
    // 0x1d74d8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d74d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d74dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d74e0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D74E0u;
    SET_GPR_U32(ctx, 31, 0x1D74E8u);
    ctx->pc = 0x1D74E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74E0u;
    // 0x1d74e4: 0x24848888  addiu       $a0, $a0, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D74E0u, 0x1D74E8u)) {
        return;
    }
    ctx->pc = 0x1D74E8u;
label_1d74e8:
    // 0x1d74e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d74ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d74f0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D74F0u;
    SET_GPR_U32(ctx, 31, 0x1D74F8u);
    ctx->pc = 0x1D74F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74F0u;
    // 0x1d74f4: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D74F0u, 0x1D74F8u)) {
        return;
    }
    ctx->pc = 0x1D74F8u;
label_1d74f8:
    // 0x1d74f8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d74f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d74fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d74fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7500: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7500u;
    SET_GPR_U32(ctx, 31, 0x1D7508u);
    ctx->pc = 0x1D7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7500u;
    // 0x1d7504: 0x24848878  addiu       $a0, $a0, -0x7788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7500u, 0x1D7508u)) {
        return;
    }
    ctx->pc = 0x1D7508u;
label_1d7508:
    // 0x1d7508: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d750c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7510: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7510u;
    SET_GPR_U32(ctx, 31, 0x1D7518u);
    ctx->pc = 0x1D7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7510u;
    // 0x1d7514: 0x24848870  addiu       $a0, $a0, -0x7790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7510u, 0x1D7518u)) {
        return;
    }
    ctx->pc = 0x1D7518u;
label_1d7518:
    // 0x1d7518: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d751c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7520: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7520u;
    SET_GPR_U32(ctx, 31, 0x1D7528u);
    ctx->pc = 0x1D7524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7520u;
    // 0x1d7524: 0x24848868  addiu       $a0, $a0, -0x7798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7520u, 0x1D7528u)) {
        return;
    }
    ctx->pc = 0x1D7528u;
label_1d7528:
    // 0x1d7528: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d752c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d752cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7530: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7530u;
    SET_GPR_U32(ctx, 31, 0x1D7538u);
    ctx->pc = 0x1D7534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7530u;
    // 0x1d7534: 0x24848860  addiu       $a0, $a0, -0x77A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7530u, 0x1D7538u)) {
        return;
    }
    ctx->pc = 0x1D7538u;
label_1d7538:
    // 0x1d7538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d753c:
    // 0x1d753c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D753Cu;
        // 0x1d7540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7544u;
    // 0x1d7544: 0x0  nop
    ctx->pc = 0x1d7544u;
    // NOP
    // 0x1d7548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d7548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d754c: 0x0  nop
    ctx->pc = 0x1d754cu;
    // NOP
    ctx->pc = 0x1d7550u;
}
