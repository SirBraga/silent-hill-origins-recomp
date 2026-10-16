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

// Function: sub_0018E470
// Address: 0x18e470 - 0x18e9f8
void sub_0018E470_0x18e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E470_0x18e470");
#endif

    switch (ctx->pc) {
        case 0x18e4acu: goto label_18e4ac;
        case 0x18e4bcu: goto label_18e4bc;
        case 0x18e4d4u: goto label_18e4d4;
        case 0x18e4f4u: goto label_18e4f4;
        case 0x18e530u: goto label_18e530;
        case 0x18e544u: goto label_18e544;
        case 0x18e550u: goto label_18e550;
        case 0x18e564u: goto label_18e564;
        case 0x18e578u: goto label_18e578;
        case 0x18e588u: goto label_18e588;
        case 0x18e5a0u: goto label_18e5a0;
        case 0x18e5c0u: goto label_18e5c0;
        case 0x18e5e4u: goto label_18e5e4;
        case 0x18e5f8u: goto label_18e5f8;
        case 0x18e608u: goto label_18e608;
        case 0x18e61cu: goto label_18e61c;
        case 0x18e630u: goto label_18e630;
        case 0x18e640u: goto label_18e640;
        case 0x18e658u: goto label_18e658;
        case 0x18e678u: goto label_18e678;
        case 0x18e69cu: goto label_18e69c;
        case 0x18e6b0u: goto label_18e6b0;
        case 0x18e6c0u: goto label_18e6c0;
        case 0x18e6d4u: goto label_18e6d4;
        case 0x18e6e8u: goto label_18e6e8;
        case 0x18e6f8u: goto label_18e6f8;
        case 0x18e710u: goto label_18e710;
        case 0x18e730u: goto label_18e730;
        case 0x18e754u: goto label_18e754;
        case 0x18e768u: goto label_18e768;
        case 0x18e778u: goto label_18e778;
        case 0x18e78cu: goto label_18e78c;
        case 0x18e7a0u: goto label_18e7a0;
        case 0x18e7b0u: goto label_18e7b0;
        case 0x18e7c8u: goto label_18e7c8;
        case 0x18e7e8u: goto label_18e7e8;
        case 0x18e80cu: goto label_18e80c;
        case 0x18e820u: goto label_18e820;
        case 0x18e830u: goto label_18e830;
        case 0x18e844u: goto label_18e844;
        case 0x18e858u: goto label_18e858;
        case 0x18e868u: goto label_18e868;
        case 0x18e880u: goto label_18e880;
        case 0x18e8a0u: goto label_18e8a0;
        case 0x18e8c4u: goto label_18e8c4;
        case 0x18e8d8u: goto label_18e8d8;
        case 0x18e8e8u: goto label_18e8e8;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e910u: goto label_18e910;
        case 0x18e920u: goto label_18e920;
        case 0x18e94cu: goto label_18e94c;
        case 0x18e974u: goto label_18e974;
        case 0x18e99cu: goto label_18e99c;
        case 0x18e9c4u: goto label_18e9c4;
        default: break;
    }

    ctx->pc = 0x18e470u;

    // 0x18e470: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18e474: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x18e474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x18e478: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x18e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x18e47c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18e47cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e480: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x18e480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x18e484: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x18e484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x18e488: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x18e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x18e48c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x18e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x18e490: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18e494: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18e494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18e498: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x18e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x18e49c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x18e49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x18e4a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e4a4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18E4A4u;
    SET_GPR_U32(ctx, 31, 0x18E4ACu);
    ctx->pc = 0x18E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4A4u;
    // 0x18e4a8: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18E4A4u, 0x18E4ACu)) {
        return;
    }
    ctx->pc = 0x18E4ACu;
label_18e4ac:
    // 0x18e4ac: 0x8e058ae4  lw          $a1, -0x751C($s0)
    ctx->pc = 0x18e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937316)));
    // 0x18e4b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4b4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E4B4u;
    SET_GPR_U32(ctx, 31, 0x18E4BCu);
    ctx->pc = 0x18E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4B4u;
    // 0x18e4b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E4B4u, 0x18E4BCu)) {
        return;
    }
    ctx->pc = 0x18E4BCu;
label_18e4bc:
    // 0x18e4bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4c0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E4C0u;
    {
        const bool branch_taken_0x18e4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C0u;
        // 0x18e4c4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4c0) {
            ctx->pc = 0x18E4DCu;
            goto label_18e4dc;
        }
    }
    ctx->pc = 0x18E4C8u;
    // 0x18e4c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e4cc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E4CCu;
    SET_GPR_U32(ctx, 31, 0x18E4D4u);
    ctx->pc = 0x18E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4CCu;
    // 0x18e4d0: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E4CCu, 0x18E4D4u)) {
        return;
    }
    ctx->pc = 0x18E4D4u;
