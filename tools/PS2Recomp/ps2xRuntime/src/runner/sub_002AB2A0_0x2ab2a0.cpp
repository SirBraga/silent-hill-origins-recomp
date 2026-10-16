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

// Function: sub_002AB2A0
// Address: 0x2ab2a0 - 0x2ab560
void sub_002AB2A0_0x2ab2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB2A0_0x2ab2a0");
#endif

    switch (ctx->pc) {
        case 0x2ab358u: goto label_2ab358;
        case 0x2ab364u: goto label_2ab364;
        case 0x2ab380u: goto label_2ab380;
        case 0x2ab3d8u: goto label_2ab3d8;
        case 0x2ab3e8u: goto label_2ab3e8;
        case 0x2ab3fcu: goto label_2ab3fc;
        case 0x2ab520u: goto label_2ab520;
        case 0x2ab53cu: goto label_2ab53c;
        default: break;
    }

    ctx->pc = 0x2ab2a0u;

    // 0x2ab2a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ab2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ab2a4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ab2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2ab2a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ab2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2ab2ac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2ab2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ab2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ab2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ab2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ab2bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2ab2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2ab2c0: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x2ab2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab2c4: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2ab2c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2ab2c8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2ab2c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ab2cc: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x2ab2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2ab2d0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2ab2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2ab2d4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2ab2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2ab2d8: 0x2ce40005  sltiu       $a0, $a3, 0x5
    ctx->pc = 0x2ab2d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ab2dc: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2ab2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab2e0: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x2ab2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ab2e4: 0xc7a60038  lwc1        $f6, 0x38($sp)
    ctx->pc = 0x2ab2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ab2e8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2ab2e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2ab2ec: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2ab2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab2f0: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x2ab2f0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x2ab2f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2ab2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab2f8: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x2ab2f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2ab2fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ab2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab300: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2ab300u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2ab304: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ab304u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ab308: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2ab308u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ab30c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ab30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ab310: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2ab310u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ab314: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x2ab314u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ab318: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2ab318u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ab31c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2ab31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ab320: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2AB320u;
    {
        const bool branch_taken_0x2ab320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB320u;
        // 0x2ab324: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab320) {
            ctx->pc = 0x2AB548u;
            goto label_2ab548;
        }
    }
    ctx->pc = 0x2AB328u;
    // 0x2ab328: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ab328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2ab32c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2ab32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ab330: 0x2442e5d0  addiu       $v0, $v0, -0x1A30
    ctx->pc = 0x2ab330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960592));
    // 0x2ab334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ab334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab338: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ab338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab33c: 0x800008  jr          $a0
    ctx->pc = 0x2AB33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB344u: goto label_2ab344;
            case 0x2AB388u: goto label_2ab388;
            case 0x2AB3E0u: goto label_2ab3e0;
            case 0x2AB408u: goto label_2ab408;
            case 0x2AB548u: goto label_2ab548;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB33Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AB344u;
label_2ab344:
    // 0x2ab344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ab344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab348: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ab348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab34c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2ab34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2ab350: 0xc0ad1aa  jal         func_2B46A8
    ctx->pc = 0x2AB350u;
    SET_GPR_U32(ctx, 31, 0x2AB358u);
    ctx->pc = 0x2AB354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB350u;
    // 0x2ab354: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B46A8u, 0x2AB350u, 0x2AB358u)) {
        return;
    }
    ctx->pc = 0x2AB358u;
label_2ab358:
    // 0x2ab358: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2ab358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ab35c: 0xc0aae8e  jal         func_2ABA38
    ctx->pc = 0x2AB35Cu;
    SET_GPR_U32(ctx, 31, 0x2AB364u);
    ctx->pc = 0x2AB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB35Cu;
    // 0x2ab360: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABA38u, 0x2AB35Cu, 0x2AB364u)) {
        return;
    }
    ctx->pc = 0x2AB364u;
label_2ab364:
    // 0x2ab364: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ab364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ab368: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2ab368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2ab36c: 0x24c6b8c0  addiu       $a2, $a2, -0x4740
    ctx->pc = 0x2ab36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949056));
    // 0x2ab370: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ab370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab374: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2ab374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ab378: 0xc09f216  jal         func_27C858
    ctx->pc = 0x2AB378u;
    SET_GPR_U32(ctx, 31, 0x2AB380u);
    ctx->pc = 0x2AB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB378u;
    // 0x2ab37c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27C858u, 0x2AB378u, 0x2AB380u)) {
        return;
    }
    ctx->pc = 0x2AB380u;
