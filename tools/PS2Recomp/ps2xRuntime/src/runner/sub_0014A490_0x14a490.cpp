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

// Function: sub_0014A490
// Address: 0x14a490 - 0x14a658
void sub_0014A490_0x14a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A490_0x14a490");
#endif

    switch (ctx->pc) {
        case 0x14a4bcu: goto label_14a4bc;
        case 0x14a4ccu: goto label_14a4cc;
        case 0x14a4e0u: goto label_14a4e0;
        case 0x14a4f4u: goto label_14a4f4;
        case 0x14a510u: goto label_14a510;
        case 0x14a520u: goto label_14a520;
        case 0x14a530u: goto label_14a530;
        case 0x14a558u: goto label_14a558;
        case 0x14a560u: goto label_14a560;
        case 0x14a580u: goto label_14a580;
        case 0x14a58cu: goto label_14a58c;
        case 0x14a5acu: goto label_14a5ac;
        case 0x14a5ccu: goto label_14a5cc;
        case 0x14a5e4u: goto label_14a5e4;
        case 0x14a5fcu: goto label_14a5fc;
        case 0x14a618u: goto label_14a618;
        case 0x14a62cu: goto label_14a62c;
        case 0x14a638u: goto label_14a638;
        default: break;
    }

    ctx->pc = 0x14a490u;

    // 0x14a490: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x14a494: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x14a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
    // 0x14a498: 0x7fb30420  sq          $s3, 0x420($sp)
    ctx->pc = 0x14a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 19));
    // 0x14a49c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14a49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4a0: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x14a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
    // 0x14a4a4: 0x27b30400  addiu       $s3, $sp, 0x400
    ctx->pc = 0x14a4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x14a4a8: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x14a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
    // 0x14a4ac: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x14a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x14a4b0: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x14a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
    // 0x14a4b4: 0xc04e448  jal         func_139120
    ctx->pc = 0x14A4B4u;
    SET_GPR_U32(ctx, 31, 0x14A4BCu);
    ctx->pc = 0x14A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4B4u;
    // 0x14a4b8: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x14A4B4u, 0x14A4BCu)) {
        return;
    }
    ctx->pc = 0x14A4BCu;
label_14a4bc:
    // 0x14a4bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4c0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14a4c4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x14A4C4u;
    SET_GPR_U32(ctx, 31, 0x14A4CCu);
    ctx->pc = 0x14A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4C4u;
    // 0x14a4c8: 0x24501b98  addiu       $s0, $v0, 0x1B98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x14A4C4u, 0x14A4CCu)) {
        return;
    }
    ctx->pc = 0x14A4CCu;
label_14a4cc:
    // 0x14a4cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A4CCu;
    {
        const bool branch_taken_0x14a4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4CCu;
        // 0x14a4d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4cc) {
            ctx->pc = 0x14A4F4u;
            goto label_14a4f4;
        }
    }
    ctx->pc = 0x14A4D4u;
    // 0x14a4d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4d8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x14A4D8u;
    SET_GPR_U32(ctx, 31, 0x14A4E0u);
    ctx->pc = 0x14A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4D8u;
    // 0x14a4dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x14A4D8u, 0x14A4E0u)) {
        return;
    }
    ctx->pc = 0x14A4E0u;
label_14a4e0:
    // 0x14a4e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A4E0u;
    {
        const bool branch_taken_0x14a4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4E0u;
        // 0x14a4e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4e0) {
            ctx->pc = 0x14A4F4u;
            goto label_14a4f4;
        }
    }
    ctx->pc = 0x14A4E8u;
    // 0x14a4e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4ec: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x14A4ECu;
    SET_GPR_U32(ctx, 31, 0x14A4F4u);
    ctx->pc = 0x14A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4ECu;
    // 0x14a4f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x14A4ECu, 0x14A4F4u)) {
        return;
    }
    ctx->pc = 0x14A4F4u;
