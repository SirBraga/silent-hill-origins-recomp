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

// Function: sub_001084D0
// Address: 0x1084d0 - 0x108670
void sub_001084D0_0x1084d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001084D0_0x1084d0");
#endif

    switch (ctx->pc) {
        case 0x1084d0u: goto label_1084d0;
        case 0x1084d4u: goto label_1084d4;
        case 0x1084d8u: goto label_1084d8;
        case 0x1084dcu: goto label_1084dc;
        case 0x1084e0u: goto label_1084e0;
        case 0x1084e4u: goto label_1084e4;
        case 0x1084e8u: goto label_1084e8;
        case 0x1084ecu: goto label_1084ec;
        case 0x1084f0u: goto label_1084f0;
        case 0x1084f4u: goto label_1084f4;
        case 0x1084f8u: goto label_1084f8;
        case 0x1084fcu: goto label_1084fc;
        case 0x108500u: goto label_108500;
        case 0x108504u: goto label_108504;
        case 0x108508u: goto label_108508;
        case 0x10850cu: goto label_10850c;
        case 0x108510u: goto label_108510;
        case 0x108514u: goto label_108514;
        case 0x108518u: goto label_108518;
        case 0x10851cu: goto label_10851c;
        case 0x108520u: goto label_108520;
        case 0x108524u: goto label_108524;
        case 0x108528u: goto label_108528;
        case 0x10852cu: goto label_10852c;
        case 0x108530u: goto label_108530;
        case 0x108534u: goto label_108534;
        case 0x108538u: goto label_108538;
        case 0x10853cu: goto label_10853c;
        case 0x108540u: goto label_108540;
        case 0x108544u: goto label_108544;
        case 0x108548u: goto label_108548;
        case 0x10854cu: goto label_10854c;
        case 0x108550u: goto label_108550;
        case 0x108554u: goto label_108554;
        case 0x108558u: goto label_108558;
        case 0x10855cu: goto label_10855c;
        case 0x108560u: goto label_108560;
        case 0x108564u: goto label_108564;
        case 0x108568u: goto label_108568;
        case 0x10856cu: goto label_10856c;
        case 0x108570u: goto label_108570;
        case 0x108574u: goto label_108574;
        case 0x108578u: goto label_108578;
        case 0x10857cu: goto label_10857c;
        case 0x108580u: goto label_108580;
        case 0x108584u: goto label_108584;
        case 0x108588u: goto label_108588;
        case 0x10858cu: goto label_10858c;
        case 0x108590u: goto label_108590;
        case 0x108594u: goto label_108594;
        case 0x108598u: goto label_108598;
        case 0x10859cu: goto label_10859c;
        case 0x1085a0u: goto label_1085a0;
        case 0x1085a4u: goto label_1085a4;
        case 0x1085a8u: goto label_1085a8;
        case 0x1085acu: goto label_1085ac;
        case 0x1085b0u: goto label_1085b0;
        case 0x1085b4u: goto label_1085b4;
        case 0x1085b8u: goto label_1085b8;
        case 0x1085bcu: goto label_1085bc;
        case 0x1085c0u: goto label_1085c0;
        case 0x1085c4u: goto label_1085c4;
        case 0x1085c8u: goto label_1085c8;
        case 0x1085ccu: goto label_1085cc;
        case 0x1085d0u: goto label_1085d0;
        case 0x1085d4u: goto label_1085d4;
        case 0x1085d8u: goto label_1085d8;
        case 0x1085dcu: goto label_1085dc;
        case 0x1085e0u: goto label_1085e0;
        case 0x1085e4u: goto label_1085e4;
        case 0x1085e8u: goto label_1085e8;
        case 0x1085ecu: goto label_1085ec;
        case 0x1085f0u: goto label_1085f0;
        case 0x1085f4u: goto label_1085f4;
        case 0x1085f8u: goto label_1085f8;
        case 0x1085fcu: goto label_1085fc;
        case 0x108600u: goto label_108600;
        case 0x108604u: goto label_108604;
        case 0x108608u: goto label_108608;
        case 0x10860cu: goto label_10860c;
        case 0x108610u: goto label_108610;
        case 0x108614u: goto label_108614;
        case 0x108618u: goto label_108618;
        case 0x10861cu: goto label_10861c;
        case 0x108620u: goto label_108620;
        case 0x108624u: goto label_108624;
        case 0x108628u: goto label_108628;
        case 0x10862cu: goto label_10862c;
        case 0x108630u: goto label_108630;
        case 0x108634u: goto label_108634;
        case 0x108638u: goto label_108638;
        case 0x10863cu: goto label_10863c;
        case 0x108640u: goto label_108640;
        case 0x108644u: goto label_108644;
        case 0x108648u: goto label_108648;
        case 0x10864cu: goto label_10864c;
        case 0x108650u: goto label_108650;
        case 0x108654u: goto label_108654;
        case 0x108658u: goto label_108658;
        case 0x10865cu: goto label_10865c;
        case 0x108660u: goto label_108660;
        case 0x108664u: goto label_108664;
        case 0x108668u: goto label_108668;
        case 0x10866cu: goto label_10866c;
        default: break;
    }

    ctx->pc = 0x1084d0u;