label_18e4d4:
    // 0x18e4d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E4D4u;
    {
        const bool branch_taken_0x18e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D4u;
        // 0x18e4d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4d4) {
            ctx->pc = 0x18E4E0u;
            goto label_18e4e0;
        }
    }
    ctx->pc = 0x18E4DCu;
label_18e4dc:
    // 0x18e4dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e4e0:
    // 0x18e4e0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E4E0u;
    {
        const bool branch_taken_0x18e4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E0u;
        // 0x18e4e4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4e0) {
            ctx->pc = 0x18E4FCu;
            goto label_18e4fc;
        }
    }
    ctx->pc = 0x18E4E8u;
    // 0x18e4e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e4ec: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E4ECu;
    SET_GPR_U32(ctx, 31, 0x18E4F4u);
    ctx->pc = 0x18E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4ECu;
    // 0x18e4f0: 0x8c458aec  lw          $a1, -0x7514($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E4ECu, 0x18E4F4u)) {
        return;
    }
    ctx->pc = 0x18E4F4u;
label_18e4f4:
    // 0x18e4f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E4F4u;
    {
        const bool branch_taken_0x18e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4F4u;
        // 0x18e4f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4f4) {
            ctx->pc = 0x18E500u;
            goto label_18e500;
        }
    }
    ctx->pc = 0x18E4FCu;
label_18e4fc:
    // 0x18e4fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e500:
    // 0x18e500: 0x2662005c  addiu       $v0, $s3, 0x5C
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x18e504: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x18e504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x18e508: 0x2674001c  addiu       $s4, $s3, 0x1C
    ctx->pc = 0x18e508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x18e50c: 0x2675002c  addiu       $s5, $s3, 0x2C
    ctx->pc = 0x18e50cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x18e510: 0x2677003c  addiu       $s7, $s3, 0x3C
    ctx->pc = 0x18e510u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x18e514: 0x267e004c  addiu       $fp, $s3, 0x4C
    ctx->pc = 0x18e514u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x18e518: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18E518u;
    {
        const bool branch_taken_0x18e518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E518u;
        // 0x18e51c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e518) {
            ctx->pc = 0x18E570u;
            goto label_18e570;
        }
    }
    ctx->pc = 0x18E520u;
    // 0x18e520: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E520u;
    {
        const bool branch_taken_0x18e520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E520u;
        // 0x18e524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e520) {
            ctx->pc = 0x18E570u;
            goto label_18e570;
        }
    }
    ctx->pc = 0x18E528u;
    // 0x18e528: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x18E528u;
    SET_GPR_U32(ctx, 31, 0x18E530u);
    ctx->pc = 0x18E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E528u;
    // 0x18e52c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x18E528u, 0x18E530u)) {
        return;
    }
    ctx->pc = 0x18E530u;
label_18e530:
    // 0x18e530: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18e530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18e534: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x18e534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18e538: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x18e538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x18e53c: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18E53Cu;
    SET_GPR_U32(ctx, 31, 0x18E544u);
    ctx->pc = 0x18E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E53Cu;
    // 0x18e540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18E53Cu, 0x18E544u)) {
        return;
    }
    ctx->pc = 0x18E544u;
label_18e544:
    // 0x18e544: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e548: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E548u;
    {
        const bool branch_taken_0x18e548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e548) {
            ctx->pc = 0x18E570u;
            goto label_18e570;
        }
    }
    ctx->pc = 0x18E550u;
label_18e550:
    // 0x18e550: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x18e550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e55c: 0xc07d33e  jal         func_1F4CF8
    ctx->pc = 0x18E55Cu;
    SET_GPR_U32(ctx, 31, 0x18E564u);
    ctx->pc = 0x18E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E55Cu;
    // 0x18e560: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CF8u, 0x18E55Cu, 0x18E564u)) {
        return;
    }
    ctx->pc = 0x18E564u;
label_18e564:
    // 0x18e564: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e568: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E568u;
    {
        const bool branch_taken_0x18e568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E568u;
        // 0x18e56c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e568) {
            ctx->pc = 0x18E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e550;
        }
    }
    ctx->pc = 0x18E570u;
label_18e570:
    // 0x18e570: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18E570u;
    SET_GPR_U32(ctx, 31, 0x18E578u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18E570u, 0x18E578u)) {
        return;
    }
    ctx->pc = 0x18E578u;
label_18e578:
    // 0x18e578: 0x8ec58ae4  lw          $a1, -0x751C($s6)
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937316)));
    // 0x18e57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e580: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E580u;
    SET_GPR_U32(ctx, 31, 0x18E588u);
    ctx->pc = 0x18E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E580u;
    // 0x18e584: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E580u, 0x18E588u)) {
        return;
    }
    ctx->pc = 0x18E588u;
