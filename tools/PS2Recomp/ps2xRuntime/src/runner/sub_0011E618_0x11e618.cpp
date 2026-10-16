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

// Function: sub_0011E618
// Address: 0x11e618 - 0x11e960
void sub_0011E618_0x11e618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E618_0x11e618");
#endif

    switch (ctx->pc) {
        case 0x11e618u: goto label_11e618;
        case 0x11e61cu: goto label_11e61c;
        case 0x11e620u: goto label_11e620;
        case 0x11e624u: goto label_11e624;
        case 0x11e628u: goto label_11e628;
        case 0x11e62cu: goto label_11e62c;
        case 0x11e630u: goto label_11e630;
        case 0x11e634u: goto label_11e634;
        case 0x11e638u: goto label_11e638;
        case 0x11e63cu: goto label_11e63c;
        case 0x11e640u: goto label_11e640;
        case 0x11e644u: goto label_11e644;
        case 0x11e648u: goto label_11e648;
        case 0x11e64cu: goto label_11e64c;
        case 0x11e650u: goto label_11e650;
        case 0x11e654u: goto label_11e654;
        case 0x11e658u: goto label_11e658;
        case 0x11e65cu: goto label_11e65c;
        case 0x11e660u: goto label_11e660;
        case 0x11e664u: goto label_11e664;
        case 0x11e668u: goto label_11e668;
        case 0x11e66cu: goto label_11e66c;
        case 0x11e670u: goto label_11e670;
        case 0x11e674u: goto label_11e674;
        case 0x11e678u: goto label_11e678;
        case 0x11e67cu: goto label_11e67c;
        case 0x11e680u: goto label_11e680;
        case 0x11e684u: goto label_11e684;
        case 0x11e688u: goto label_11e688;
        case 0x11e68cu: goto label_11e68c;
        case 0x11e690u: goto label_11e690;
        case 0x11e694u: goto label_11e694;
        case 0x11e698u: goto label_11e698;
        case 0x11e69cu: goto label_11e69c;
        case 0x11e6a0u: goto label_11e6a0;
        case 0x11e6a4u: goto label_11e6a4;
        case 0x11e6a8u: goto label_11e6a8;
        case 0x11e6acu: goto label_11e6ac;
        case 0x11e6b0u: goto label_11e6b0;
        case 0x11e6b4u: goto label_11e6b4;
        case 0x11e6b8u: goto label_11e6b8;
        case 0x11e6bcu: goto label_11e6bc;
        case 0x11e6c0u: goto label_11e6c0;
        case 0x11e6c4u: goto label_11e6c4;
        case 0x11e6c8u: goto label_11e6c8;
        case 0x11e6ccu: goto label_11e6cc;
        case 0x11e6d0u: goto label_11e6d0;
        case 0x11e6d4u: goto label_11e6d4;
        case 0x11e6d8u: goto label_11e6d8;
        case 0x11e6dcu: goto label_11e6dc;
        case 0x11e6e0u: goto label_11e6e0;
        case 0x11e6e4u: goto label_11e6e4;
        case 0x11e6e8u: goto label_11e6e8;
        case 0x11e6ecu: goto label_11e6ec;
        case 0x11e6f0u: goto label_11e6f0;
        case 0x11e6f4u: goto label_11e6f4;
        case 0x11e6f8u: goto label_11e6f8;
        case 0x11e6fcu: goto label_11e6fc;
        case 0x11e700u: goto label_11e700;
        case 0x11e704u: goto label_11e704;
        case 0x11e708u: goto label_11e708;
        case 0x11e70cu: goto label_11e70c;
        case 0x11e710u: goto label_11e710;
        case 0x11e714u: goto label_11e714;
        case 0x11e718u: goto label_11e718;
        case 0x11e71cu: goto label_11e71c;
        case 0x11e720u: goto label_11e720;
        case 0x11e724u: goto label_11e724;
        case 0x11e728u: goto label_11e728;
        case 0x11e72cu: goto label_11e72c;
        case 0x11e730u: goto label_11e730;
        case 0x11e734u: goto label_11e734;
        case 0x11e738u: goto label_11e738;
        case 0x11e73cu: goto label_11e73c;
        case 0x11e740u: goto label_11e740;
        case 0x11e744u: goto label_11e744;
        case 0x11e748u: goto label_11e748;
        case 0x11e74cu: goto label_11e74c;
        case 0x11e750u: goto label_11e750;
        case 0x11e754u: goto label_11e754;
        case 0x11e758u: goto label_11e758;
        case 0x11e75cu: goto label_11e75c;
        case 0x11e760u: goto label_11e760;
        case 0x11e764u: goto label_11e764;
        case 0x11e768u: goto label_11e768;
        case 0x11e76cu: goto label_11e76c;
        case 0x11e770u: goto label_11e770;
        case 0x11e774u: goto label_11e774;
        case 0x11e778u: goto label_11e778;
        case 0x11e77cu: goto label_11e77c;
        case 0x11e780u: goto label_11e780;
        case 0x11e784u: goto label_11e784;
        case 0x11e788u: goto label_11e788;
        case 0x11e78cu: goto label_11e78c;
        case 0x11e790u: goto label_11e790;
        case 0x11e794u: goto label_11e794;
        case 0x11e798u: goto label_11e798;
        case 0x11e79cu: goto label_11e79c;
        case 0x11e7a0u: goto label_11e7a0;
        case 0x11e7a4u: goto label_11e7a4;
        case 0x11e7a8u: goto label_11e7a8;
        case 0x11e7acu: goto label_11e7ac;
        case 0x11e7b0u: goto label_11e7b0;
        case 0x11e7b4u: goto label_11e7b4;
        case 0x11e7b8u: goto label_11e7b8;
        case 0x11e7bcu: goto label_11e7bc;
        case 0x11e7c0u: goto label_11e7c0;
        case 0x11e7c4u: goto label_11e7c4;
        case 0x11e7c8u: goto label_11e7c8;
        case 0x11e7ccu: goto label_11e7cc;
        case 0x11e7d0u: goto label_11e7d0;
        case 0x11e7d4u: goto label_11e7d4;
        case 0x11e7d8u: goto label_11e7d8;
        case 0x11e7dcu: goto label_11e7dc;
        case 0x11e7e0u: goto label_11e7e0;
        case 0x11e7e4u: goto label_11e7e4;
        case 0x11e7e8u: goto label_11e7e8;
        case 0x11e7ecu: goto label_11e7ec;
        case 0x11e7f0u: goto label_11e7f0;
        case 0x11e7f4u: goto label_11e7f4;
        case 0x11e7f8u: goto label_11e7f8;
        case 0x11e7fcu: goto label_11e7fc;
        case 0x11e800u: goto label_11e800;
        case 0x11e804u: goto label_11e804;
        case 0x11e808u: goto label_11e808;
        case 0x11e80cu: goto label_11e80c;
        case 0x11e810u: goto label_11e810;
        case 0x11e814u: goto label_11e814;
        case 0x11e818u: goto label_11e818;
        case 0x11e81cu: goto label_11e81c;
        case 0x11e820u: goto label_11e820;
        case 0x11e824u: goto label_11e824;
        case 0x11e828u: goto label_11e828;
        case 0x11e82cu: goto label_11e82c;
        case 0x11e830u: goto label_11e830;
        case 0x11e834u: goto label_11e834;
        case 0x11e838u: goto label_11e838;
        case 0x11e83cu: goto label_11e83c;
        case 0x11e840u: goto label_11e840;
        case 0x11e844u: goto label_11e844;
        case 0x11e848u: goto label_11e848;
        case 0x11e84cu: goto label_11e84c;
        case 0x11e850u: goto label_11e850;
        case 0x11e854u: goto label_11e854;
        case 0x11e858u: goto label_11e858;
        case 0x11e85cu: goto label_11e85c;
        case 0x11e860u: goto label_11e860;
        case 0x11e864u: goto label_11e864;
        case 0x11e868u: goto label_11e868;
        case 0x11e86cu: goto label_11e86c;
        case 0x11e870u: goto label_11e870;
        case 0x11e874u: goto label_11e874;
        case 0x11e878u: goto label_11e878;
        case 0x11e87cu: goto label_11e87c;
        case 0x11e880u: goto label_11e880;
        case 0x11e884u: goto label_11e884;
        case 0x11e888u: goto label_11e888;
        case 0x11e88cu: goto label_11e88c;
        case 0x11e890u: goto label_11e890;
        case 0x11e894u: goto label_11e894;
        case 0x11e898u: goto label_11e898;
        case 0x11e89cu: goto label_11e89c;
        case 0x11e8a0u: goto label_11e8a0;
        case 0x11e8a4u: goto label_11e8a4;
        case 0x11e8a8u: goto label_11e8a8;
        case 0x11e8acu: goto label_11e8ac;
        case 0x11e8b0u: goto label_11e8b0;
        case 0x11e8b4u: goto label_11e8b4;
        case 0x11e8b8u: goto label_11e8b8;
        case 0x11e8bcu: goto label_11e8bc;
        case 0x11e8c0u: goto label_11e8c0;
        case 0x11e8c4u: goto label_11e8c4;
        case 0x11e8c8u: goto label_11e8c8;
        case 0x11e8ccu: goto label_11e8cc;
        case 0x11e8d0u: goto label_11e8d0;
        case 0x11e8d4u: goto label_11e8d4;
        case 0x11e8d8u: goto label_11e8d8;
        case 0x11e8dcu: goto label_11e8dc;
        case 0x11e8e0u: goto label_11e8e0;
        case 0x11e8e4u: goto label_11e8e4;
        case 0x11e8e8u: goto label_11e8e8;
        case 0x11e8ecu: goto label_11e8ec;
        case 0x11e8f0u: goto label_11e8f0;
        case 0x11e8f4u: goto label_11e8f4;
        case 0x11e8f8u: goto label_11e8f8;
        case 0x11e8fcu: goto label_11e8fc;
        case 0x11e900u: goto label_11e900;
        case 0x11e904u: goto label_11e904;
        case 0x11e908u: goto label_11e908;
        case 0x11e90cu: goto label_11e90c;
        case 0x11e910u: goto label_11e910;
        case 0x11e914u: goto label_11e914;
        case 0x11e918u: goto label_11e918;
        case 0x11e91cu: goto label_11e91c;
        case 0x11e920u: goto label_11e920;
        case 0x11e924u: goto label_11e924;
        case 0x11e928u: goto label_11e928;
        case 0x11e92cu: goto label_11e92c;
        case 0x11e930u: goto label_11e930;
        case 0x11e934u: goto label_11e934;
        case 0x11e938u: goto label_11e938;
        case 0x11e93cu: goto label_11e93c;
        case 0x11e940u: goto label_11e940;
        case 0x11e944u: goto label_11e944;
        case 0x11e948u: goto label_11e948;
        case 0x11e94cu: goto label_11e94c;
        case 0x11e950u: goto label_11e950;
        case 0x11e954u: goto label_11e954;
        case 0x11e958u: goto label_11e958;
        case 0x11e95cu: goto label_11e95c;
        default: break;
    }

    ctx->pc = 0x11e618u;

