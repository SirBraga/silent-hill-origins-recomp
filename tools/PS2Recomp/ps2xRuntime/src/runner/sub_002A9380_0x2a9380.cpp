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

// Function: sub_002A9380
// Address: 0x2a9380 - 0x2a9550
void sub_002A9380_0x2a9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9380_0x2a9380");
#endif

    switch (ctx->pc) {
        case 0x2a9380u: goto label_2a9380;
        case 0x2a9384u: goto label_2a9384;
        case 0x2a9388u: goto label_2a9388;
        case 0x2a938cu: goto label_2a938c;
        case 0x2a9390u: goto label_2a9390;
        case 0x2a9394u: goto label_2a9394;
        case 0x2a9398u: goto label_2a9398;
        case 0x2a939cu: goto label_2a939c;
        case 0x2a93a0u: goto label_2a93a0;
        case 0x2a93a4u: goto label_2a93a4;
        case 0x2a93a8u: goto label_2a93a8;
        case 0x2a93acu: goto label_2a93ac;
        case 0x2a93b0u: goto label_2a93b0;
        case 0x2a93b4u: goto label_2a93b4;
        case 0x2a93b8u: goto label_2a93b8;
        case 0x2a93bcu: goto label_2a93bc;
        case 0x2a93c0u: goto label_2a93c0;
        case 0x2a93c4u: goto label_2a93c4;
        case 0x2a93c8u: goto label_2a93c8;
        case 0x2a93ccu: goto label_2a93cc;
        case 0x2a93d0u: goto label_2a93d0;
        case 0x2a93d4u: goto label_2a93d4;
        case 0x2a93d8u: goto label_2a93d8;
        case 0x2a93dcu: goto label_2a93dc;
        case 0x2a93e0u: goto label_2a93e0;
        case 0x2a93e4u: goto label_2a93e4;
        case 0x2a93e8u: goto label_2a93e8;
        case 0x2a93ecu: goto label_2a93ec;
        case 0x2a93f0u: goto label_2a93f0;
        case 0x2a93f4u: goto label_2a93f4;
        case 0x2a93f8u: goto label_2a93f8;
        case 0x2a93fcu: goto label_2a93fc;
        case 0x2a9400u: goto label_2a9400;
        case 0x2a9404u: goto label_2a9404;
        case 0x2a9408u: goto label_2a9408;
        case 0x2a940cu: goto label_2a940c;
        case 0x2a9410u: goto label_2a9410;
        case 0x2a9414u: goto label_2a9414;
        case 0x2a9418u: goto label_2a9418;
        case 0x2a941cu: goto label_2a941c;
        case 0x2a9420u: goto label_2a9420;
        case 0x2a9424u: goto label_2a9424;
        case 0x2a9428u: goto label_2a9428;
        case 0x2a942cu: goto label_2a942c;
        case 0x2a9430u: goto label_2a9430;
        case 0x2a9434u: goto label_2a9434;
        case 0x2a9438u: goto label_2a9438;
        case 0x2a943cu: goto label_2a943c;
        case 0x2a9440u: goto label_2a9440;
        case 0x2a9444u: goto label_2a9444;
        case 0x2a9448u: goto label_2a9448;
        case 0x2a944cu: goto label_2a944c;
        case 0x2a9450u: goto label_2a9450;
        case 0x2a9454u: goto label_2a9454;
        case 0x2a9458u: goto label_2a9458;
        case 0x2a945cu: goto label_2a945c;
        case 0x2a9460u: goto label_2a9460;
        case 0x2a9464u: goto label_2a9464;
        case 0x2a9468u: goto label_2a9468;
        case 0x2a946cu: goto label_2a946c;
        case 0x2a9470u: goto label_2a9470;
        case 0x2a9474u: goto label_2a9474;
        case 0x2a9478u: goto label_2a9478;
        case 0x2a947cu: goto label_2a947c;
        case 0x2a9480u: goto label_2a9480;
        case 0x2a9484u: goto label_2a9484;
        case 0x2a9488u: goto label_2a9488;
        case 0x2a948cu: goto label_2a948c;
        case 0x2a9490u: goto label_2a9490;
        case 0x2a9494u: goto label_2a9494;
        case 0x2a9498u: goto label_2a9498;
        case 0x2a949cu: goto label_2a949c;
        case 0x2a94a0u: goto label_2a94a0;
        case 0x2a94a4u: goto label_2a94a4;
        case 0x2a94a8u: goto label_2a94a8;
        case 0x2a94acu: goto label_2a94ac;
        case 0x2a94b0u: goto label_2a94b0;
        case 0x2a94b4u: goto label_2a94b4;
        case 0x2a94b8u: goto label_2a94b8;
        case 0x2a94bcu: goto label_2a94bc;
        case 0x2a94c0u: goto label_2a94c0;
        case 0x2a94c4u: goto label_2a94c4;
        case 0x2a94c8u: goto label_2a94c8;
        case 0x2a94ccu: goto label_2a94cc;
        case 0x2a94d0u: goto label_2a94d0;
        case 0x2a94d4u: goto label_2a94d4;
        case 0x2a94d8u: goto label_2a94d8;
        case 0x2a94dcu: goto label_2a94dc;
        case 0x2a94e0u: goto label_2a94e0;
        case 0x2a94e4u: goto label_2a94e4;
        case 0x2a94e8u: goto label_2a94e8;
        case 0x2a94ecu: goto label_2a94ec;
        case 0x2a94f0u: goto label_2a94f0;
        case 0x2a94f4u: goto label_2a94f4;
        case 0x2a94f8u: goto label_2a94f8;
        case 0x2a94fcu: goto label_2a94fc;
        case 0x2a9500u: goto label_2a9500;
        case 0x2a9504u: goto label_2a9504;
        case 0x2a9508u: goto label_2a9508;
        case 0x2a950cu: goto label_2a950c;
        case 0x2a9510u: goto label_2a9510;
        case 0x2a9514u: goto label_2a9514;
        case 0x2a9518u: goto label_2a9518;
        case 0x2a951cu: goto label_2a951c;
        case 0x2a9520u: goto label_2a9520;
        case 0x2a9524u: goto label_2a9524;
        case 0x2a9528u: goto label_2a9528;
        case 0x2a952cu: goto label_2a952c;
        case 0x2a9530u: goto label_2a9530;
        case 0x2a9534u: goto label_2a9534;
        case 0x2a9538u: goto label_2a9538;
        case 0x2a953cu: goto label_2a953c;
        case 0x2a9540u: goto label_2a9540;
        case 0x2a9544u: goto label_2a9544;
        case 0x2a9548u: goto label_2a9548;
        case 0x2a954cu: goto label_2a954c;
        default: break;
    }

    ctx->pc = 0x2a9380u;