label_1084d0:
    // 0x1084d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1084d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1084d4:
    // 0x1084d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1084d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1084d8:
    // 0x1084d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1084d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1084dc:
    // 0x1084dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1084dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1084e0:
    // 0x1084e0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1084e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1084e4:
    // 0x1084e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1084e8:
    // 0x1084e8: 0x460c0040  add.s       $f1, $f0, $f12
    ctx->pc = 0x1084e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1084ec:
    // 0x1084ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1084f0:
    if (ctx->pc == 0x1084F0u) {
        ctx->pc = 0x1084F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084ECu;
        // 0x1084f0: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1084F4u;
        goto label_1084f4;
    }
    ctx->pc = 0x1084ECu;
    {
        const bool branch_taken_0x1084ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084ECu;
        // 0x1084f0: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084ec) {
            ctx->pc = 0x108528u;
            goto label_108528;
        }
    }
    ctx->pc = 0x1084F4u;
label_1084f4:
    // 0x1084f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1084f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1084f8:
    // 0x1084f8: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_1084fc:
    if (ctx->pc == 0x1084FCu) {
        ctx->pc = 0x1084FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084F8u;
        // 0x1084fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108500u;
        goto label_108500;
    }
    ctx->pc = 0x1084F8u;
    {
        const bool branch_taken_0x1084f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1084FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084F8u;
        // 0x1084fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084f8) {
            ctx->pc = 0x108658u;
            goto label_108658;
        }
    }
    ctx->pc = 0x108500u;
label_108500:
    // 0x108500: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_108504:
    // 0x108504: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_108508:
    if (ctx->pc == 0x108508u) {
        ctx->pc = 0x108508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108504u;
        // 0x108508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10850Cu;
        goto label_10850c;
    }
    ctx->pc = 0x108504u;
    {
        const bool branch_taken_0x108504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108504u;
        // 0x108508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108504) {
            ctx->pc = 0x10865Cu;
            goto label_10865c;
        }
    }
    ctx->pc = 0x10850Cu;
label_10850c:
    // 0x10850c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x10850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_108510:
    // 0x108510: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_108514:
    if (ctx->pc == 0x108514u) {
        ctx->pc = 0x108514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108510u;
        // 0x108514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108518u;
        goto label_108518;
    }
    ctx->pc = 0x108510u;
    {
        const bool branch_taken_0x108510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108510u;
        // 0x108514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108510) {
            ctx->pc = 0x10865Cu;
            goto label_10865c;
        }
    }
    ctx->pc = 0x108518u;
