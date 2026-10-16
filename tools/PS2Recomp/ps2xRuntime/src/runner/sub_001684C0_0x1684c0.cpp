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

// Function: sub_001684C0
// Address: 0x1684c0 - 0x168608
void sub_001684C0_0x1684c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001684C0_0x1684c0");
#endif

    switch (ctx->pc) {
        case 0x1684dcu: goto label_1684dc;
        case 0x1684f0u: goto label_1684f0;
        case 0x168508u: goto label_168508;
        case 0x168584u: goto label_168584;
        case 0x1685e4u: goto label_1685e4;
        default: break;
    }

    ctx->pc = 0x1684c0u;

    // 0x1684c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1684c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1684c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1684c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1684c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1684c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1684cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1684ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1684d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1684d4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1684D4u;
    SET_GPR_U32(ctx, 31, 0x1684DCu);
    ctx->pc = 0x1684D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684D4u;
    // 0x1684d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1684D4u, 0x1684DCu)) {
        return;
    }
    ctx->pc = 0x1684DCu;
label_1684dc:
    // 0x1684dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1684e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1684e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684e4: 0x8c46f608  lw          $a2, -0x9F8($v0)
    ctx->pc = 0x1684e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF608u));
    // 0x1684e8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1684E8u;
    SET_GPR_U32(ctx, 31, 0x1684F0u);
    ctx->pc = 0x1684ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684E8u;
    // 0x1684ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1684E8u, 0x1684F0u)) {
        return;
    }
    ctx->pc = 0x1684F0u;
label_1684f0:
    // 0x1684f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1684f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1684f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1684f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1684f8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1684F8u;
    {
        const bool branch_taken_0x1684f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684F8u;
        // 0x1684fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684f8) {
            ctx->pc = 0x1685F8u;
            goto label_1685f8;
        }
    }
    ctx->pc = 0x168500u;
    // 0x168500: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x168500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168504: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x168504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_168508:
    // 0x168508: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x168508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x16850c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x16850Cu;
    {
        const bool branch_taken_0x16850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16850Cu;
        // 0x168510: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16850c) {
            ctx->pc = 0x1685C8u;
            goto label_1685c8;
        }
    }
    ctx->pc = 0x168514u;
    // 0x168514: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x168514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x168518: 0x24424060  addiu       $v0, $v0, 0x4060
    ctx->pc = 0x168518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16480));
    // 0x16851c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168520: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x168520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168524: 0x800008  jr          $a0
    ctx->pc = 0x168524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16852Cu: goto label_16852c;
            case 0x16855Cu: goto label_16855c;
            case 0x16856Cu: goto label_16856c;
            case 0x16858Cu: goto label_16858c;
            case 0x16859Cu: goto label_16859c;
            case 0x1685ACu: goto label_1685ac;
            case 0x1685BCu: goto label_1685bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168524u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16852Cu;
label_16852c:
    // 0x16852c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168530: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x168534: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168534u;
    {
        const bool branch_taken_0x168534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168534u;
        // 0x168538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168534) {
            ctx->pc = 0x168550u;
            goto label_168550;
        }
    }
    ctx->pc = 0x16853Cu;
    // 0x16853c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16853cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x168540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168544: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x168544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x168548: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x168548u;
    {
        const bool branch_taken_0x168548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168548u;
        // 0x16854c: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168548) {
            ctx->pc = 0x1685C8u;
            goto label_1685c8;
        }
    }
    ctx->pc = 0x168550u;
label_168550:
    // 0x168550: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x168550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x168554: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x168554u;
    {
        const bool branch_taken_0x168554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168554u;
        // 0x168558: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168554) {
            ctx->pc = 0x1685C8u;
            goto label_1685c8;
        }
    }
    ctx->pc = 0x16855Cu;
label_16855c:
    // 0x16855c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168560: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x168560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x168564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168564u;
    {
        const bool branch_taken_0x168564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168564u;
        // 0x168568: 0x26250074  addiu       $a1, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168564) {
            ctx->pc = 0x168578u;
            goto label_168578;
        }
    }
    ctx->pc = 0x16856Cu;
label_16856c:
    // 0x16856c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168570: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x168574: 0x2625007c  addiu       $a1, $s1, 0x7C
    ctx->pc = 0x168574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_168578:
    // 0x168578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16857c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16857Cu;
    SET_GPR_U32(ctx, 31, 0x168584u);
    ctx->pc = 0x168580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16857Cu;
    // 0x168580: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16857Cu, 0x168584u)) {
        return;
    }
    ctx->pc = 0x168584u;
label_168584:
    // 0x168584: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x168584u;
    {
        const bool branch_taken_0x168584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168584u;
        // 0x168588: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168584) {
            ctx->pc = 0x1685CCu;
            goto label_1685cc;
        }
    }
    ctx->pc = 0x16858Cu;
label_16858c:
    // 0x16858c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168590: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x168590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168594: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x168594u;
    {
        const bool branch_taken_0x168594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168594u;
        // 0x168598: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168594) {
            ctx->pc = 0x1685C8u;
            goto label_1685c8;
        }
    }
    ctx->pc = 0x16859Cu;
label_16859c:
    // 0x16859c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1685a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1685a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1685a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1685A4u;
    {
        const bool branch_taken_0x1685a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a4) {
            ctx->pc = 0x1685C8u;
            goto label_1685c8;
        }
    }
    ctx->pc = 0x1685ACu;
label_1685ac:
    // 0x1685ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1685b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1685b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1685b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1685B4u;
    {
        const bool branch_taken_0x1685b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685B4u;
        // 0x1685b8: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685b4) {
            ctx->pc = 0x1685C8u;
            goto label_1685c8;
        }
    }
    ctx->pc = 0x1685BCu;
label_1685bc:
    // 0x1685bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1685c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1685c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1685c4: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x1685c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_1685c8:
    // 0x1685c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1685c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1685cc:
    // 0x1685cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1685ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1685d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1685d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1685d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1685d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1685d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1685dc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1685DCu;
    SET_GPR_U32(ctx, 31, 0x1685E4u);
    ctx->pc = 0x1685E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685DCu;
    // 0x1685e0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1685DCu, 0x1685E4u)) {
        return;
    }
    ctx->pc = 0x1685E4u;
label_1685e4:
    // 0x1685e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1685e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1685e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1685e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1685ec: 0x5460ffc6  bnel        $v1, $zero, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1685ECu;
    {
        const bool branch_taken_0x1685ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1685ec) {
            ctx->pc = 0x1685F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1685ECu;
            // 0x1685f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168508;
        }
    }
    ctx->pc = 0x1685F4u;
    // 0x1685f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1685f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1685f8:
    // 0x1685f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1685f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1685fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1685fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168600: 0x3e00008  jr          $ra
    ctx->pc = 0x168600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168600u;
        // 0x168604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168608u;
}