label_18e588:
    // 0x18e588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e58c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E58Cu;
    {
        const bool branch_taken_0x18e58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E58Cu;
        // 0x18e590: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e58c) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E594u;
    // 0x18e594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e598: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E598u;
    SET_GPR_U32(ctx, 31, 0x18E5A0u);
    ctx->pc = 0x18E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E598u;
    // 0x18e59c: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E598u, 0x18E5A0u)) {
        return;
    }
    ctx->pc = 0x18E5A0u;
label_18e5a0:
    // 0x18e5a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E5A0u;
    {
        const bool branch_taken_0x18e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5A0u;
        // 0x18e5a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5a0) {
            ctx->pc = 0x18E5ACu;
            goto label_18e5ac;
        }
    }
    ctx->pc = 0x18E5A8u;
label_18e5a8:
    // 0x18e5a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e5ac:
    // 0x18e5ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E5ACu;
    {
        const bool branch_taken_0x18e5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5ACu;
        // 0x18e5b0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5ac) {
            ctx->pc = 0x18E5C8u;
            goto label_18e5c8;
        }
    }
    ctx->pc = 0x18E5B4u;
    // 0x18e5b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e5b8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E5B8u;
    SET_GPR_U32(ctx, 31, 0x18E5C0u);
    ctx->pc = 0x18E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5B8u;
    // 0x18e5bc: 0x8c458af0  lw          $a1, -0x7510($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E5B8u, 0x18E5C0u)) {
        return;
    }
    ctx->pc = 0x18E5C0u;
label_18e5c0:
    // 0x18e5c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E5C0u;
    {
        const bool branch_taken_0x18e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5C0u;
        // 0x18e5c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5c0) {
            ctx->pc = 0x18E5CCu;
            goto label_18e5cc;
        }
    }
    ctx->pc = 0x18E5C8u;
label_18e5c8:
    // 0x18e5c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e5cc:
    // 0x18e5cc: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E5CCu;
    {
        const bool branch_taken_0x18e5cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5cc) {
            ctx->pc = 0x18E628u;
            goto label_18e628;
        }
    }
    ctx->pc = 0x18E5D4u;
    // 0x18e5d4: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x18E5D4u;
    {
        const bool branch_taken_0x18e5d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5D4u;
        // 0x18e5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5d4) {
            ctx->pc = 0x18E628u;
            goto label_18e628;
        }
    }
    ctx->pc = 0x18E5DCu;
    // 0x18e5dc: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x18E5DCu;
    SET_GPR_U32(ctx, 31, 0x18E5E4u);
    ctx->pc = 0x18E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5DCu;
    // 0x18e5e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x18E5DCu, 0x18E5E4u)) {
        return;
    }
    ctx->pc = 0x18E5E4u;
label_18e5e4:
    // 0x18e5e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18e5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18e5e8: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x18e5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x18e5ec: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x18e5f0: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18E5F0u;
    SET_GPR_U32(ctx, 31, 0x18E5F8u);
    ctx->pc = 0x18E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5F0u;
    // 0x18e5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18E5F0u, 0x18E5F8u)) {
        return;
    }
    ctx->pc = 0x18E5F8u;
label_18e5f8:
    // 0x18e5f8: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x18e5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x18e5fc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E5FCu;
    {
        const bool branch_taken_0x18e5fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5fc) {
            ctx->pc = 0x18E628u;
            goto label_18e628;
        }
    }
    ctx->pc = 0x18E604u;
    // 0x18e604: 0x0  nop
    ctx->pc = 0x18e604u;
    // NOP
label_18e608:
    // 0x18e608: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x18e608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e60c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e614: 0xc07d33e  jal         func_1F4CF8
    ctx->pc = 0x18E614u;
    SET_GPR_U32(ctx, 31, 0x18E61Cu);
    ctx->pc = 0x18E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E614u;
    // 0x18e618: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CF8u, 0x18E614u, 0x18E61Cu)) {
        return;
    }
    ctx->pc = 0x18E61Cu;
label_18e61c:
    // 0x18e61c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e61cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e620: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E620u;
    {
        const bool branch_taken_0x18e620 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E620u;
        // 0x18e624: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e620) {
            ctx->pc = 0x18E608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e608;
        }
    }
    ctx->pc = 0x18E628u;
label_18e628:
    // 0x18e628: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18E628u;
    SET_GPR_U32(ctx, 31, 0x18E630u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18E628u, 0x18E630u)) {
        return;
    }
    ctx->pc = 0x18E630u;
label_18e630:
    // 0x18e630: 0x8ec58ae4  lw          $a1, -0x751C($s6)
    ctx->pc = 0x18e630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937316)));
    // 0x18e634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e638: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E638u;
    SET_GPR_U32(ctx, 31, 0x18E640u);
    ctx->pc = 0x18E63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E638u;
    // 0x18e63c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E638u, 0x18E640u)) {
        return;
    }
    ctx->pc = 0x18E640u;