label_108518:
    // 0x108518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10851c:
    // 0x10851c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x10851cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_108520:
    // 0x108520: 0x1000004d  b           . + 4 + (0x4D << 2)
label_108524:
    if (ctx->pc == 0x108524u) {
        ctx->pc = 0x108524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108520u;
        // 0x108524: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108528u;
        goto label_108528;
    }
    ctx->pc = 0x108520u;
    {
        const bool branch_taken_0x108520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108520u;
        // 0x108524: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108520) {
            ctx->pc = 0x108658u;
            goto label_108658;
        }
    }
    ctx->pc = 0x108528u;
label_108528:
    // 0x108528: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x108528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10852c:
    // 0x10852c: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
label_108530:
    if (ctx->pc == 0x108530u) {
        ctx->pc = 0x108530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10852Cu;
        // 0x108530: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108534u;
        goto label_108534;
    }
    ctx->pc = 0x10852Cu;
    {
        const bool branch_taken_0x10852c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10852c) {
            ctx->pc = 0x108530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10852Cu;
            // 0x108530: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108640u;
            goto label_108640;
        }
    }
    ctx->pc = 0x108534u;
label_108534:
    // 0x108534: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x108534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_108538:
    // 0x108538: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_10853c:
    if (ctx->pc == 0x10853Cu) {
        ctx->pc = 0x10853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108538u;
        // 0x10853c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108540u;
        goto label_108540;
    }
    ctx->pc = 0x108538u;
    {
        const bool branch_taken_0x108538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108538) {
            ctx->pc = 0x10853Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108538u;
            // 0x10853c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1085ECu;
            goto label_1085ec;
        }
    }
    ctx->pc = 0x108540u;
label_108540:
    // 0x108540: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x108540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_108544:
    // 0x108544: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x108544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_108548:
    // 0x108548: 0x844401c8  lh          $a0, 0x1C8($v0)
    ctx->pc = 0x108548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 456)));
label_10854c:
    // 0x10854c: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x10854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_108550:
    // 0x108550: 0x60f809  jalr        $v1
label_108554:
    if (ctx->pc == 0x108554u) {
        ctx->pc = 0x108554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108550u;
        // 0x108554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108558u;
        goto label_108558;
    }
    ctx->pc = 0x108550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108558u);
        ctx->pc = 0x108554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108550u;
        // 0x108554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108550u, 0x108558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108558u;
label_108558:
    // 0x108558: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x108558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10855c:
    // 0x10855c: 0xc4a10bdc  lwc1        $f1, 0xBDC($a1)
    ctx->pc = 0x10855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108560:
    // 0x108560: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108564:
    // 0x108564: 0x0  nop
    ctx->pc = 0x108564u;
    // NOP
label_108568:
    // 0x108568: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_10856c:
    if (ctx->pc == 0x10856Cu) {
        ctx->pc = 0x10856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108568u;
        // 0x10856c: 0x8ca20034  lw          $v0, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108570u;
        goto label_108570;
    }
    ctx->pc = 0x108568u;
    {
        const bool branch_taken_0x108568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108568u;
        // 0x10856c: 0x8ca20034  lw          $v0, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108568) {
            ctx->pc = 0x1085B4u;
            goto label_1085b4;
        }
    }
    ctx->pc = 0x108570u;
label_108570:
    // 0x108570: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x108570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_108574:
    // 0x108574: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x108574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_108578:
    // 0x108578: 0x60f809  jalr        $v1
label_10857c:
    if (ctx->pc == 0x10857Cu) {
        ctx->pc = 0x10857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108578u;
        // 0x10857c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108580u;
        goto label_108580;
    }
    ctx->pc = 0x108578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108580u);
        ctx->pc = 0x10857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108578u;
        // 0x10857c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108578u, 0x108580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108580u;
label_108580:
    // 0x108580: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x108580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108584:
    // 0x108584: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x108584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_108588:
    // 0x108588: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_10858c:
    // 0x10858c: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x10858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_108590:
    // 0x108590: 0x60f809  jalr        $v1