label_11e618:
    // 0x11e618: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11e618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_11e61c:
    // 0x11e61c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_11e620:
    // 0x11e620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11e620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e624:
    // 0x11e624: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11e628:
    // 0x11e628: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11e628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_11e62c:
    // 0x11e62c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x11e62cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_11e630:
    // 0x11e630: 0xc0421b8  jal         func_1086E0
label_11e634:
    if (ctx->pc == 0x11E634u) {
        ctx->pc = 0x11E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E630u;
        // 0x11e634: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E638u;
        goto label_11e638;
    }
    ctx->pc = 0x11E630u;
    SET_GPR_U32(ctx, 31, 0x11E638u);
    ctx->pc = 0x11E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E630u;
    // 0x11e634: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1086E0u, 0x11E630u, 0x11E638u)) {
        return;
    }
    ctx->pc = 0x11E638u;
label_11e638:
    // 0x11e638: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11e638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_11e63c:
    // 0x11e63c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11e640:
    // 0x11e640: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x11e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_11e644:
    // 0x11e644: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11e648:
    // 0x11e648: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11e648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_11e64c:
    // 0x11e64c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11e64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11e650:
    // 0x11e650: 0xc603011c  lwc1        $f3, 0x11C($s0)
    ctx->pc = 0x11e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11e654:
    // 0x11e654: 0xc6020118  lwc1        $f2, 0x118($s0)
    ctx->pc = 0x11e654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11e658:
    // 0x11e658: 0xc6050098  lwc1        $f5, 0x98($s0)
    ctx->pc = 0x11e658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_11e65c:
    // 0x11e65c: 0x0  nop
    ctx->pc = 0x11e65cu;
    // NOP