label_18e640:
    // 0x18e640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e644: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E644u;
    {
        const bool branch_taken_0x18e644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E644u;
        // 0x18e648: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e644) {
            ctx->pc = 0x18E660u;
            goto label_18e660;
        }
    }
    ctx->pc = 0x18E64Cu;
    // 0x18e64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e650: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E650u;
    SET_GPR_U32(ctx, 31, 0x18E658u);
    ctx->pc = 0x18E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E650u;
    // 0x18e654: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E650u, 0x18E658u)) {
        return;
    }
    ctx->pc = 0x18E658u;
label_18e658:
    // 0x18e658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E658u;
    {
        const bool branch_taken_0x18e658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E658u;
        // 0x18e65c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e658) {
            ctx->pc = 0x18E664u;
            goto label_18e664;
        }
    }
    ctx->pc = 0x18E660u;
label_18e660:
    // 0x18e660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e664:
    // 0x18e664: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E664u;
    {
        const bool branch_taken_0x18e664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E664u;
        // 0x18e668: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e664) {
            ctx->pc = 0x18E680u;
            goto label_18e680;
        }
    }
    ctx->pc = 0x18E66Cu;
    // 0x18e66c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e670: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E670u;
    SET_GPR_U32(ctx, 31, 0x18E678u);
    ctx->pc = 0x18E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E670u;
    // 0x18e674: 0x8c458af4  lw          $a1, -0x750C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E670u, 0x18E678u)) {
        return;
    }
    ctx->pc = 0x18E678u;
label_18e678:
    // 0x18e678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E678u;
    {
        const bool branch_taken_0x18e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E678u;
        // 0x18e67c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e678) {
            ctx->pc = 0x18E684u;
            goto label_18e684;
        }
    }
    ctx->pc = 0x18E680u;
label_18e680:
    // 0x18e680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e684:
    // 0x18e684: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E684u;
    {
        const bool branch_taken_0x18e684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e684) {
            ctx->pc = 0x18E6E0u;
            goto label_18e6e0;
        }
    }
    ctx->pc = 0x18E68Cu;
    // 0x18e68c: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x18E68Cu;
    {
        const bool branch_taken_0x18e68c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E68Cu;
        // 0x18e690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e68c) {
            ctx->pc = 0x18E6E0u;
            goto label_18e6e0;
        }
    }
    ctx->pc = 0x18E694u;
    // 0x18e694: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x18E694u;
    SET_GPR_U32(ctx, 31, 0x18E69Cu);
    ctx->pc = 0x18E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E694u;
    // 0x18e698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x18E694u, 0x18E69Cu)) {
        return;
    }
    ctx->pc = 0x18E69Cu;
label_18e69c:
    // 0x18e69c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18e6a0: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x18e6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x18e6a4: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x18e6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x18e6a8: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18E6A8u;
    SET_GPR_U32(ctx, 31, 0x18E6B0u);
    ctx->pc = 0x18E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6A8u;
    // 0x18e6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18E6A8u, 0x18E6B0u)) {
        return;
    }
    ctx->pc = 0x18E6B0u;
label_18e6b0:
    // 0x18e6b0: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x18e6b4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E6B4u;
    {
        const bool branch_taken_0x18e6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6b4) {
            ctx->pc = 0x18E6E0u;
            goto label_18e6e0;
        }
    }
    ctx->pc = 0x18E6BCu;
    // 0x18e6bc: 0x0  nop
    ctx->pc = 0x18e6bcu;
    // NOP
label_18e6c0:
    // 0x18e6c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x18e6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e6c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6cc: 0xc07d33e  jal         func_1F4CF8
    ctx->pc = 0x18E6CCu;
    SET_GPR_U32(ctx, 31, 0x18E6D4u);
    ctx->pc = 0x18E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6CCu;
    // 0x18e6d0: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CF8u, 0x18E6CCu, 0x18E6D4u)) {
        return;
    }
    ctx->pc = 0x18E6D4u;
label_18e6d4:
    // 0x18e6d4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e6d8: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E6D8u;
    {
        const bool branch_taken_0x18e6d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6D8u;
        // 0x18e6dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6d8) {
            ctx->pc = 0x18E6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e6c0;
        }
    }
    ctx->pc = 0x18E6E0u;
label_18e6e0:
    // 0x18e6e0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18E6E0u;
    SET_GPR_U32(ctx, 31, 0x18E6E8u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18E6E0u, 0x18E6E8u)) {
        return;
    }
    ctx->pc = 0x18E6E8u;
label_18e6e8:
    // 0x18e6e8: 0x8ec58ae4  lw          $a1, -0x751C($s6)
    ctx->pc = 0x18e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937316)));
    // 0x18e6ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6f0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E6F0u;
    SET_GPR_U32(ctx, 31, 0x18E6F8u);
    ctx->pc = 0x18E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6F0u;
    // 0x18e6f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E6F0u, 0x18E6F8u)) {
        return;
    }
    ctx->pc = 0x18E6F8u;
