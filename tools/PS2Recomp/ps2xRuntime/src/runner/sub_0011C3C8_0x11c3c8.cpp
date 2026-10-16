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

// Function: sub_0011C3C8
// Address: 0x11c3c8 - 0x11c628
void sub_0011C3C8_0x11c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C3C8_0x11c3c8");
#endif

    switch (ctx->pc) {
        case 0x11c3e8u: goto label_11c3e8;
        case 0x11c3fcu: goto label_11c3fc;
        case 0x11c418u: goto label_11c418;
        case 0x11c47cu: goto label_11c47c;
        case 0x11c4fcu: goto label_11c4fc;
        case 0x11c518u: goto label_11c518;
        case 0x11c53cu: goto label_11c53c;
        case 0x11c558u: goto label_11c558;
        case 0x11c600u: goto label_11c600;
        default: break;
    }

    ctx->pc = 0x11c3c8u;

    // 0x11c3c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c3cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11c3d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11c3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11c3dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c3e0: 0xc04459c  jal         func_111670
    ctx->pc = 0x11C3E0u;
    SET_GPR_U32(ctx, 31, 0x11C3E8u);
    ctx->pc = 0x11C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3E0u;
    // 0x11c3e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x11C3E0u, 0x11C3E8u)) {
        return;
    }
    ctx->pc = 0x11C3E8u;
label_11c3e8:
    // 0x11c3e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11c3ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3f0: 0x8c464578  lw          $a2, 0x4578($v0)
    ctx->pc = 0x11c3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4578u));
    // 0x11c3f4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x11C3F4u;
    SET_GPR_U32(ctx, 31, 0x11C3FCu);
    ctx->pc = 0x11C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3F4u;
    // 0x11c3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11C3F4u, 0x11C3FCu)) {
        return;
    }
    ctx->pc = 0x11C3FCu;
label_11c3fc:
    // 0x11c3fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c404: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x11C404u;
    {
        const bool branch_taken_0x11c404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C404u;
        // 0x11c408: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c404) {
            ctx->pc = 0x11C528u;
            goto label_11c528;
        }
    }
    ctx->pc = 0x11C40Cu;
    // 0x11c40c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c410: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11c410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11c414: 0x0  nop
    ctx->pc = 0x11c414u;
    // NOP
label_11c418:
    // 0x11c418: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x11c418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x11c41c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x11C41Cu;
    {
        const bool branch_taken_0x11c41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C41Cu;
        // 0x11c420: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c41c) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C424u;
    // 0x11c424: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11c424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11c428: 0x2442b2b0  addiu       $v0, $v0, -0x4D50
    ctx->pc = 0x11c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947504));
    // 0x11c42c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c430: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11c430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c434: 0x800008  jr          $a0
    ctx->pc = 0x11C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C43Cu: goto label_11c43c;
            case 0x11C450u: goto label_11c450;
            case 0x11C464u: goto label_11c464;
            case 0x11C484u: goto label_11c484;
            case 0x11C494u: goto label_11c494;
            case 0x11C4A4u: goto label_11c4a4;
            case 0x11C4E8u: goto label_11c4e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C434u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11C43Cu;
label_11c43c:
    // 0x11c43c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c440: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11c440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11c444: 0x24c6b2a0  addiu       $a2, $a2, -0x4D60
    ctx->pc = 0x11c444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947488));
    // 0x11c448: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11C448u;
    {
        const bool branch_taken_0x11c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C448u;
        // 0x11c44c: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c448) {
            ctx->pc = 0x11C474u;
            goto label_11c474;
        }
    }
    ctx->pc = 0x11C450u;
label_11c450:
    // 0x11c450: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11c450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c454: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11c454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11c458: 0x24c6b2a0  addiu       $a2, $a2, -0x4D60
    ctx->pc = 0x11c458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947488));
    // 0x11c45c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11C45Cu;
    {
        const bool branch_taken_0x11c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C45Cu;
        // 0x11c460: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c45c) {
            ctx->pc = 0x11C474u;
            goto label_11c474;
        }
    }
    ctx->pc = 0x11C464u;