label_11e660:
    // 0x11e660: 0x0  nop
    ctx->pc = 0x11e660u;
    // NOP
label_11e664:
    // 0x11e664: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x11e664u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_11e668:
    // 0x11e668: 0x6a0300f7  ldl         $v1, 0xF7($s0)
    ctx->pc = 0x11e668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11e66c:
    // 0x11e66c: 0x6e0300f0  ldr         $v1, 0xF0($s0)
    ctx->pc = 0x11e66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_11e670:
    // 0x11e670: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x11e670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_11e674:
    // 0x11e674: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x11e674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e678:
    // 0x11e678: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x11e678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e67c:
    // 0x11e67c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x11e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_11e680:
    // 0x11e680: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x11e680u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_11e684:
    // 0x11e684: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x11e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11e688:
    // 0x11e688: 0xc60400b0  lwc1        $f4, 0xB0($s0)
    ctx->pc = 0x11e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11e68c:
    // 0x11e68c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11e68cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_11e690:
    // 0x11e690: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x11e690u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_11e694:
    // 0x11e694: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x11e694u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_11e698:
    // 0x11e698: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_11e69c:
    // 0x11e69c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x11e69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_11e6a0:
    // 0x11e6a0: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x11e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e6a4:
    // 0x11e6a4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11e6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_11e6a8:
    // 0x11e6a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x11e6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11e6ac:
    // 0x11e6ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x11e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11e6b0:
    // 0x11e6b0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11e6b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_11e6b4:
    // 0x11e6b4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x11e6b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_11e6b8:
    // 0x11e6b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e6bc:
    // 0x11e6bc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11e6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_11e6c0:
    // 0x11e6c0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x11e6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11e6c4:
    // 0x11e6c4: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x11e6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11e6c8:
    // 0x11e6c8: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x11e6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11e6cc:
    // 0x11e6cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x11e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_11e6d0:
    // 0x11e6d0: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x11e6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e6d4:
    // 0x11e6d4: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x11e6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e6d8:
    // 0x11e6d8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x11e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_11e6dc:
    // 0x11e6dc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x11e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e6e0:
    // 0x11e6e0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x11e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11e6e4:
    // 0x11e6e4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x11e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11e6e8:
    // 0x11e6e8: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x11e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11e6ec:
    // 0x11e6ec: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x11e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11e6f0:
    // 0x11e6f0: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x11e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_11e6f4:
    // 0x11e6f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x11e6f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_11e6f8:
    // 0x11e6f8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11e6f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_11e6fc:
    // 0x11e6fc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x11e6fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_11e700:
    // 0x11e700: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11e700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_11e704:
    // 0x11e704: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x11e704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_11e708:
    // 0x11e708: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x11e708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_11e70c:
    // 0x11e70c: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x11e70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_11e710:
    // 0x11e710: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x11e710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_11e714:
    // 0x11e714: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x11e714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_11e718:
    // 0x11e718: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x11e718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e71c:
    // 0x11e71c: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x11e71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e720:
    // 0x11e720: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x11e720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_11e724:
    // 0x11e724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11e728:
    // 0x11e728: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11e72c:
    // 0x11e72c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x11e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_11e730:
    // 0x11e730: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x11e730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_11e734:
    // 0x11e734: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11e734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_11e738:
    // 0x11e738: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x11e738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_11e73c:
    // 0x11e73c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x11e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_11e740:
    // 0x11e740: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x11e740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_11e744:
    // 0x11e744: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x11e744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_11e748:
    // 0x11e748: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x11e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11e74c:
    // 0x11e74c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x11e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e750:
    // 0x11e750: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x11e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11e754:
    // 0x11e754: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11e754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11e758:
    // 0x11e758: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x11e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11e75c:
    // 0x11e75c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x11e75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_11e760:
    // 0x11e760: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e764:
    // 0x11e764: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11e764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_11e768:
    // 0x11e768: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x11e768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_11e76c:
    // 0x11e76c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x11e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11e770:
    // 0x11e770: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x11e770u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_11e774:
    // 0x11e774: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x11e774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_11e778:
    // 0x11e778: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x11e778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11e77c:
    // 0x11e77c: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x11e77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_11e780:
    // 0x11e780: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_11e784:
    // 0x11e784: 0xb3a30077  sdl         $v1, 0x77($sp)
    ctx->pc = 0x11e784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e788:
    // 0x11e788: 0xb7a30070  sdr         $v1, 0x70($sp)
    ctx->pc = 0x11e788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e78c:
    // 0x11e78c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x11e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_11e790:
    // 0x11e790: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x11e790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_11e794:
    // 0x11e794: 0xc04642c  jal         func_1190B0