label_18e6f8:
    // 0x18e6f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E6FCu;
    {
        const bool branch_taken_0x18e6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6FCu;
        // 0x18e700: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6fc) {
            ctx->pc = 0x18E718u;
            goto label_18e718;
        }
    }
    ctx->pc = 0x18E704u;
    // 0x18e704: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e708: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E708u;
    SET_GPR_U32(ctx, 31, 0x18E710u);
    ctx->pc = 0x18E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E708u;
    // 0x18e70c: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E708u, 0x18E710u)) {
        return;
    }
    ctx->pc = 0x18E710u;
label_18e710:
    // 0x18e710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E710u;
    {
        const bool branch_taken_0x18e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E710u;
        // 0x18e714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e710) {
            ctx->pc = 0x18E71Cu;
            goto label_18e71c;
        }
    }
    ctx->pc = 0x18E718u;
label_18e718:
    // 0x18e718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e71c:
    // 0x18e71c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E71Cu;
    {
        const bool branch_taken_0x18e71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E71Cu;
        // 0x18e720: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e71c) {
            ctx->pc = 0x18E738u;
            goto label_18e738;
        }
    }
    ctx->pc = 0x18E724u;
    // 0x18e724: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e728: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E728u;
    SET_GPR_U32(ctx, 31, 0x18E730u);
    ctx->pc = 0x18E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E728u;
    // 0x18e72c: 0x8c458af8  lw          $a1, -0x7508($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E728u, 0x18E730u)) {
        return;
    }
    ctx->pc = 0x18E730u;
label_18e730:
    // 0x18e730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E730u;
    {
        const bool branch_taken_0x18e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E730u;
        // 0x18e734: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e730) {
            ctx->pc = 0x18E73Cu;
            goto label_18e73c;
        }
    }
    ctx->pc = 0x18E738u;
label_18e738:
    // 0x18e738: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e73c:
    // 0x18e73c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E73Cu;
    {
        const bool branch_taken_0x18e73c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e73c) {
            ctx->pc = 0x18E798u;
            goto label_18e798;
        }
    }
    ctx->pc = 0x18E744u;
    // 0x18e744: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x18E744u;
    {
        const bool branch_taken_0x18e744 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E744u;
        // 0x18e748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e744) {
            ctx->pc = 0x18E798u;
            goto label_18e798;
        }
    }
    ctx->pc = 0x18E74Cu;
    // 0x18e74c: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x18E74Cu;
    SET_GPR_U32(ctx, 31, 0x18E754u);
    ctx->pc = 0x18E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E74Cu;
    // 0x18e750: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x18E74Cu, 0x18E754u)) {
        return;
    }
    ctx->pc = 0x18E754u;
label_18e754:
    // 0x18e754: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18e758: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x18e758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x18e75c: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x18e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x18e760: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18E760u;
    SET_GPR_U32(ctx, 31, 0x18E768u);
    ctx->pc = 0x18E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E760u;
    // 0x18e764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18E760u, 0x18E768u)) {
        return;
    }
    ctx->pc = 0x18E768u;
label_18e768:
    // 0x18e768: 0x8ef00004  lw          $s0, 0x4($s7)
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x18e76c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E76Cu;
    {
        const bool branch_taken_0x18e76c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e76c) {
            ctx->pc = 0x18E798u;
            goto label_18e798;
        }
    }
    ctx->pc = 0x18E774u;
    // 0x18e774: 0x0  nop
    ctx->pc = 0x18e774u;
    // NOP
label_18e778:
    // 0x18e778: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e77c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e784: 0xc07d33e  jal         func_1F4CF8
    ctx->pc = 0x18E784u;
    SET_GPR_U32(ctx, 31, 0x18E78Cu);
    ctx->pc = 0x18E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E784u;
    // 0x18e788: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CF8u, 0x18E784u, 0x18E78Cu)) {
        return;
    }
    ctx->pc = 0x18E78Cu;
label_18e78c:
    // 0x18e78c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e78cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e790: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E790u;
    {
        const bool branch_taken_0x18e790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E790u;
        // 0x18e794: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e790) {
            ctx->pc = 0x18E778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e778;
        }
    }
    ctx->pc = 0x18E798u;
label_18e798:
    // 0x18e798: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18E798u;
    SET_GPR_U32(ctx, 31, 0x18E7A0u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18E798u, 0x18E7A0u)) {
        return;
    }
    ctx->pc = 0x18E7A0u;
label_18e7a0:
    // 0x18e7a0: 0x8ec58ae4  lw          $a1, -0x751C($s6)
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937316)));
    // 0x18e7a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e7a8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E7A8u;
    SET_GPR_U32(ctx, 31, 0x18E7B0u);
    ctx->pc = 0x18E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7A8u;
    // 0x18e7ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E7A8u, 0x18E7B0u)) {
        return;
    }
    ctx->pc = 0x18E7B0u;