label_108594:
    if (ctx->pc == 0x108594u) {
        ctx->pc = 0x108594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108590u;
        // 0x108594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108598u;
        goto label_108598;
    }
    ctx->pc = 0x108590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108598u);
        ctx->pc = 0x108594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108590u;
        // 0x108594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108590u, 0x108598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108598u;
label_108598:
    // 0x108598: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x108598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_10859c:
    // 0x10859c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10859cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1085a0:
    // 0x1085a0: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1085a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_1085a4:
    // 0x1085a4: 0xc06ca72  jal         func_1B29C8
label_1085a8:
    if (ctx->pc == 0x1085A8u) {
        ctx->pc = 0x1085A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085A4u;
        // 0x1085a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085ACu;
        goto label_1085ac;
    }
    ctx->pc = 0x1085A4u;
    SET_GPR_U32(ctx, 31, 0x1085ACu);
    ctx->pc = 0x1085A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085A4u;
    // 0x1085a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B29C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B29C8u, 0x1085A4u, 0x1085ACu)) {
        return;
    }
    ctx->pc = 0x1085ACu;
label_1085ac:
    // 0x1085ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1085b0:
    if (ctx->pc == 0x1085B0u) {
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085B4u;
        goto label_1085b4;
    }
    ctx->pc = 0x1085ACu;
    {
        const bool branch_taken_0x1085ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ACu;
        // 0x1085b0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085ac) {
            ctx->pc = 0x1085ECu;
            goto label_1085ec;
        }
    }
    ctx->pc = 0x1085B4u;
label_1085b4:
    // 0x1085b4: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x1085b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_1085b8:
    // 0x1085b8: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x1085b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_1085bc:
    // 0x1085bc: 0x60f809  jalr        $v1
label_1085c0:
    if (ctx->pc == 0x1085C0u) {
        ctx->pc = 0x1085C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085BCu;
        // 0x1085c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085C4u;
        goto label_1085c4;
    }
    ctx->pc = 0x1085BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1085C4u);
        ctx->pc = 0x1085C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085BCu;
        // 0x1085c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085BCu, 0x1085C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1085C4u;
label_1085c4:
    // 0x1085c4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1085c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1085c8:
    // 0x1085c8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1085c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1085cc:
    // 0x1085cc: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x1085ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_1085d0:
    // 0x1085d0: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x1085d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_1085d4:
    // 0x1085d4: 0x60f809  jalr        $v1
label_1085d8:
    if (ctx->pc == 0x1085D8u) {
        ctx->pc = 0x1085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D4u;
        // 0x1085d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085DCu;
        goto label_1085dc;
    }
    ctx->pc = 0x1085D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1085DCu);
        ctx->pc = 0x1085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D4u;
        // 0x1085d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085D4u, 0x1085DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1085DCu;
label_1085dc:
    // 0x1085dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1085dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1085e0:
    // 0x1085e0: 0xc06caa6  jal         func_1B2A98
label_1085e4:
    if (ctx->pc == 0x1085E4u) {
        ctx->pc = 0x1085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E0u;
        // 0x1085e4: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085E8u;
        goto label_1085e8;
    }
    ctx->pc = 0x1085E0u;
    SET_GPR_U32(ctx, 31, 0x1085E8u);
    ctx->pc = 0x1085E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085E0u;
    // 0x1085e4: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2A98u, 0x1085E0u, 0x1085E8u)) {
        return;
    }
    ctx->pc = 0x1085E8u;
label_1085e8:
    // 0x1085e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1085e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1085ec:
    // 0x1085ec: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1085f0:
    if (ctx->pc == 0x1085F0u) {
        ctx->pc = 0x1085F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085ECu;
        // 0x1085f0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1085F4u;
        goto label_1085f4;
    }
    ctx->pc = 0x1085ECu;
    {
        const bool branch_taken_0x1085ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1085ec) {
            ctx->pc = 0x1085F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1085ECu;
            // 0x1085f0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108634u;
            goto label_108634;
        }
    }
    ctx->pc = 0x1085F4u;