label_11c464:
    // 0x11c464: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c468: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11c468u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11c46c: 0x24c6b2a0  addiu       $a2, $a2, -0x4D60
    ctx->pc = 0x11c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947488));
    // 0x11c470: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x11c470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_11c474:
    // 0x11c474: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x11C474u;
    SET_GPR_U32(ctx, 31, 0x11C47Cu);
    ctx->pc = 0x11C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C474u;
    // 0x11c478: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x11C474u, 0x11C47Cu)) {
        return;
    }
    ctx->pc = 0x11C47Cu;
label_11c47c:
    // 0x11c47c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11C47Cu;
    {
        const bool branch_taken_0x11c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C47Cu;
        // 0x11c480: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c47c) {
            ctx->pc = 0x11C500u;
            goto label_11c500;
        }
    }
    ctx->pc = 0x11C484u;
label_11c484:
    // 0x11c484: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c488: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c48c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11C48Cu;
    {
        const bool branch_taken_0x11c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C48Cu;
        // 0x11c490: 0xe60000f0  swc1        $f0, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c48c) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C494u;
label_11c494:
    // 0x11c494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c498: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c49c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11C49Cu;
    {
        const bool branch_taken_0x11c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C49Cu;
        // 0x11c4a0: 0xe60000f4  swc1        $f0, 0xF4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c49c) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C4A4u;
label_11c4a4:
    // 0x11c4a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c4a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c4ac: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x11c4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x11c4b0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11c4b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11c4b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11c4b8: 0x2443b3b8  addiu       $v1, $v0, -0x4C48
    ctx->pc = 0x11c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947768));
    // 0x11c4bc: 0xc441b3b8  lwc1        $f1, -0x4C48($v0)
    ctx->pc = 0x11c4bcu;
    { uint32_t bits = FAST_READ32(0x68B3B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c4c0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x11c4c0u;
    { uint32_t bits = FAST_READ32(0x68B3C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11c4c4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x11c4c4u;
    { uint32_t bits = FAST_READ32(0x68B3BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11c4c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11c4c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11c4cc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11c4ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11c4d0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x11c4d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11c4d4: 0xe6010104  swc1        $f1, 0x104($s0)
    ctx->pc = 0x11c4d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x11c4d8: 0xe602010c  swc1        $f2, 0x10C($s0)
    ctx->pc = 0x11c4d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x11c4dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11C4DCu;
    {
        const bool branch_taken_0x11c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4DCu;
        // 0x11c4e0: 0xe6030108  swc1        $f3, 0x108($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4dc) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C4E4u;
    // 0x11c4e4: 0x0  nop
    ctx->pc = 0x11c4e4u;
    // NOP
label_11c4e8:
    // 0x11c4e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c4ec: 0x260400e8  addiu       $a0, $s0, 0xE8
    ctx->pc = 0x11c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x11c4f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4f4: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x11C4F4u;
    SET_GPR_U32(ctx, 31, 0x11C4FCu);
    ctx->pc = 0x11C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4F4u;
    // 0x11c4f8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x11C4F4u, 0x11C4FCu)) {
        return;
    }
    ctx->pc = 0x11C4FCu;
label_11c4fc:
    // 0x11c4fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11c500:
    // 0x11c500: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c50c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c510: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11C510u;
    SET_GPR_U32(ctx, 31, 0x11C518u);
    ctx->pc = 0x11C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C510u;
    // 0x11c514: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11C510u, 0x11C518u)) {
        return;
    }
    ctx->pc = 0x11C518u;
label_11c518:
    // 0x11c518: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c51c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c520: 0x5460ffbd  bnel        $v1, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x11C520u;
    {
        const bool branch_taken_0x11c520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c520) {
            ctx->pc = 0x11C524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C520u;
            // 0x11c524: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c418;
        }
    }
    ctx->pc = 0x11C528u;
label_11c528:
    // 0x11c528: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11c528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x11c52c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c530: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x11c530u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x11c534: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x11C534u;
    SET_GPR_U32(ctx, 31, 0x11C53Cu);
    ctx->pc = 0x11C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C534u;
    // 0x11c538: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11C534u, 0x11C53Cu)) {
        return;
    }
    ctx->pc = 0x11C53Cu;
label_11c53c:
    // 0x11c53c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c544: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x11C544u;
    {
        const bool branch_taken_0x11c544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C544u;
        // 0x11c548: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c544) {
            ctx->pc = 0x11C610u;
            goto label_11c610;
        }
    }
    ctx->pc = 0x11C54Cu;
    // 0x11c54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c550: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11c554: 0x0  nop
    ctx->pc = 0x11c554u;
    // NOP
label_11c558:
    // 0x11c558: 0x14710023  bne         $v1, $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x11C558u;
    {
        const bool branch_taken_0x11c558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x11C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C558u;
        // 0x11c55c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c558) {
            ctx->pc = 0x11C5E8u;
            goto label_11c5e8;
        }
    }
    ctx->pc = 0x11C560u;
    // 0x11c560: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x11c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c564: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x11c564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11c568: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x11c568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11c56c: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x11c56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11c570: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x11c570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11c574: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x11c574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11c578: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x11c578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11c57c: 0x6846002f  ldl         $a2, 0x2F($v0)
    ctx->pc = 0x11c57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11c580: 0x6c460028  ldr         $a2, 0x28($v0)
    ctx->pc = 0x11c580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11c584: 0xb2030097  sdl         $v1, 0x97($s0)
    ctx->pc = 0x11c584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c588: 0xb6030090  sdr         $v1, 0x90($s0)
    ctx->pc = 0x11c588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c58c: 0xb204009f  sdl         $a0, 0x9F($s0)
    ctx->pc = 0x11c58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c590: 0xb6040098  sdr         $a0, 0x98($s0)
    ctx->pc = 0x11c590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c594: 0xb20500a7  sdl         $a1, 0xA7($s0)
    ctx->pc = 0x11c594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c598: 0xb60500a0  sdr         $a1, 0xA0($s0)
    ctx->pc = 0x11c598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c59c: 0xb20600af  sdl         $a2, 0xAF($s0)
    ctx->pc = 0x11c59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5a0: 0xb60600a8  sdr         $a2, 0xA8($s0)
    ctx->pc = 0x11c5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5a4: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x11c5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11c5a8: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x11c5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11c5ac: 0x6844003f  ldl         $a0, 0x3F($v0)
    ctx->pc = 0x11c5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11c5b0: 0x6c440038  ldr         $a0, 0x38($v0)
    ctx->pc = 0x11c5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11c5b4: 0x68450047  ldl         $a1, 0x47($v0)
    ctx->pc = 0x11c5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11c5b8: 0x6c450040  ldr         $a1, 0x40($v0)
    ctx->pc = 0x11c5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11c5bc: 0x6846004f  ldl         $a2, 0x4F($v0)
    ctx->pc = 0x11c5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11c5c0: 0x6c460048  ldr         $a2, 0x48($v0)
    ctx->pc = 0x11c5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11c5c4: 0xb20300b7  sdl         $v1, 0xB7($s0)
    ctx->pc = 0x11c5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5c8: 0xb60300b0  sdr         $v1, 0xB0($s0)
    ctx->pc = 0x11c5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5cc: 0xb20400bf  sdl         $a0, 0xBF($s0)
    ctx->pc = 0x11c5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5d0: 0xb60400b8  sdr         $a0, 0xB8($s0)
    ctx->pc = 0x11c5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5d4: 0xb20500c7  sdl         $a1, 0xC7($s0)
    ctx->pc = 0x11c5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5d8: 0xb60500c0  sdr         $a1, 0xC0($s0)
    ctx->pc = 0x11c5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5dc: 0xb20600cf  sdl         $a2, 0xCF($s0)
    ctx->pc = 0x11c5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5e0: 0xb60600c8  sdr         $a2, 0xC8($s0)
    ctx->pc = 0x11c5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c5e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11c5e8:
    // 0x11c5e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c5ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c5f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c5f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c5f8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11C5F8u;
    SET_GPR_U32(ctx, 31, 0x11C600u);
    ctx->pc = 0x11C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5F8u;
    // 0x11c5fc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11C5F8u, 0x11C600u)) {
        return;
    }
    ctx->pc = 0x11C600u;
label_11c600:
    // 0x11c600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c608: 0x5460ffd3  bnel        $v1, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x11C608u;
    {
        const bool branch_taken_0x11c608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c608) {
            ctx->pc = 0x11C60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C608u;
            // 0x11c60c: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c558;
        }
    }
    ctx->pc = 0x11C610u;
label_11c610:
    // 0x11c610: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11c610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c614: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11c614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c618: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11c618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c61c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c620: 0x3e00008  jr          $ra
    ctx->pc = 0x11C620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C620u;
        // 0x11c624: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C628u;
}