label_18e7b0:
    // 0x18e7b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e7b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E7B4u;
    {
        const bool branch_taken_0x18e7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7B4u;
        // 0x18e7b8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7b4) {
            ctx->pc = 0x18E7D0u;
            goto label_18e7d0;
        }
    }
    ctx->pc = 0x18E7BCu;
    // 0x18e7bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e7c0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E7C0u;
    SET_GPR_U32(ctx, 31, 0x18E7C8u);
    ctx->pc = 0x18E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7C0u;
    // 0x18e7c4: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E7C0u, 0x18E7C8u)) {
        return;
    }
    ctx->pc = 0x18E7C8u;
label_18e7c8:
    // 0x18e7c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E7C8u;
    {
        const bool branch_taken_0x18e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7C8u;
        // 0x18e7cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7c8) {
            ctx->pc = 0x18E7D4u;
            goto label_18e7d4;
        }
    }
    ctx->pc = 0x18E7D0u;
label_18e7d0:
    // 0x18e7d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e7d4:
    // 0x18e7d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E7D4u;
    {
        const bool branch_taken_0x18e7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7D4u;
        // 0x18e7d8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7d4) {
            ctx->pc = 0x18E7F0u;
            goto label_18e7f0;
        }
    }
    ctx->pc = 0x18E7DCu;
    // 0x18e7dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e7e0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E7E0u;
    SET_GPR_U32(ctx, 31, 0x18E7E8u);
    ctx->pc = 0x18E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7E0u;
    // 0x18e7e4: 0x8c458afc  lw          $a1, -0x7504($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E7E0u, 0x18E7E8u)) {
        return;
    }
    ctx->pc = 0x18E7E8u;
label_18e7e8:
    // 0x18e7e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E7E8u;
    {
        const bool branch_taken_0x18e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7E8u;
        // 0x18e7ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7e8) {
            ctx->pc = 0x18E7F4u;
            goto label_18e7f4;
        }
    }
    ctx->pc = 0x18E7F0u;
label_18e7f0:
    // 0x18e7f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e7f4:
    // 0x18e7f4: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E7F4u;
    {
        const bool branch_taken_0x18e7f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7f4) {
            ctx->pc = 0x18E850u;
            goto label_18e850;
        }
    }
    ctx->pc = 0x18E7FCu;
    // 0x18e7fc: 0x13c00014  beqz        $fp, . + 4 + (0x14 << 2)
    ctx->pc = 0x18E7FCu;
    {
        const bool branch_taken_0x18e7fc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7FCu;
        // 0x18e800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7fc) {
            ctx->pc = 0x18E850u;
            goto label_18e850;
        }
    }
    ctx->pc = 0x18E804u;
    // 0x18e804: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x18E804u;
    SET_GPR_U32(ctx, 31, 0x18E80Cu);
    ctx->pc = 0x18E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E804u;
    // 0x18e808: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x18E804u, 0x18E80Cu)) {
        return;
    }
    ctx->pc = 0x18E80Cu;
label_18e80c:
    // 0x18e80c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18e80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18e810: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x18e814: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x18e814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x18e818: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18E818u;
    SET_GPR_U32(ctx, 31, 0x18E820u);
    ctx->pc = 0x18E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E818u;
    // 0x18e81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18E818u, 0x18E820u)) {
        return;
    }
    ctx->pc = 0x18E820u;
label_18e820:
    // 0x18e820: 0x8fd00004  lw          $s0, 0x4($fp)
    ctx->pc = 0x18e820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x18e824: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E824u;
    {
        const bool branch_taken_0x18e824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e824) {
            ctx->pc = 0x18E850u;
            goto label_18e850;
        }
    }
    ctx->pc = 0x18E82Cu;
    // 0x18e82c: 0x0  nop
    ctx->pc = 0x18e82cu;
    // NOP
label_18e830:
    // 0x18e830: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x18e830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e83c: 0xc07d33e  jal         func_1F4CF8
    ctx->pc = 0x18E83Cu;
    SET_GPR_U32(ctx, 31, 0x18E844u);
    ctx->pc = 0x18E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E83Cu;
    // 0x18e840: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CF8u, 0x18E83Cu, 0x18E844u)) {
        return;
    }
    ctx->pc = 0x18E844u;
label_18e844:
    // 0x18e844: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e848: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E848u;
    {
        const bool branch_taken_0x18e848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E848u;
        // 0x18e84c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e848) {
            ctx->pc = 0x18E830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e830;
        }
    }
    ctx->pc = 0x18E850u;
label_18e850:
    // 0x18e850: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18E850u;
    SET_GPR_U32(ctx, 31, 0x18E858u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18E850u, 0x18E858u)) {
        return;
    }
    ctx->pc = 0x18E858u;