label_2a9380:
    // 0x2a9380: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2a9384:
    // 0x2a9384: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a9384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2a9388:
    // 0x2a9388: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a9388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2a938c:
    // 0x2a938c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a938cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9390:
    // 0x2a9390: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a9390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2a9394:
    // 0x2a9394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a9394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a9398:
    // 0x2a9398: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2a9398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2a939c:
    // 0x2a939c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a939cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a93a0:
    // 0x2a93a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a93a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a93a4:
    // 0x2a93a4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a93a8:
    // 0x2a93a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a93ac:
    // 0x2a93ac: 0x40f809  jalr        $v0
label_2a93b0:
    if (ctx->pc == 0x2A93B0u) {
        ctx->pc = 0x2A93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93ACu;
        // 0x2a93b0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A93B4u;
        goto label_2a93b4;
    }
    ctx->pc = 0x2A93ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A93B4u);
        ctx->pc = 0x2A93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93ACu;
        // 0x2a93b0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A93ACu, 0x2A93B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A93B4u;
label_2a93b4:
    // 0x2a93b4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a93b8:
    // 0x2a93b8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a93bc:
    // 0x2a93bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a93bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2a93c0:
    // 0x2a93c0: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_2a93c4:
    if (ctx->pc == 0x2A93C4u) {
        ctx->pc = 0x2A93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93C0u;
        // 0x2a93c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A93C8u;
        goto label_2a93c8;
    }
    ctx->pc = 0x2A93C0u;
    {
        const bool branch_taken_0x2a93c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93C0u;
        // 0x2a93c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93c0) {
            ctx->pc = 0x2A9530u;
            goto label_2a9530;
        }
    }
    ctx->pc = 0x2A93C8u;
label_2a93c8:
    // 0x2a93c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a93c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a93cc:
    // 0x2a93cc: 0xc0a4cd2  jal         func_293348
