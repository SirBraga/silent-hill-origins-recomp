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

// Function: sub_001015B8
// Address: 0x1015b8 - 0x1016e0
void sub_001015B8_0x1015b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001015B8_0x1015b8");
#endif

    switch (ctx->pc) {
        case 0x1015b8u: goto label_1015b8;
        case 0x1015bcu: goto label_1015bc;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015c4u: goto label_1015c4;
        case 0x1015c8u: goto label_1015c8;
        case 0x1015ccu: goto label_1015cc;
        case 0x1015d0u: goto label_1015d0;
        case 0x1015d4u: goto label_1015d4;
        case 0x1015d8u: goto label_1015d8;
        case 0x1015dcu: goto label_1015dc;
        case 0x1015e0u: goto label_1015e0;
        case 0x1015e4u: goto label_1015e4;
        case 0x1015e8u: goto label_1015e8;
        case 0x1015ecu: goto label_1015ec;
        case 0x1015f0u: goto label_1015f0;
        case 0x1015f4u: goto label_1015f4;
        case 0x1015f8u: goto label_1015f8;
        case 0x1015fcu: goto label_1015fc;
        case 0x101600u: goto label_101600;
        case 0x101604u: goto label_101604;
        case 0x101608u: goto label_101608;
        case 0x10160cu: goto label_10160c;
        case 0x101610u: goto label_101610;
        case 0x101614u: goto label_101614;
        case 0x101618u: goto label_101618;
        case 0x10161cu: goto label_10161c;
        case 0x101620u: goto label_101620;
        case 0x101624u: goto label_101624;
        case 0x101628u: goto label_101628;
        case 0x10162cu: goto label_10162c;
        case 0x101630u: goto label_101630;
        case 0x101634u: goto label_101634;
        case 0x101638u: goto label_101638;
        case 0x10163cu: goto label_10163c;
        case 0x101640u: goto label_101640;
        case 0x101644u: goto label_101644;
        case 0x101648u: goto label_101648;
        case 0x10164cu: goto label_10164c;
        case 0x101650u: goto label_101650;
        case 0x101654u: goto label_101654;
        case 0x101658u: goto label_101658;
        case 0x10165cu: goto label_10165c;
        case 0x101660u: goto label_101660;
        case 0x101664u: goto label_101664;
        case 0x101668u: goto label_101668;
        case 0x10166cu: goto label_10166c;
        case 0x101670u: goto label_101670;
        case 0x101674u: goto label_101674;
        case 0x101678u: goto label_101678;
        case 0x10167cu: goto label_10167c;
        case 0x101680u: goto label_101680;
        case 0x101684u: goto label_101684;
        case 0x101688u: goto label_101688;
        case 0x10168cu: goto label_10168c;
        case 0x101690u: goto label_101690;
        case 0x101694u: goto label_101694;
        case 0x101698u: goto label_101698;
        case 0x10169cu: goto label_10169c;
        case 0x1016a0u: goto label_1016a0;
        case 0x1016a4u: goto label_1016a4;
        case 0x1016a8u: goto label_1016a8;
        case 0x1016acu: goto label_1016ac;
        case 0x1016b0u: goto label_1016b0;
        case 0x1016b4u: goto label_1016b4;
        case 0x1016b8u: goto label_1016b8;
        case 0x1016bcu: goto label_1016bc;
        case 0x1016c0u: goto label_1016c0;
        case 0x1016c4u: goto label_1016c4;
        case 0x1016c8u: goto label_1016c8;
        case 0x1016ccu: goto label_1016cc;
        case 0x1016d0u: goto label_1016d0;
        case 0x1016d4u: goto label_1016d4;
        case 0x1016d8u: goto label_1016d8;
        case 0x1016dcu: goto label_1016dc;
        default: break;
    }

    ctx->pc = 0x1015b8u;