label_18e858:
    // 0x18e858: 0x8ec58ae4  lw          $a1, -0x751C($s6)
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937316)));
    // 0x18e85c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e860: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E860u;
    SET_GPR_U32(ctx, 31, 0x18E868u);
    ctx->pc = 0x18E864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E860u;
    // 0x18e864: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E860u, 0x18E868u)) {
        return;
    }
    ctx->pc = 0x18E868u;
label_18e868:
    // 0x18e868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e86c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E86Cu;
    {
        const bool branch_taken_0x18e86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E86Cu;
        // 0x18e870: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e86c) {
            ctx->pc = 0x18E888u;
            goto label_18e888;
        }
    }
    ctx->pc = 0x18E874u;
    // 0x18e874: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e878: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E878u;
    SET_GPR_U32(ctx, 31, 0x18E880u);
    ctx->pc = 0x18E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E878u;
    // 0x18e87c: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E878u, 0x18E880u)) {
        return;
    }
    ctx->pc = 0x18E880u;
label_18e880:
    // 0x18e880: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E880u;
    {
        const bool branch_taken_0x18e880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E880u;
        // 0x18e884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e880) {
            ctx->pc = 0x18E88Cu;
            goto label_18e88c;
        }
    }
    ctx->pc = 0x18E888u;
label_18e888:
    // 0x18e888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e88c:
    // 0x18e88c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E88Cu;
    {
        const bool branch_taken_0x18e88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E88Cu;
        // 0x18e890: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e88c) {
            ctx->pc = 0x18E8A8u;
            goto label_18e8a8;
        }
    }
    ctx->pc = 0x18E894u;
    // 0x18e894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e898: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E898u;
    SET_GPR_U32(ctx, 31, 0x18E8A0u);
    ctx->pc = 0x18E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E898u;
    // 0x18e89c: 0x8c458b00  lw          $a1, -0x7500($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E898u, 0x18E8A0u)) {
        return;
    }
    ctx->pc = 0x18E8A0u;
label_18e8a0:
    // 0x18e8a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E8A0u;
    {
        const bool branch_taken_0x18e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8A0u;
        // 0x18e8a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8a0) {
            ctx->pc = 0x18E8ACu;
            goto label_18e8ac;
        }
    }
    ctx->pc = 0x18E8A8u;
label_18e8a8:
    // 0x18e8a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e8ac:
    // 0x18e8ac: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18E8ACu;
    {
        const bool branch_taken_0x18e8ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8ACu;
        // 0x18e8b0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8ac) {
            ctx->pc = 0x18E908u;
            goto label_18e908;
        }
    }
    ctx->pc = 0x18E8B4u;
    // 0x18e8b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18E8B4u;
    {
        const bool branch_taken_0x18e8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8B4u;
        // 0x18e8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8b4) {
            ctx->pc = 0x18E908u;
            goto label_18e908;
        }
    }
    ctx->pc = 0x18E8BCu;
    // 0x18e8bc: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x18E8BCu;
    SET_GPR_U32(ctx, 31, 0x18E8C4u);
    ctx->pc = 0x18E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8BCu;
    // 0x18e8c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x18E8BCu, 0x18E8C4u)) {
        return;
    }
    ctx->pc = 0x18E8C4u;
label_18e8c4:
    // 0x18e8c4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x18e8c8: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x18e8cc: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x18e8d0: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x18E8D0u;
    SET_GPR_U32(ctx, 31, 0x18E8D8u);
    ctx->pc = 0x18E8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8D0u;
    // 0x18e8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x18E8D0u, 0x18E8D8u)) {
        return;
    }
    ctx->pc = 0x18E8D8u;
label_18e8d8:
    // 0x18e8d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e8dc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x18e8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18e8e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E8E0u;
    {
        const bool branch_taken_0x18e8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8e0) {
            ctx->pc = 0x18E908u;
            goto label_18e908;
        }
    }
    ctx->pc = 0x18E8E8u;
label_18e8e8:
    // 0x18e8e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x18e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e8ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8f4: 0xc07d33e  jal         func_1F4CF8
    ctx->pc = 0x18E8F4u;
    SET_GPR_U32(ctx, 31, 0x18E8FCu);
    ctx->pc = 0x18E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8F4u;
    // 0x18e8f8: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CF8u, 0x18E8F4u, 0x18E8FCu)) {
        return;
    }
    ctx->pc = 0x18E8FCu;
label_18e8fc:
    // 0x18e8fc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18e8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e900: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E900u;
    {
        const bool branch_taken_0x18e900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E900u;
        // 0x18e904: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e900) {
            ctx->pc = 0x18E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e8e8;
        }
    }
    ctx->pc = 0x18E908u;
label_18e908:
    // 0x18e908: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18E908u;
    SET_GPR_U32(ctx, 31, 0x18E910u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18E908u, 0x18E910u)) {
        return;
    }
    ctx->pc = 0x18E910u;