label_11e798:
    if (ctx->pc == 0x11E798u) {
        ctx->pc = 0x11E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E794u;
        // 0x11e798: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E79Cu;
        goto label_11e79c;
    }
    ctx->pc = 0x11E794u;
    SET_GPR_U32(ctx, 31, 0x11E79Cu);
    ctx->pc = 0x11E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E794u;
    // 0x11e798: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x11E794u, 0x11E79Cu)) {
        return;
    }
    ctx->pc = 0x11E79Cu;
label_11e79c:
    // 0x11e79c: 0x0  nop
    ctx->pc = 0x11e79cu;
    // NOP
label_11e7a0:
    // 0x11e7a0: 0x0  nop
    ctx->pc = 0x11e7a0u;
    // NOP
label_11e7a4:
    // 0x11e7a4: 0x46000044  c1          0x44
    ctx->pc = 0x11e7a4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_11e7a8:
    // 0x11e7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11e7ac:
    // 0x11e7ac: 0x0  nop
    ctx->pc = 0x11e7acu;
    // NOP
label_11e7b0:
    // 0x11e7b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11e7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11e7b4:
    // 0x11e7b4: 0x0  nop
    ctx->pc = 0x11e7b4u;
    // NOP
label_11e7b8:
    // 0x11e7b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_11e7bc:
    if (ctx->pc == 0x11E7BCu) {
        ctx->pc = 0x11E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7B8u;
        // 0x11e7bc: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7C0u;
        goto label_11e7c0;
    }
    ctx->pc = 0x11E7B8u;
    {
        const bool branch_taken_0x11e7b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7B8u;
        // 0x11e7bc: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7b8) {
            ctx->pc = 0x11E7D8u;
            goto label_11e7d8;
        }
    }
    ctx->pc = 0x11E7C0u;
