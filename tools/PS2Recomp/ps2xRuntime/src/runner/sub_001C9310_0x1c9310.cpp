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

// Function: sub_001C9310
// Address: 0x1c9310 - 0x1c9508
void sub_001C9310_0x1c9310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9310_0x1c9310");
#endif

    switch (ctx->pc) {
        case 0x1c9390u: goto label_1c9390;
        case 0x1c93c8u: goto label_1c93c8;
        case 0x1c9400u: goto label_1c9400;
        case 0x1c9460u: goto label_1c9460;
        case 0x1c94c8u: goto label_1c94c8;
        case 0x1c94d8u: goto label_1c94d8;
        default: break;
    }

    ctx->pc = 0x1c9310u;

    // 0x1c9310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c9310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c9314: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c9314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9318: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1c9318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c931c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c931cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9320: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c9320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c9324: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c9324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c9328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c932c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1c932cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c9330: 0x8e420398  lw          $v0, 0x398($s2)
    ctx->pc = 0x1c9330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 920)));
    // 0x1c9334: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C9334u;
    {
        const bool branch_taken_0x1c9334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9334u;
        // 0x1c9338: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9334) {
            ctx->pc = 0x1C9424u;
            goto label_1c9424;
        }
    }
    ctx->pc = 0x1C933Cu;
    // 0x1c933c: 0x8e4303ac  lw          $v1, 0x3AC($s2)
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x1c9340: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c9344: 0x8e4203a8  lw          $v0, 0x3A8($s2)
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 936)));
    // 0x1c9348: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1c934c: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x1c934cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c9350: 0x2610f9a0  addiu       $s0, $s0, -0x660
    ctx->pc = 0x1c9350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965664));
    // 0x1c9354: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1c9354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c9358: 0xc64003b0  lwc1        $f0, 0x3B0($s2)
    ctx->pc = 0x1c9358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c935c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c9360: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c9364: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c9364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c9368: 0x2645039c  addiu       $a1, $s2, 0x39C
    ctx->pc = 0x1c9368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 924));
    // 0x1c936c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c936cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c9370: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1c9370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c9374: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c9374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c9378: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c937c: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1c937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c9380: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x1c9380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c9384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9388: 0xc06d02e  jal         func_1B40B8
    ctx->pc = 0x1C9388u;
    SET_GPR_U32(ctx, 31, 0x1C9390u);
    ctx->pc = 0x1C938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9388u;
    // 0x1c938c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B40B8u, 0x1C9388u, 0x1C9390u)) {
        return;
    }
    ctx->pc = 0x1C9390u;
label_1c9390:
    // 0x1c9390: 0x8e4203ac  lw          $v0, 0x3AC($s2)
    ctx->pc = 0x1c9390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x1c9394: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x1c9394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c9398: 0x8e4303a8  lw          $v1, 0x3A8($s2)
    ctx->pc = 0x1c9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 936)));
    // 0x1c939c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x1c939cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1c93a0: 0x512818  mult        $a1, $v0, $s1
    ctx->pc = 0x1c93a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c93a4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1c93a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c93a8: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x1c93a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c93ac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c93acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c93b0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c93b4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c93b8: 0xc44f0000  lwc1        $f15, 0x0($v0)
    ctx->pc = 0x1c93b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c93bc: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x1c93bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c93c0: 0xc06d02e  jal         func_1B40B8
    ctx->pc = 0x1C93C0u;
    SET_GPR_U32(ctx, 31, 0x1C93C8u);
    ctx->pc = 0x1C93C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93C0u;
    // 0x1c93c4: 0x264503a0  addiu       $a1, $s2, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B40B8u, 0x1C93C0u, 0x1C93C8u)) {
        return;
    }
    ctx->pc = 0x1C93C8u;
label_1c93c8:
    // 0x1c93c8: 0x8e4203ac  lw          $v0, 0x3AC($s2)
    ctx->pc = 0x1c93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x1c93cc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1c93ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c93d0: 0x8e4303a8  lw          $v1, 0x3A8($s2)
    ctx->pc = 0x1c93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 936)));
    // 0x1c93d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c93d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c93d8: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x1c93d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c93dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1c93dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c93e0: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x1c93e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c93e4: 0x264503a4  addiu       $a1, $s2, 0x3A4
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 932));
    // 0x1c93e8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1c93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c93ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c93ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c93f0: 0xc44f0000  lwc1        $f15, 0x0($v0)
    ctx->pc = 0x1c93f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c93f4: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x1c93f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c93f8: 0xc06d02e  jal         func_1B40B8
    ctx->pc = 0x1C93F8u;
    SET_GPR_U32(ctx, 31, 0x1C9400u);
    ctx->pc = 0x1C93FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93F8u;
    // 0x1c93fc: 0x264403b0  addiu       $a0, $s2, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B40B8u, 0x1C93F8u, 0x1C9400u)) {
        return;
    }
    ctx->pc = 0x1C9400u;
label_1c9400:
    // 0x1c9400: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c9400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c9404: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9404u;
    {
        const bool branch_taken_0x1c9404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9404u;
        // 0x1c9408: 0xae420398  sw          $v0, 0x398($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9404) {
            ctx->pc = 0x1C9424u;
            goto label_1c9424;
        }
    }
    ctx->pc = 0x1C940Cu;
    // 0x1c940c: 0x8e4203ac  lw          $v0, 0x3AC($s2)
    ctx->pc = 0x1c940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x1c9410: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c9410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9414: 0xae4203a8  sw          $v0, 0x3A8($s2)
    ctx->pc = 0x1c9414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 936), GPR_U32(ctx, 2));
    // 0x1c9418: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1c941c: 0x8c6203cc  lw          $v0, 0x3CC($v1)
    ctx->pc = 0x1c941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 972)));
    // 0x1c9420: 0xae4203c8  sw          $v0, 0x3C8($s2)
    ctx->pc = 0x1c9420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 968), GPR_U32(ctx, 2));