label_2ab380:
    // 0x2ab380: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2AB380u;
    {
        const bool branch_taken_0x2ab380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB380u;
        // 0x2ab384: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab380) {
            ctx->pc = 0x2AB540u;
            goto label_2ab540;
        }
    }
    ctx->pc = 0x2AB388u;
label_2ab388:
    // 0x2ab388: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ab388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab38c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2ab38cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2ab390: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2ab390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2ab394: 0x24c6b738  addiu       $a2, $a2, -0x48C8
    ctx->pc = 0x2ab394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948664));
    // 0x2ab398: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ab398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab39c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2ab39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ab3a0: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x2ab3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ab3a4: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x2ab3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ab3a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2ab3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ab3ac: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x2ab3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab3b0: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x2ab3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab3b4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2ab3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2ab3b8: 0x6ba90027  ldl         $t1, 0x27($sp)
    ctx->pc = 0x2ab3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2ab3bc: 0x6fa90020  ldr         $t1, 0x20($sp)
    ctx->pc = 0x2ab3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2ab3c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ab3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ab3c4: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x2ab3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab3c8: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x2ab3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ab3cc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2ab3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2ab3d0: 0xc09f308  jal         func_27CC20
    ctx->pc = 0x2AB3D0u;
    SET_GPR_U32(ctx, 31, 0x2AB3D8u);
    ctx->pc = 0x2AB3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3D0u;
    // 0x2ab3d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27CC20u, 0x2AB3D0u, 0x2AB3D8u)) {
        return;
    }
    ctx->pc = 0x2AB3D8u;
label_2ab3d8:
    // 0x2ab3d8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2AB3D8u;
    {
        const bool branch_taken_0x2ab3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB3D8u;
        // 0x2ab3dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab3d8) {
            ctx->pc = 0x2AB54Cu;
            goto label_2ab54c;
        }
    }
    ctx->pc = 0x2AB3E0u;
label_2ab3e0:
    // 0x2ab3e0: 0xc0aae84  jal         func_2ABA10
    ctx->pc = 0x2AB3E0u;
    SET_GPR_U32(ctx, 31, 0x2AB3E8u);
    ctx->pc = 0x2AB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3E0u;
    // 0x2ab3e4: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABA10u, 0x2AB3E0u, 0x2AB3E8u)) {
        return;
    }
    ctx->pc = 0x2AB3E8u;
label_2ab3e8:
    // 0x2ab3e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ab3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ab3ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ab3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab3f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3f4: 0xc0aac12  jal         func_2AB048
    ctx->pc = 0x2AB3F4u;
    SET_GPR_U32(ctx, 31, 0x2AB3FCu);
    ctx->pc = 0x2AB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3F4u;
    // 0x2ab3f8: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AB048u, 0x2AB3F4u, 0x2AB3FCu)) {
        return;
    }
    ctx->pc = 0x2AB3FCu;
label_2ab3fc:
    // 0x2ab3fc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ab3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ab400: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2AB400u;
    {
        const bool branch_taken_0x2ab400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB400u;
        // 0x2ab404: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab400) {
            ctx->pc = 0x2AB544u;
            goto label_2ab544;
        }
    }
    ctx->pc = 0x2AB408u;