label_11e7c0:
    // 0x11e7c0: 0x0  nop
    ctx->pc = 0x11e7c0u;
    // NOP
label_11e7c4:
    // 0x11e7c4: 0x0  nop
    ctx->pc = 0x11e7c4u;
    // NOP
label_11e7c8:
    // 0x11e7c8: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x11e7c8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[1]);
label_11e7cc:
    // 0x11e7cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_11e7d0:
    if (ctx->pc == 0x11E7D0u) {
        ctx->pc = 0x11E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7CCu;
        // 0x11e7d0: 0xc7a60074  lwc1        $f6, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7D4u;
        goto label_11e7d4;
    }
    ctx->pc = 0x11E7CCu;
    {
        const bool branch_taken_0x11e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7CCu;
        // 0x11e7d0: 0xc7a60074  lwc1        $f6, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7cc) {
            ctx->pc = 0x11E7E0u;
            goto label_11e7e0;
        }
    }
    ctx->pc = 0x11E7D4u;
label_11e7d4:
    // 0x11e7d4: 0x0  nop
    ctx->pc = 0x11e7d4u;
    // NOP
label_11e7d8:
    // 0x11e7d8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x11e7d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_11e7dc:
    // 0x11e7dc: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x11e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_11e7e0:
    // 0x11e7e0: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x11e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_11e7e4:
    // 0x11e7e4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11e7e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_11e7e8:
    // 0x11e7e8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x11e7e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_11e7ec:
    // 0x11e7ec: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x11e7ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_11e7f0:
    // 0x11e7f0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x11e7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11e7f4:
    // 0x11e7f4: 0xe7a60074  swc1        $f6, 0x74($sp)
    ctx->pc = 0x11e7f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_11e7f8:
    // 0x11e7f8: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x11e7f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_11e7fc:
    // 0x11e7fc: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x11e7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11e800:
    // 0x11e800: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x11e800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11e804:
    // 0x11e804: 0x460219c2  mul.s       $f7, $f3, $f2
    ctx->pc = 0x11e804u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_11e808:
    // 0x11e808: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x11e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e80c:
    // 0x11e80c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x11e80cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_11e810:
    // 0x11e810: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x11e810u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_11e814:
    // 0x11e814: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x11e814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11e818:
    // 0x11e818: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11e818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_11e81c:
    // 0x11e81c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x11e81cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_11e820:
    // 0x11e820: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x11e820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_11e824:
    // 0x11e824: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11e824u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11e828:
    // 0x11e828: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x11e828u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_11e82c:
    // 0x11e82c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x11e82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_11e830:
    // 0x11e830: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x11e830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_11e834:
    // 0x11e834: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x11e834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_11e838:
    // 0x11e838: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11e83c:
    // 0x11e83c: 0xc04642c  jal         func_1190B0