label_1c9424:
    // 0x1c9424: 0x8e4203b4  lw          $v0, 0x3B4($s2)
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
    // 0x1c9428: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C9428u;
    {
        const bool branch_taken_0x1c9428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9428u;
        // 0x1c942c: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9428) {
            ctx->pc = 0x1C94E4u;
            goto label_1c94e4;
        }
    }
    ctx->pc = 0x1C9430u;
    // 0x1c9430: 0x8e4503c8  lw          $a1, 0x3C8($s2)
    ctx->pc = 0x1c9430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
    // 0x1c9434: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c9438: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c943c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9440: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1c9440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c9444: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x1c9444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c9448: 0xc64e03b8  lwc1        $f14, 0x3B8($s2)
    ctx->pc = 0x1c9448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c944c: 0xc64f03bc  lwc1        $f15, 0x3BC($s2)
    ctx->pc = 0x1c944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c9450: 0x264403c0  addiu       $a0, $s2, 0x3C0
    ctx->pc = 0x1c9450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
    // 0x1c9454: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1c9454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c9458: 0xc06d02e  jal         func_1B40B8
    ctx->pc = 0x1C9458u;
    SET_GPR_U32(ctx, 31, 0x1C9460u);
    ctx->pc = 0x1C945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9458u;
    // 0x1c945c: 0x24a502e8  addiu       $a1, $a1, 0x2E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B40B8u, 0x1C9458u, 0x1C9460u)) {
        return;
    }
    ctx->pc = 0x1C9460u;
label_1c9460:
    // 0x1c9460: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c9460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c9464: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C9464u;
    {
        const bool branch_taken_0x1c9464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9464u;
        // 0x1c9468: 0xae4203b4  sw          $v0, 0x3B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9464) {
            ctx->pc = 0x1C94E4u;
            goto label_1c94e4;
        }
    }
    ctx->pc = 0x1C946Cu;
    // 0x1c946c: 0x8e4203c8  lw          $v0, 0x3C8($s2)
    ctx->pc = 0x1c946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 968)));
    // 0x1c9470: 0x264302e8  addiu       $v1, $s2, 0x2E8
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 744));
    // 0x1c9474: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1c9474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1c9478: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c947c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x1c947cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c9480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9484: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1c9484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9488: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1c9488u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c948c: 0x0  nop
    ctx->pc = 0x1c948cu;
    // NOP
    // 0x1c9490: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9490u;
    {
        const bool branch_taken_0x1c9490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9490) {
            ctx->pc = 0x1C94A0u;
            goto label_1c94a0;
        }
    }
    ctx->pc = 0x1C9498u;
    // 0x1c9498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9498u;
    {
        const bool branch_taken_0x1c9498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9498u;
        // 0x1c949c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9498) {
            ctx->pc = 0x1C94C0u;
            goto label_1c94c0;
        }
    }
    ctx->pc = 0x1C94A0u;
label_1c94a0:
    // 0x1c94a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c94a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c94a4: 0x0  nop
    ctx->pc = 0x1c94a4u;
    // NOP
    // 0x1c94a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c94a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c94ac: 0x0  nop
    ctx->pc = 0x1c94acu;
    // NOP
    // 0x1c94b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C94B0u;
    {
        const bool branch_taken_0x1c94b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c94b0) {
            ctx->pc = 0x1C94C0u;
            goto label_1c94c0;
        }
    }
    ctx->pc = 0x1C94B8u;
    // 0x1c94b8: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1c94b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c94bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c94bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c94c0:
    // 0x1c94c0: 0xc072866  jal         func_1CA198
    ctx->pc = 0x1C94C0u;
    SET_GPR_U32(ctx, 31, 0x1C94C8u);
    ctx->pc = 0x1C94C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94C0u;
    // 0x1c94c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA198u, 0x1C94C0u, 0x1C94C8u)) {
        return;
    }
    ctx->pc = 0x1C94C8u;
label_1c94c8:
    // 0x1c94c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C94C8u;
    {
        const bool branch_taken_0x1c94c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94C8u;
        // 0x1c94cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94c8) {
            ctx->pc = 0x1C94E8u;
            goto label_1c94e8;
        }
    }
    ctx->pc = 0x1C94D0u;
    // 0x1c94d0: 0xc0728b6  jal         func_1CA2D8
    ctx->pc = 0x1C94D0u;
    SET_GPR_U32(ctx, 31, 0x1C94D8u);
    ctx->pc = 0x1C94D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94D0u;
    // 0x1c94d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CA2D8u, 0x1C94D0u, 0x1C94D8u)) {
        return;
    }
    ctx->pc = 0x1C94D8u;
label_1c94d8:
    // 0x1c94d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c94dc: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x1c94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
    // 0x1c94e0: 0xae42026c  sw          $v0, 0x26C($s2)
    ctx->pc = 0x1c94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 2));
label_1c94e4:
    // 0x1c94e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c94e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c94e8:
    // 0x1c94e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c94e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c94ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c94ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c94f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c94f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c94f4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1c94f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c94f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1c94f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c94fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C94FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94FCu;
        // 0x1c9500: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C94FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9504u;
    // 0x1c9504: 0x0  nop
    ctx->pc = 0x1c9504u;
    // NOP
    ctx->pc = 0x1c9508u;
}