label_2a93d0:
    if (ctx->pc == 0x2A93D0u) {
        ctx->pc = 0x2A93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93CCu;
        // 0x2a93d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A93D4u;
        goto label_2a93d4;
    }
    ctx->pc = 0x2A93CCu;
    SET_GPR_U32(ctx, 31, 0x2A93D4u);
    ctx->pc = 0x2A93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A93CCu;
    // 0x2a93d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293348u, 0x2A93CCu, 0x2A93D4u)) {
        return;
    }
    ctx->pc = 0x2A93D4u;
label_2a93d4:
    // 0x2a93d4: 0xc7ad000c  lwc1        $f13, 0xC($sp)
    ctx->pc = 0x2a93d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a93d8:
    // 0x2a93d8: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x2a93d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a93dc:
    // 0x2a93dc: 0xc6270010  lwc1        $f7, 0x10($s1)
    ctx->pc = 0x2a93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a93e0:
    // 0x2a93e0: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x2a93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2a93e4:
    // 0x2a93e4: 0xc7ab0004  lwc1        $f11, 0x4($sp)
    ctx->pc = 0x2a93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2a93e8:
    // 0x2a93e8: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x2a93e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_2a93ec:
    // 0x2a93ec: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x2a93ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a93f0:
    // 0x2a93f0: 0x460758c2  mul.s       $f3, $f11, $f7
    ctx->pc = 0x2a93f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
label_2a93f4:
    // 0x2a93f4: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x2a93f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a93f8:
    // 0x2a93f8: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x2a93f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a93fc:
    // 0x2a93fc: 0x46044082  mul.s       $f2, $f8, $f4
    ctx->pc = 0x2a93fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_2a9400:
    // 0x2a9400: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a9400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2a9404:
    // 0x2a9404: 0x460c6802  mul.s       $f0, $f13, $f12
    ctx->pc = 0x2a9404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
label_2a9408:
    // 0x2a9408: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a940c:
    // 0x2a940c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a940cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a9410:
    // 0x2a9410: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a9410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2a9414:
    // 0x2a9414: 0x46045842  mul.s       $f1, $f11, $f4
    ctx->pc = 0x2a9414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
label_2a9418:
    // 0x2a9418: 0x46074242  mul.s       $f9, $f8, $f7
    ctx->pc = 0x2a9418u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_2a941c:
    // 0x2a941c: 0x46064082  mul.s       $f2, $f8, $f6
    ctx->pc = 0x2a941cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_2a9420:
    // 0x2a9420: 0x46045142  mul.s       $f5, $f10, $f4
    ctx->pc = 0x2a9420u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_2a9424:
    // 0x2a9424: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x2a9424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_2a9428:
    // 0x2a9428: 0x460658c2  mul.s       $f3, $f11, $f6
    ctx->pc = 0x2a9428u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
label_2a942c:
    // 0x2a942c: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x2a942cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
label_2a9430:
    // 0x2a9430: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2a9430u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_2a9434:
    // 0x2a9434: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a9434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2a9438:
    // 0x2a9438: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x2a9438u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
label_2a943c:
    // 0x2a943c: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x2a943cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
label_2a9440:
    // 0x2a9440: 0x460d39c2  mul.s       $f7, $f7, $f13
    ctx->pc = 0x2a9440u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
label_2a9444:
    // 0x2a9444: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2a9444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_2a9448:
    // 0x2a9448: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2a9448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2a944c:
    // 0x2a944c: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2a944cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_2a9450:
    // 0x2a9450: 0x460c5282  mul.s       $f10, $f10, $f12
    ctx->pc = 0x2a9450u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
label_2a9454:
    // 0x2a9454: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x2a9454u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
label_2a9458:
    // 0x2a9458: 0x460c5ac2  mul.s       $f11, $f11, $f12
    ctx->pc = 0x2a9458u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
label_2a945c:
    // 0x2a945c: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x2a945cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
label_2a9460:
    // 0x2a9460: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2a9460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_2a9464:
    // 0x2a9464: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x2a9464u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