label_11e840:
    if (ctx->pc == 0x11E840u) {
        ctx->pc = 0x11E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E83Cu;
        // 0x11e840: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E844u;
        goto label_11e844;
    }
    ctx->pc = 0x11E83Cu;
    SET_GPR_U32(ctx, 31, 0x11E844u);
    ctx->pc = 0x11E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E83Cu;
    // 0x11e840: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x11E83Cu, 0x11E844u)) {
        return;
    }
    ctx->pc = 0x11E844u;
label_11e844:
    // 0x11e844: 0x0  nop
    ctx->pc = 0x11e844u;
    // NOP
label_11e848:
    // 0x11e848: 0x0  nop
    ctx->pc = 0x11e848u;
    // NOP
label_11e84c:
    // 0x11e84c: 0x46000044  c1          0x44
    ctx->pc = 0x11e84cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_11e850:
    // 0x11e850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11e854:
    // 0x11e854: 0x0  nop
    ctx->pc = 0x11e854u;
    // NOP
label_11e858:
    // 0x11e858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11e858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11e85c:
    // 0x11e85c: 0x0  nop
    ctx->pc = 0x11e85cu;
    // NOP
label_11e860:
    // 0x11e860: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_11e864:
    if (ctx->pc == 0x11E864u) {
        ctx->pc = 0x11E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E860u;
        // 0x11e864: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E868u;
        goto label_11e868;
    }
    ctx->pc = 0x11E860u;
    {
        const bool branch_taken_0x11e860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E860u;
        // 0x11e864: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e860) {
            ctx->pc = 0x11E880u;
            goto label_11e880;
        }
    }
    ctx->pc = 0x11E868u;
label_11e868:
    // 0x11e868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11e86c:
    // 0x11e86c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11e870:
    // 0x11e870: 0x0  nop
    ctx->pc = 0x11e870u;
    // NOP
label_11e874:
    // 0x11e874: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11e874u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_11e878:
    // 0x11e878: 0x10000003  b           . + 4 + (0x3 << 2)
label_11e87c:
    if (ctx->pc == 0x11E87Cu) {
        ctx->pc = 0x11E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E878u;
        // 0x11e87c: 0xc7a60054  lwc1        $f6, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E880u;
        goto label_11e880;
    }
    ctx->pc = 0x11E878u;
    {
        const bool branch_taken_0x11e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E878u;
        // 0x11e87c: 0xc7a60054  lwc1        $f6, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e878) {
            ctx->pc = 0x11E888u;
            goto label_11e888;
        }
    }
    ctx->pc = 0x11E880u;