label_14a4f4:
    // 0x14a4f4: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x14a4f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A4F8u;
    {
        const bool branch_taken_0x14a4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F8u;
        // 0x14a4fc: 0x8fa40400  lw          $a0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f8) {
            ctx->pc = 0x14A54Cu;
            goto label_14a54c;
        }
    }
    ctx->pc = 0x14A500u;
    // 0x14a500: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14a500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14a504: 0x26500054  addiu       $s0, $s2, 0x54
    ctx->pc = 0x14a504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x14a508: 0xc04e442  jal         func_139108
    ctx->pc = 0x14A508u;
    SET_GPR_U32(ctx, 31, 0x14A510u);
    ctx->pc = 0x14A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A508u;
    // 0x14a50c: 0x8c5184e0  lw          $s1, -0x7B20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139108u, 0x14A508u, 0x14A510u)) {
        return;
    }
    ctx->pc = 0x14A510u;
label_14a510:
    // 0x14a510: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A510u;
    {
        const bool branch_taken_0x14a510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A510u;
        // 0x14a514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a510) {
            ctx->pc = 0x14A528u;
            goto label_14a528;
        }
    }
    ctx->pc = 0x14A518u;
    // 0x14a518: 0xc04e43a  jal         func_1390E8
    ctx->pc = 0x14A518u;
    SET_GPR_U32(ctx, 31, 0x14A520u);
    ctx->pc = 0x14A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A518u;
    // 0x14a51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1390E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1390E8u, 0x14A518u, 0x14A520u)) {
        return;
    }
    ctx->pc = 0x14A520u;
label_14a520:
    // 0x14a520: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A520u;
    {
        const bool branch_taken_0x14a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A520u;
        // 0x14a524: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a520) {
            ctx->pc = 0x14A534u;
            goto label_14a534;
        }
    }
    ctx->pc = 0x14A528u;
label_14a528:
    // 0x14a528: 0xc04e470  jal         func_1391C0
    ctx->pc = 0x14A528u;
    SET_GPR_U32(ctx, 31, 0x14A530u);
    ctx->pc = 0x1391C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1391C0u, 0x14A528u, 0x14A530u)) {
        return;
    }
    ctx->pc = 0x14A530u;
label_14a530:
    // 0x14a530: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_14a534:
    // 0x14a534: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a538: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14a538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a53c: 0x24a51b68  addiu       $a1, $a1, 0x1B68
    ctx->pc = 0x14a53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7016));
    // 0x14a540: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14a540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a544: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14A544u;
    {
        const bool branch_taken_0x14a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A544u;
        // 0x14a548: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a544) {
            ctx->pc = 0x14A578u;
            goto label_14a578;
        }
    }
    ctx->pc = 0x14A54Cu;
label_14a54c:
    // 0x14a54c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14a550: 0xc04e442  jal         func_139108
    ctx->pc = 0x14A550u;
    SET_GPR_U32(ctx, 31, 0x14A558u);
    ctx->pc = 0x14A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A550u;
    // 0x14a554: 0x8c5084e0  lw          $s0, -0x7B20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139108u, 0x14A550u, 0x14A558u)) {
        return;
    }
    ctx->pc = 0x14A558u;
label_14a558:
    // 0x14a558: 0xc04e470  jal         func_1391C0
    ctx->pc = 0x14A558u;
    SET_GPR_U32(ctx, 31, 0x14A560u);
    ctx->pc = 0x14A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A558u;
    // 0x14a55c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1391C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1391C0u, 0x14A558u, 0x14A560u)) {
        return;
    }
    ctx->pc = 0x14A560u;
label_14a560:
    // 0x14a560: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14a564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14a568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a56c: 0x24a51b68  addiu       $a1, $a1, 0x1B68
    ctx->pc = 0x14a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7016));
    // 0x14a570: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14a570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a574: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14a574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a578:
    // 0x14a578: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x14A578u;
    SET_GPR_U32(ctx, 31, 0x14A580u);
    ctx->pc = 0x14A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A578u;
    // 0x14a57c: 0x26510038  addiu       $s1, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x14A578u, 0x14A580u)) {
        return;
    }
    ctx->pc = 0x14A580u;
label_14a580:
    // 0x14a580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a584: 0xc081b56  jal         func_206D58
    ctx->pc = 0x14A584u;
    SET_GPR_U32(ctx, 31, 0x14A58Cu);
    ctx->pc = 0x14A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A584u;
    // 0x14a588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x14A584u, 0x14A58Cu)) {
        return;
    }
    ctx->pc = 0x14A58Cu;