label_1015b8:
    // 0x1015b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1015b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1015bc:
    // 0x1015bc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1015bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1015c0:
    // 0x1015c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1015c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1015c4:
    // 0x1015c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1015c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1015c8:
    // 0x1015c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1015c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1015cc:
    // 0x1015cc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1015ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1015d0:
    // 0x1015d0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1015d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1015d4:
    // 0x1015d4: 0x8e300198  lw          $s0, 0x198($s1)
    ctx->pc = 0x1015d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_1015d8:
    // 0x1015d8: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_1015dc:
    // 0x1015dc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1015dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1015e0:
    // 0x1015e0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1015e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1015e4:
    // 0x1015e4: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x1015e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_1015e8:
    // 0x1015e8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1015e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1015ec:
    // 0x1015ec: 0x6a02001f  ldl         $v0, 0x1F($s0)
    ctx->pc = 0x1015ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1015f0:
    // 0x1015f0: 0x6e020018  ldr         $v0, 0x18($s0)
    ctx->pc = 0x1015f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1015f4:
    // 0x1015f4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1015f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1015f8:
    // 0x1015f8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1015f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1015fc:
    // 0x1015fc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1015fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_101600:
    // 0x101600: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x101600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_101604:
    // 0x101604: 0xc04f0fe  jal         func_13C3F8
label_101608:
    if (ctx->pc == 0x101608u) {
        ctx->pc = 0x101608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101604u;
        // 0x101608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10160Cu;
        goto label_10160c;
    }
    ctx->pc = 0x101604u;
    SET_GPR_U32(ctx, 31, 0x10160Cu);
    ctx->pc = 0x101608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101604u;
    // 0x101608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x101604u, 0x10160Cu)) {
        return;
    }
    ctx->pc = 0x10160Cu;
label_10160c:
    // 0x10160c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x10160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_101610:
    // 0x101610: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x101610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101614:
    // 0x101614: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x101614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101618:
    // 0x101618: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x101618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10161c:
    // 0x10161c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x10161cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_101620:
    // 0x101620: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x101620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_101624:
    // 0x101624: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x101624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_101628:
    // 0x101628: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x101628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_10162c:
    // 0x10162c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x10162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_101630:
    // 0x101630: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x101630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_101634:
    // 0x101634: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x101634u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_101638:
    // 0x101638: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x101638u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_10163c:
    // 0x10163c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x10163cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_101640:
    // 0x101640: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x101640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_101644:
    // 0x101644: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x101644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101648:
    // 0x101648: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x101648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10164c:
    // 0x10164c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x10164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_101650:
    // 0x101650: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x101650u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_101654:
    // 0x101654: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x101654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_101658:
    // 0x101658: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x101658u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_10165c:
    // 0x10165c: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x10165cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_101660:
    // 0x101660: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x101660u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_101664:
    // 0x101664: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x101664u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_101668:
    // 0x101668: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x101668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_10166c:
    // 0x10166c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x10166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101670:
    // 0x101670: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x101670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101674:
    // 0x101674: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x101674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_101678:
    // 0x101678: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x101678u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_10167c:
    // 0x10167c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10167cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_101680:
    // 0x101680: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x101680u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_101684:
    // 0x101684: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x101684u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_101688:
    // 0x101688: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x101688u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_10168c:
    // 0x10168c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x10168cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_101690:
    // 0x101690: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x101690u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_101694:
    // 0x101694: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x101694u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_101698:
    // 0x101698: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x101698u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_10169c:
    // 0x10169c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x10169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1016a0:
    // 0x1016a0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1016a4:
    // 0x1016a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1016a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1016a8:
    // 0x1016a8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1016a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1016ac:
    // 0x1016ac: 0x60f809  jalr        $v1
label_1016b0:
    if (ctx->pc == 0x1016B0u) {
        ctx->pc = 0x1016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ACu;
        // 0x1016b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016B4u;
        goto label_1016b4;
    }
    ctx->pc = 0x1016ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1016B4u);
        ctx->pc = 0x1016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ACu;
        // 0x1016b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016ACu, 0x1016B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1016B4u;
label_1016b4:
    // 0x1016b4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1016b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1016b8:
    // 0x1016b8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1016b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1016bc:
    // 0x1016bc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1016bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1016c0:
    // 0x1016c0: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x1016c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_1016c4:
    // 0x1016c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1016c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1016c8:
    // 0x1016c8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1016c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1016cc:
    // 0x1016cc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1016ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1016d0:
    // 0x1016d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1016d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1016d4:
    // 0x1016d4: 0x3e00008  jr          $ra
label_1016d8:
    if (ctx->pc == 0x1016D8u) {
        ctx->pc = 0x1016D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016D4u;
        // 0x1016d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016DCu;
        goto label_1016dc;
    }
    ctx->pc = 0x1016D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1016D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016D4u;
        // 0x1016d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1016DCu;
label_1016dc:
    // 0x1016dc: 0x0  nop
    ctx->pc = 0x1016dcu;
    // NOP
    ctx->pc = 0x1016e0u;
}