label_11e880:
    // 0x11e880: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x11e880u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_11e884:
    // 0x11e884: 0xc7a60054  lwc1        $f6, 0x54($sp)
    ctx->pc = 0x11e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_11e888:
    // 0x11e888: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x11e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_11e88c:
    // 0x11e88c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11e88cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_11e890:
    // 0x11e890: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x11e890u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_11e894:
    // 0x11e894: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x11e894u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_11e898:
    // 0x11e898: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x11e898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_11e89c:
    // 0x11e89c: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x11e89cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_11e8a0:
    // 0x11e8a0: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x11e8a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_11e8a4:
    // 0x11e8a4: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x11e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11e8a8:
    // 0x11e8a8: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x11e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11e8ac:
    // 0x11e8ac: 0x460219c2  mul.s       $f7, $f3, $f2
    ctx->pc = 0x11e8acu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_11e8b0:
    // 0x11e8b0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x11e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11e8b4:
    // 0x11e8b4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x11e8b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_11e8b8:
    // 0x11e8b8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x11e8b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_11e8bc:
    // 0x11e8bc: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x11e8bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_11e8c0:
    // 0x11e8c0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11e8c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_11e8c4:
    // 0x11e8c4: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x11e8c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_11e8c8:
    // 0x11e8c8: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x11e8c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_11e8cc:
    // 0x11e8cc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11e8ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11e8d0:
    // 0x11e8d0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x11e8d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_11e8d4:
    // 0x11e8d4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x11e8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11e8d8:
    // 0x11e8d8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x11e8d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_11e8dc:
    // 0x11e8dc: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x11e8dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11e8e0:
    // 0x11e8e0: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x11e8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11e8e4:
    // 0x11e8e4: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x11e8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11e8e8:
    // 0x11e8e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x11e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_11e8ec:
    // 0x11e8ec: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x11e8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e8f0:
    // 0x11e8f0: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x11e8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e8f4:
    // 0x11e8f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x11e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_11e8f8:
    // 0x11e8f8: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x11e8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_11e8fc:
    // 0x11e8fc: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x11e8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_11e900:
    // 0x11e900: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x11e900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_11e904:
    // 0x11e904: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x11e904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e908:
    // 0x11e908: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x11e908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e90c:
    // 0x11e90c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x11e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_11e910:
    // 0x11e910: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x11e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_11e914:
    // 0x11e914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11e914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11e918:
    // 0x11e918: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x11e918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11e91c:
    // 0x11e91c: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x11e91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_11e920:
    // 0x11e920: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x11e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_11e924:
    // 0x11e924: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x11e924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e928:
    // 0x11e928: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x11e928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e92c:
    // 0x11e92c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x11e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_11e930:
    // 0x11e930: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x11e930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_11e934:
    // 0x11e934: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_11e938:
    // 0x11e938: 0x60f809  jalr        $v1
label_11e93c:
    if (ctx->pc == 0x11E93Cu) {
        ctx->pc = 0x11E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E938u;
        // 0x11e93c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E940u;
        goto label_11e940;
    }
    ctx->pc = 0x11E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11E940u);
        ctx->pc = 0x11E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E938u;
        // 0x11e93c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E938u, 0x11E940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E940u;
label_11e940:
    // 0x11e940: 0xc08992e  jal         func_2264B8
label_11e944:
    if (ctx->pc == 0x11E944u) {
        ctx->pc = 0x11E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E940u;
        // 0x11e944: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E948u;
        goto label_11e948;
    }
    ctx->pc = 0x11E940u;
    SET_GPR_U32(ctx, 31, 0x11E948u);
    ctx->pc = 0x11E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E940u;
    // 0x11e944: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x11E940u, 0x11E948u)) {
        return;
    }
    ctx->pc = 0x11E948u;
label_11e948:
    // 0x11e948: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x11e948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_11e94c:
    // 0x11e94c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11e94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11e950:
    // 0x11e950: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x11e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11e954:
    // 0x11e954: 0x3e00008  jr          $ra
label_11e958:
    if (ctx->pc == 0x11E958u) {
        ctx->pc = 0x11E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E954u;
        // 0x11e958: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E95Cu;
        goto label_11e95c;
    }
    ctx->pc = 0x11E954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E954u;
        // 0x11e958: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E95Cu;
label_11e95c:
    // 0x11e95c: 0x0  nop
    ctx->pc = 0x11e95cu;
    // NOP
    ctx->pc = 0x11e960u;
}