label_1085f4:
    // 0x1085f4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1085f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1085f8:
    // 0x1085f8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1085f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1085fc:
    // 0x1085fc: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x1085fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_108600:
    // 0x108600: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_108604:
    // 0x108604: 0x60f809  jalr        $v1
label_108608:
    if (ctx->pc == 0x108608u) {
        ctx->pc = 0x108608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108604u;
        // 0x108608: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10860Cu;
        goto label_10860c;
    }
    ctx->pc = 0x108604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10860Cu);
        ctx->pc = 0x108608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108604u;
        // 0x108608: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108604u, 0x10860Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10860Cu;
label_10860c:
    // 0x10860c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x10860cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108610:
    // 0x108610: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_108614:
    // 0x108614: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x108614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_108618:
    // 0x108618: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x108618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_10861c:
    // 0x10861c: 0x60f809  jalr        $v1
label_108620:
    if (ctx->pc == 0x108620u) {
        ctx->pc = 0x108620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10861Cu;
        // 0x108620: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108624u;
        goto label_108624;
    }
    ctx->pc = 0x10861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108624u);
        ctx->pc = 0x108620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10861Cu;
        // 0x108620: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10861Cu, 0x108624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108624u;
label_108624:
    // 0x108624: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x108624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_108628:
    // 0x108628: 0xc06caa6  jal         func_1B2A98
label_10862c:
    if (ctx->pc == 0x10862Cu) {
        ctx->pc = 0x10862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108628u;
        // 0x10862c: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108630u;
        goto label_108630;
    }
    ctx->pc = 0x108628u;
    SET_GPR_U32(ctx, 31, 0x108630u);
    ctx->pc = 0x10862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108628u;
    // 0x10862c: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2A98u, 0x108628u, 0x108630u)) {
        return;
    }
    ctx->pc = 0x108630u;
label_108630:
    // 0x108630: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x108630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_108634:
    // 0x108634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108638:
    // 0x108638: 0x10000008  b           . + 4 + (0x8 << 2)
label_10863c:
    if (ctx->pc == 0x10863Cu) {
        ctx->pc = 0x10863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108638u;
        // 0x10863c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108640u;
        goto label_108640;
    }
    ctx->pc = 0x108638u;
    {
        const bool branch_taken_0x108638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108638u;
        // 0x10863c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108638) {
            ctx->pc = 0x10865Cu;
            goto label_10865c;
        }
    }
    ctx->pc = 0x108640u;
label_108640:
    // 0x108640: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108644:
    // 0x108644: 0x0  nop
    ctx->pc = 0x108644u;
    // NOP
label_108648:
    // 0x108648: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_10864c:
    if (ctx->pc == 0x10864Cu) {
        ctx->pc = 0x10864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108648u;
        // 0x10864c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108650u;
        goto label_108650;
    }
    ctx->pc = 0x108648u;
    {
        const bool branch_taken_0x108648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108648u;
        // 0x10864c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108648) {
            ctx->pc = 0x108658u;
            goto label_108658;
        }
    }
    ctx->pc = 0x108650u;
label_108650:
    // 0x108650: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x108650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_108654:
    // 0x108654: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x108654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_108658:
    // 0x108658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10865c:
    // 0x10865c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10865cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_108660:
    // 0x108660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108664:
    // 0x108664: 0x3e00008  jr          $ra
label_108668:
    if (ctx->pc == 0x108668u) {
        ctx->pc = 0x108668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108664u;
        // 0x108668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10866Cu;
        goto label_10866c;
    }
    ctx->pc = 0x108664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108664u;
        // 0x108668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10866Cu;
label_10866c:
    // 0x10866c: 0x0  nop
    ctx->pc = 0x10866cu;
    // NOP
    ctx->pc = 0x108670u;
}