label_2a9468:
    // 0x2a9468: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2a9468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a946c:
    // 0x2a946c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a946cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a9470:
    // 0x2a9470: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2a9470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2a9474:
    // 0x2a9474: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2a9474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2a9478:
    // 0x2a9478: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2a9478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2a947c:
    // 0x2a947c: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x2a947cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2a9480:
    // 0x2a9480: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x2a9480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2a9484:
    // 0x2a9484: 0xb2220013  sdl         $v0, 0x13($s1)
    ctx->pc = 0x2a9484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9488:
    // 0x2a9488: 0xb622000c  sdr         $v0, 0xC($s1)
    ctx->pc = 0x2a9488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a948c:
    // 0x2a948c: 0xb223001b  sdl         $v1, 0x1B($s1)
    ctx->pc = 0x2a948cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9490:
    // 0x2a9490: 0xb6230014  sdr         $v1, 0x14($s1)
    ctx->pc = 0x2a9490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9494:
    // 0x2a9494: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2a9494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a9498:
    // 0x2a9498: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2a9498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a949c:
    // 0x2a949c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2a949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a94a0:
    // 0x2a94a0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a94a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a94a4:
    // 0x2a94a4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2a94a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2a94a8:
    // 0x2a94a8: 0xc6090010  lwc1        $f9, 0x10($s0)
    ctx->pc = 0x2a94a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2a94ac:
    // 0x2a94ac: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2a94acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2a94b0:
    // 0x2a94b0: 0xc6080014  lwc1        $f8, 0x14($s0)
    ctx->pc = 0x2a94b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a94b4:
    // 0x2a94b4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a94b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a94b8:
    // 0x2a94b8: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x2a94b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a94bc:
    // 0x2a94bc: 0xc6070018  lwc1        $f7, 0x18($s0)
    ctx->pc = 0x2a94bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a94c0:
    // 0x2a94c0: 0x46092a42  mul.s       $f9, $f5, $f9
    ctx->pc = 0x2a94c0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_2a94c4:
    // 0x2a94c4: 0xc6060020  lwc1        $f6, 0x20($s0)
    ctx->pc = 0x2a94c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a94c8:
    // 0x2a94c8: 0x46082a02  mul.s       $f8, $f5, $f8
    ctx->pc = 0x2a94c8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
label_2a94cc:
    // 0x2a94cc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2a94ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a94d0:
    // 0x2a94d0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2a94d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a94d4:
    // 0x2a94d4: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2a94d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_2a94d8:
    // 0x2a94d8: 0xc6070024  lwc1        $f7, 0x24($s0)
    ctx->pc = 0x2a94d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a94dc:
    // 0x2a94dc: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x2a94dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
label_2a94e0:
    // 0x2a94e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a94e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a94e4:
    // 0x2a94e4: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x2a94e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_2a94e8:
    // 0x2a94e8: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2a94e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_2a94ec:
    // 0x2a94ec: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2a94ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_2a94f0:
    // 0x2a94f0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2a94f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_2a94f4:
    // 0x2a94f4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2a94f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_2a94f8:
    // 0x2a94f8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a94f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2a94fc:
    // 0x2a94fc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a94fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2a9500:
    // 0x2a9500: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2a9500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2a9504:
    // 0x2a9504: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x2a9504u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2a9508:
    // 0x2a9508: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2a9508u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2a950c:
    // 0x2a950c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2a950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9510:
    // 0x2a9510: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a9510u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2a9514:
    // 0x2a9514: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2a9514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2a9518:
    // 0x2a9518: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2a9518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a951c:
    // 0x2a951c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a951cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a9520:
    // 0x2a9520: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x2a9520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2a9524:
    // 0x2a9524: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2a9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9528:
    // 0x2a9528: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a9528u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2a952c:
    // 0x2a952c: 0xe6440008  swc1        $f4, 0x8($s2)
    ctx->pc = 0x2a952cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2a9530:
    // 0x2a9530: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2a9530u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2a9534:
    // 0x2a9534: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a9534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a9538:
    // 0x2a9538: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a9538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a953c:
    // 0x2a953c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a953cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9540:
    // 0x2a9540: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a9540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9544:
    // 0x2a9544: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2a9544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a9548:
    // 0x2a9548: 0x3e00008  jr          $ra
label_2a954c:
    if (ctx->pc == 0x2A954Cu) {
        ctx->pc = 0x2A954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9548u;
        // 0x2a954c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9550u;
        goto label_fallthrough_0x2a9548;
    }
    ctx->pc = 0x2A9548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9548u;
        // 0x2a954c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a9548:
    ctx->pc = 0x2A9550u;
}