label_14a58c:
    // 0x14a58c: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x14a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x14a590: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14a590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14a594: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14a598: 0x2450eed0  addiu       $s0, $v0, -0x1130
    ctx->pc = 0x14a598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962896));
    // 0x14a59c: 0x24a51ba8  addiu       $a1, $a1, 0x1BA8
    ctx->pc = 0x14a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7080));
    // 0x14a5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5a4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14A5A4u;
    SET_GPR_U32(ctx, 31, 0x14A5ACu);
    ctx->pc = 0x14A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5A4u;
    // 0x14a5a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14A5A4u, 0x14A5ACu)) {
        return;
    }
    ctx->pc = 0x14A5ACu;
label_14a5ac:
    // 0x14a5ac: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x14a5b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A5B0u;
    {
        const bool branch_taken_0x14a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5B0u;
        // 0x14a5b4: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5b0) {
            ctx->pc = 0x14A5D0u;
            goto label_14a5d0;
        }
    }
    ctx->pc = 0x14A5B8u;
    // 0x14a5b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5c4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14A5C4u;
    SET_GPR_U32(ctx, 31, 0x14A5CCu);
    ctx->pc = 0x14A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5C4u;
    // 0x14a5c8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14A5C4u, 0x14A5CCu)) {
        return;
    }
    ctx->pc = 0x14A5CCu;
label_14a5cc:
    // 0x14a5cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_14a5d0:
    // 0x14a5d0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14a5d4: 0x24a51bc0  addiu       $a1, $a1, 0x1BC0
    ctx->pc = 0x14a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7104));
    // 0x14a5d8: 0x2484eed8  addiu       $a0, $a0, -0x1128
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962904));
    // 0x14a5dc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14A5DCu;
    SET_GPR_U32(ctx, 31, 0x14A5E4u);
    ctx->pc = 0x14A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5DCu;
    // 0x14a5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14A5DCu, 0x14A5E4u)) {
        return;
    }
    ctx->pc = 0x14A5E4u;
label_14a5e4:
    // 0x14a5e4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14a5e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x14a5e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14a5ec: 0x24a5eea0  addiu       $a1, $a1, -0x1160
    ctx->pc = 0x14a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
    // 0x14a5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5f4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14A5F4u;
    SET_GPR_U32(ctx, 31, 0x14A5FCu);
    ctx->pc = 0x14A5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5F4u;
    // 0x14a5f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14A5F4u, 0x14A5FCu)) {
        return;
    }
    ctx->pc = 0x14A5FCu;
label_14a5fc:
    // 0x14a5fc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x14a5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x14a600: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14a600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14a604: 0x2610eee0  addiu       $s0, $s0, -0x1120
    ctx->pc = 0x14a604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962912));
    // 0x14a608: 0x24a51bd8  addiu       $a1, $a1, 0x1BD8
    ctx->pc = 0x14a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7128));
    // 0x14a60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a610: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x14A610u;
    SET_GPR_U32(ctx, 31, 0x14A618u);
    ctx->pc = 0x14A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A610u;
    // 0x14a614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x14A610u, 0x14A618u)) {
        return;
    }
    ctx->pc = 0x14A618u;
label_14a618:
    // 0x14a618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a61c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a624: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14A624u;
    SET_GPR_U32(ctx, 31, 0x14A62Cu);
    ctx->pc = 0x14A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A624u;
    // 0x14a628: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14A624u, 0x14A62Cu)) {
        return;
    }
    ctx->pc = 0x14A62Cu;
label_14a62c:
    // 0x14a62c: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x14a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x14a630: 0xc07f822  jal         func_1FE088
    ctx->pc = 0x14A630u;
    SET_GPR_U32(ctx, 31, 0x14A638u);
    ctx->pc = 0x14A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A630u;
    // 0x14a634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE088u, 0x14A630u, 0x14A638u)) {
        return;
    }
    ctx->pc = 0x14A638u;
label_14a638:
    // 0x14a638: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x14a638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x14a63c: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x14a63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x14a640: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x14a640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x14a644: 0x7bb30420  lq          $s3, 0x420($sp)
    ctx->pc = 0x14a644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x14a648: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x14a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x14a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A64Cu;
        // 0x14a650: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A654u;
    // 0x14a654: 0x0  nop
    ctx->pc = 0x14a654u;
    // NOP
    ctx->pc = 0x14a658u;
}