label_2ab408:
    // 0x2ab408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ab408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab40c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2ab40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2ab410: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ab410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab414: 0xc4b00030  lwc1        $f16, 0x30($a1)
    ctx->pc = 0x2ab414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2ab418: 0xc4b10034  lwc1        $f17, 0x34($a1)
    ctx->pc = 0x2ab418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2ab41c: 0xc4b20038  lwc1        $f18, 0x38($a1)
    ctx->pc = 0x2ab41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2ab420: 0x46100001  sub.s       $f0, $f0, $f16
    ctx->pc = 0x2ab420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x2ab424: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2ab424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab428: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x2ab428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ab42c: 0x46110841  sub.s       $f1, $f1, $f17
    ctx->pc = 0x2ab42cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[17]);
    // 0x2ab430: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ab430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ab434: 0x46122101  sub.s       $f4, $f4, $f18
    ctx->pc = 0x2ab434u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[18]);
    // 0x2ab438: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ab438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ab43c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2ab43cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ab440: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x2ab440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ab444: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x2ab444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab448: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x2ab448u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ab44c: 0xc4ae0010  lwc1        $f14, 0x10($a1)
    ctx->pc = 0x2ab44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ab450: 0xc4af0014  lwc1        $f15, 0x14($a1)
    ctx->pc = 0x2ab450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2ab454: 0x460c0ac2  mul.s       $f11, $f1, $f12
    ctx->pc = 0x2ab454u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2ab458: 0xc4a60020  lwc1        $f6, 0x20($a1)
    ctx->pc = 0x2ab458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ab45c: 0x460e00c2  mul.s       $f3, $f0, $f14
    ctx->pc = 0x2ab45cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2ab460: 0xc4a80024  lwc1        $f8, 0x24($a1)
    ctx->pc = 0x2ab460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ab464: 0x460f0882  mul.s       $f2, $f1, $f15
    ctx->pc = 0x2ab464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2ab468: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2ab468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2ab46c: 0xc4aa0028  lwc1        $f10, 0x28($a1)
    ctx->pc = 0x2ab46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2ab470: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2ab470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2ab474: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x2ab474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2ab478: 0xc4ad0018  lwc1        $f13, 0x18($a1)
    ctx->pc = 0x2ab478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab47c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2ab47cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2ab480: 0x460a2082  mul.s       $f2, $f4, $f10
    ctx->pc = 0x2ab480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x2ab484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab488: 0x46092042  mul.s       $f1, $f4, $f9
    ctx->pc = 0x2ab488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x2ab48c: 0x460b2940  add.s       $f5, $f5, $f11
    ctx->pc = 0x2ab48cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x2ab490: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x2ab490u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x2ab494: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ab494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ab498: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2ab498u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2ab49c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2ab49cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2ab4a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2ab4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ab4a4: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2ab4a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ab4a8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2ab4a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ab4ac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ab4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab4b0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2ab4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab4b4: 0x46100001  sub.s       $f0, $f0, $f16
    ctx->pc = 0x2ab4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x2ab4b8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2ab4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab4bc: 0x46110841  sub.s       $f1, $f1, $f17
    ctx->pc = 0x2ab4bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[17]);
    // 0x2ab4c0: 0x46121081  sub.s       $f2, $f2, $f18
    ctx->pc = 0x2ab4c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[18]);
    // 0x2ab4c4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ab4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ab4c8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2ab4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ab4cc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2ab4ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ab4d0: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x2ab4d0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ab4d4: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x2ab4d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2ab4d8: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x2ab4d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2ab4dc: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2ab4dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2ab4e0: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x2ab4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2ab4e4: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x2ab4e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2ab4e8: 0x460a1282  mul.s       $f10, $f2, $f10
    ctx->pc = 0x2ab4e8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2ab4ec: 0x46091242  mul.s       $f9, $f2, $f9
    ctx->pc = 0x2ab4ecu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2ab4f0: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x2ab4f0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x2ab4f4: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x2ab4f4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2ab4f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab4fc: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x2ab4fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x2ab500: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x2ab500u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2ab504: 0x460939c0  add.s       $f7, $f7, $f9
    ctx->pc = 0x2ab504u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x2ab508: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ab508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ab50c: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2ab50cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ab510: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x2ab510u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ab514: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ab514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ab518: 0xc0aae8e  jal         func_2ABA38
    ctx->pc = 0x2AB518u;
    SET_GPR_U32(ctx, 31, 0x2AB520u);
    ctx->pc = 0x2AB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB518u;
    // 0x2ab51c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABA38u, 0x2AB518u, 0x2AB520u)) {
        return;
    }
    ctx->pc = 0x2AB520u;
label_2ab520:
    // 0x2ab520: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ab520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ab524: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2ab524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2ab528: 0x24c6b8c0  addiu       $a2, $a2, -0x4740
    ctx->pc = 0x2ab528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949056));
    // 0x2ab52c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ab52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab530: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2ab530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ab534: 0xc09f350  jal         func_27CD40
    ctx->pc = 0x2AB534u;
    SET_GPR_U32(ctx, 31, 0x2AB53Cu);
    ctx->pc = 0x2AB538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB534u;
    // 0x2ab538: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27CD40u, 0x2AB534u, 0x2AB53Cu)) {
        return;
    }
    ctx->pc = 0x2AB53Cu;
label_2ab53c:
    // 0x2ab53c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ab53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ab540:
    // 0x2ab540: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2ab540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2ab544:
    // 0x2ab544: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2ab544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2ab548:
    // 0x2ab548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ab548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab54c:
    // 0x2ab54c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2ab54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ab550: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2ab550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ab554: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ab554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ab558: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB558u;
        // 0x2ab55c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB560u;
}
