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

// Function: sub_00167500
// Address: 0x167500 - 0x167668
void sub_00167500_0x167500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167500_0x167500");
#endif

    switch (ctx->pc) {
        case 0x16751cu: goto label_16751c;
        case 0x167530u: goto label_167530;
        case 0x167548u: goto label_167548;
        case 0x167644u: goto label_167644;
        default: break;
    }

    ctx->pc = 0x167500u;

    // 0x167500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167504: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x167504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x167508: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x167508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16750c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16750cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167514: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x167514u;
    SET_GPR_U32(ctx, 31, 0x16751Cu);
    ctx->pc = 0x167518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167514u;
    // 0x167518: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x167514u, 0x16751Cu)) {
        return;
    }
    ctx->pc = 0x16751Cu;
label_16751c:
    // 0x16751c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16751cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x167520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167524: 0x8c46f5f8  lw          $a2, -0xA08($v0)
    ctx->pc = 0x167524u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF5F8u));
    // 0x167528: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x167528u;
    SET_GPR_U32(ctx, 31, 0x167530u);
    ctx->pc = 0x16752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167528u;
    // 0x16752c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x167528u, 0x167530u)) {
        return;
    }
    ctx->pc = 0x167530u;
label_167530:
    // 0x167530: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167534: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167538: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x167538u;
    {
        const bool branch_taken_0x167538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167538u;
        // 0x16753c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167538) {
            ctx->pc = 0x167658u;
            goto label_167658;
        }
    }
    ctx->pc = 0x167540u;
    // 0x167540: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x167540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167544: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x167544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_167548:
    // 0x167548: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x167548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x16754c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x16754Cu;
    {
        const bool branch_taken_0x16754c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16754Cu;
        // 0x167550: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16754c) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x167554u;
    // 0x167554: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x167554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x167558: 0x24423fb0  addiu       $v0, $v0, 0x3FB0
    ctx->pc = 0x167558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16304));
    // 0x16755c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167560: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167564: 0x800008  jr          $a0
    ctx->pc = 0x167564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16756Cu: goto label_16756c;
            case 0x16757Cu: goto label_16757c;
            case 0x16758Cu: goto label_16758c;
            case 0x16759Cu: goto label_16759c;
            case 0x1675ACu: goto label_1675ac;
            case 0x1675BCu: goto label_1675bc;
            case 0x1675CCu: goto label_1675cc;
            case 0x1675DCu: goto label_1675dc;
            case 0x1675ECu: goto label_1675ec;
            case 0x1675FCu: goto label_1675fc;
            case 0x16760Cu: goto label_16760c;
            case 0x16761Cu: goto label_16761c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167564u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16756Cu;
label_16756c:
    // 0x16756c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167570: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x167574: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x167574u;
    {
        const bool branch_taken_0x167574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167574u;
        // 0x167578: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167574) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x16757Cu;
label_16757c:
    // 0x16757c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167580: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167584: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x167584u;
    {
        const bool branch_taken_0x167584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167584u;
        // 0x167588: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167584) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x16758Cu;
label_16758c:
    // 0x16758c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167590: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167594: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x167594u;
    {
        const bool branch_taken_0x167594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167594u;
        // 0x167598: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167594) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x16759Cu;
label_16759c:
    // 0x16759c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1675a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1675a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1675A4u;
    {
        const bool branch_taken_0x1675a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675A4u;
        // 0x1675a8: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675a4) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x1675ACu;
label_1675ac:
    // 0x1675ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1675acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1675b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1675b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1675B4u;
    {
        const bool branch_taken_0x1675b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675B4u;
        // 0x1675b8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675b4) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x1675BCu;
label_1675bc:
    // 0x1675bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1675c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1675c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1675C4u;
    {
        const bool branch_taken_0x1675c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675C4u;
        // 0x1675c8: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675c4) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x1675CCu;
label_1675cc:
    // 0x1675cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1675d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1675d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1675D4u;
    {
        const bool branch_taken_0x1675d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675D4u;
        // 0x1675d8: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675d4) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x1675DCu;
label_1675dc:
    // 0x1675dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1675dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1675e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1675e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1675E4u;
    {
        const bool branch_taken_0x1675e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675E4u;
        // 0x1675e8: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675e4) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x1675ECu;
label_1675ec:
    // 0x1675ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1675f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1675f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1675F4u;
    {
        const bool branch_taken_0x1675f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675F4u;
        // 0x1675f8: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675f4) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x1675FCu;
label_1675fc:
    // 0x1675fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1675fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167600: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167604: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167604u;
    {
        const bool branch_taken_0x167604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167604u;
        // 0x167608: 0xe620006c  swc1        $f0, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167604) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x16760Cu;
label_16760c:
    // 0x16760c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167610: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x167614u;
    {
        const bool branch_taken_0x167614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167614u;
        // 0x167618: 0xe6200070  swc1        $f0, 0x70($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167614) {
            ctx->pc = 0x167628u;
            goto label_167628;
        }
    }
    ctx->pc = 0x16761Cu;
label_16761c:
    // 0x16761c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167620: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167624: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x167624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_167628:
    // 0x167628: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x167628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16762c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16763c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16763Cu;
    SET_GPR_U32(ctx, 31, 0x167644u);
    ctx->pc = 0x167640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16763Cu;
    // 0x167640: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16763Cu, 0x167644u)) {
        return;
    }
    ctx->pc = 0x167644u;
label_167644:
    // 0x167644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x167644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167648: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16764c: 0x5460ffbe  bnel        $v1, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x16764Cu;
    {
        const bool branch_taken_0x16764c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16764c) {
            ctx->pc = 0x167650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16764Cu;
            // 0x167650: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167548;
        }
    }
    ctx->pc = 0x167654u;
    // 0x167654: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x167654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_167658:
    // 0x167658: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x167658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16765c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16765cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167660: 0x3e00008  jr          $ra
    ctx->pc = 0x167660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167660u;
        // 0x167664: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167668u;
}