label_18e910:
    // 0x18e910: 0x8ec58ae4  lw          $a1, -0x751C($s6)
    ctx->pc = 0x18e910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937316)));
    // 0x18e914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e918: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18E918u;
    SET_GPR_U32(ctx, 31, 0x18E920u);
    ctx->pc = 0x18E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E918u;
    // 0x18e91c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18E918u, 0x18E920u)) {
        return;
    }
    ctx->pc = 0x18E920u;
label_18e920:
    // 0x18e920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e924: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18e928: 0x24458b04  addiu       $a1, $v0, -0x74FC
    ctx->pc = 0x18e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937348));
    // 0x18e92c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x18e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18e930: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E930u;
    {
        const bool branch_taken_0x18e930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E930u;
        // 0x18e934: 0x24460028  addiu       $a2, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e930) {
            ctx->pc = 0x18E940u;
            goto label_18e940;
        }
    }
    ctx->pc = 0x18E938u;
    // 0x18e938: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18e93c: 0x244693e0  addiu       $a2, $v0, -0x6C20
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
label_18e940:
    // 0x18e940: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e944: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x18E944u;
    SET_GPR_U32(ctx, 31, 0x18E94Cu);
    ctx->pc = 0x18E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E944u;
    // 0x18e948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x18E944u, 0x18E94Cu)) {
        return;
    }
    ctx->pc = 0x18E94Cu;
label_18e94c:
    // 0x18e94c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18e950: 0x24458b08  addiu       $a1, $v0, -0x74F8
    ctx->pc = 0x18e950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937352));
    // 0x18e954: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x18e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x18e958: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E958u;
    {
        const bool branch_taken_0x18e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E958u;
        // 0x18e95c: 0x24460028  addiu       $a2, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e958) {
            ctx->pc = 0x18E968u;
            goto label_18e968;
        }
    }
    ctx->pc = 0x18E960u;
    // 0x18e960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18e964: 0x244693e0  addiu       $a2, $v0, -0x6C20
    ctx->pc = 0x18e964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
label_18e968:
    // 0x18e968: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e96c: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x18E96Cu;
    SET_GPR_U32(ctx, 31, 0x18E974u);
    ctx->pc = 0x18E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E96Cu;
    // 0x18e970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x18E96Cu, 0x18E974u)) {
        return;
    }
    ctx->pc = 0x18E974u;
label_18e974:
    // 0x18e974: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18e974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18e978: 0x24458b0c  addiu       $a1, $v0, -0x74F4
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937356));
    // 0x18e97c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x18e980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E980u;
    {
        const bool branch_taken_0x18e980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E980u;
        // 0x18e984: 0x24460028  addiu       $a2, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e980) {
            ctx->pc = 0x18E990u;
            goto label_18e990;
        }
    }
    ctx->pc = 0x18E988u;
    // 0x18e988: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18e98c: 0x244693e0  addiu       $a2, $v0, -0x6C20
    ctx->pc = 0x18e98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
label_18e990:
    // 0x18e990: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e994: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x18E994u;
    SET_GPR_U32(ctx, 31, 0x18E99Cu);
    ctx->pc = 0x18E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E994u;
    // 0x18e998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x18E994u, 0x18E99Cu)) {
        return;
    }
    ctx->pc = 0x18E99Cu;
label_18e99c:
    // 0x18e99c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18e9a0: 0x24458b10  addiu       $a1, $v0, -0x74F0
    ctx->pc = 0x18e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x18e9a4: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x18e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x18e9a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E9A8u;
    {
        const bool branch_taken_0x18e9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9A8u;
        // 0x18e9ac: 0x24460028  addiu       $a2, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9a8) {
            ctx->pc = 0x18E9B8u;
            goto label_18e9b8;
        }
    }
    ctx->pc = 0x18E9B0u;
    // 0x18e9b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18e9b4: 0x244693e0  addiu       $a2, $v0, -0x6C20
    ctx->pc = 0x18e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
label_18e9b8:
    // 0x18e9b8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18e9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e9bc: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x18E9BCu;
    SET_GPR_U32(ctx, 31, 0x18E9C4u);
    ctx->pc = 0x18E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9BCu;
    // 0x18e9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x18E9BCu, 0x18E9C4u)) {
        return;
    }
    ctx->pc = 0x18E9C4u;
label_18e9c4:
    // 0x18e9c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18e9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18e9c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18e9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18e9cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18e9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18e9d0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18e9d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e9d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18e9d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e9d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18e9d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e9dc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x18e9dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e9e0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x18e9e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e9e4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x18e9e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e9e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18E9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ECu;
        // 0x18e9f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E9F4u;
    // 0x18e9f4: 0x0  nop
    ctx->pc = 0x18e9f4u;
    // NOP
    ctx->pc = 0x18e9f8u;
}
