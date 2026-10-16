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

// Function: sub_0010C3A0
// Address: 0x10c3a0 - 0x10c500
void sub_0010C3A0_0x10c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C3A0_0x10c3a0");
#endif

    switch (ctx->pc) {
        case 0x10c3f0u: goto label_10c3f0;
        case 0x10c464u: goto label_10c464;
        case 0x10c488u: goto label_10c488;
        case 0x10c490u: goto label_10c490;
        default: break;
    }

    ctx->pc = 0x10c3a0u;

    // 0x10c3a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10c3a4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x10c3a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x10c3a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x10c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x10c3ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x10c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x10c3b0: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x10c3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c3b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10c3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x10c3b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10c3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x10c3c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10c3c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3c4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x10c3c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10c3c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x10c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x10c3d0: 0x24940044  addiu       $s4, $a0, 0x44
    ctx->pc = 0x10c3d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x10c3d4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x10c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x10c3d8: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x10c3d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x10c3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c3e0: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x10c3e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x10c3e4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x10c3e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x10c3e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c3ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10c3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_10c3f0:
    // 0x10c3f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c3f4: 0x54530032  bnel        $v0, $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x10C3F4u;
    {
        const bool branch_taken_0x10c3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x10c3f4) {
            ctx->pc = 0x10C3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C3F4u;
            // 0x10c3f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C4C0u;
            goto label_10c4c0;
        }
    }
    ctx->pc = 0x10C3FCu;
    // 0x10c3fc: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x10c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x10c400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c404: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x10C404u;
    {
        const bool branch_taken_0x10c404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c404) {
            ctx->pc = 0x10C408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C404u;
            // 0x10c408: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C4C0u;
            goto label_10c4c0;
        }
    }
    ctx->pc = 0x10C40Cu;
    // 0x10c40c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c410: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10C410u;
    {
        const bool branch_taken_0x10c410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C410u;
        // 0x10c414: 0xc6c182f8  lwc1        $f1, -0x7D08($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294935288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c410) {
            ctx->pc = 0x10C4BCu;
            goto label_10c4bc;
        }
    }
    ctx->pc = 0x10C418u;
    // 0x10c418: 0x8ea282f4  lw          $v0, -0x7D0C($s5)
    ctx->pc = 0x10c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935284)));
    // 0x10c41c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x10C41Cu;
    {
        const bool branch_taken_0x10c41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c41c) {
            ctx->pc = 0x10C420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C41Cu;
            // 0x10c420: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C4C0u;
            goto label_10c4c0;
        }
    }
    ctx->pc = 0x10C424u;
    // 0x10c424: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10c424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c428: 0x0  nop
    ctx->pc = 0x10c428u;
    // NOP
    // 0x10c42c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x10c42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c430: 0x0  nop
    ctx->pc = 0x10c430u;
    // NOP
    // 0x10c434: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x10C434u;
    {
        const bool branch_taken_0x10c434 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c434) {
            ctx->pc = 0x10C45Cu;
            goto label_10c45c;
        }
    }
    ctx->pc = 0x10C43Cu;
    // 0x10c43c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x10c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c440: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x10c440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c444: 0x0  nop
    ctx->pc = 0x10c444u;
    // NOP
    // 0x10c448: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x10C448u;
    {
        const bool branch_taken_0x10c448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c448) {
            ctx->pc = 0x10C44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C448u;
            // 0x10c44c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C4C0u;
            goto label_10c4c0;
        }
    }
    ctx->pc = 0x10C450u;
    // 0x10c450: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x10c450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10c454: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10C454u;
    {
        const bool branch_taken_0x10c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C454u;
        // 0x10c458: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c454) {
            ctx->pc = 0x10C4BCu;
            goto label_10c4bc;
        }
    }
    ctx->pc = 0x10C45Cu;
label_10c45c:
    // 0x10c45c: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10C45Cu;
    SET_GPR_U32(ctx, 31, 0x10C464u);
    ctx->pc = 0x10C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C45Cu;
    // 0x10c460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10C45Cu, 0x10C464u)) {
        return;
    }
    ctx->pc = 0x10C464u;
label_10c464:
    // 0x10c464: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c468: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10c468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10c46c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c470: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10c474: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C474u;
    {
        const bool branch_taken_0x10c474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C474u;
        // 0x10c478: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c474) {
            ctx->pc = 0x10C488u;
            goto label_10c488;
        }
    }
    ctx->pc = 0x10C47Cu;
    // 0x10c47c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c480: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10C480u;
    SET_GPR_U32(ctx, 31, 0x10C488u);
    ctx->pc = 0x10C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C480u;
    // 0x10c484: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10C480u, 0x10C488u)) {
        return;
    }
    ctx->pc = 0x10C488u;
label_10c488:
    // 0x10c488: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10C488u;
    SET_GPR_U32(ctx, 31, 0x10C490u);
    ctx->pc = 0x10C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C488u;
    // 0x10c48c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10C488u, 0x10C490u)) {
        return;
    }
    ctx->pc = 0x10C490u;
label_10c490:
    // 0x10c490: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10c490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10c494: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10c494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10c498: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10c498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10c49c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10c4a0: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x10c4a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10c4a4: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x10c4a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10c4a8: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x10c4a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10c4ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10c4b0: 0xe615001c  swc1        $f21, 0x1C($s0)
    ctx->pc = 0x10c4b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10c4b4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x10c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x10c4b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_10c4bc:
    // 0x10c4bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10c4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10c4c0:
    // 0x10c4c0: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x10c4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x10c4c4: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x10c4c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10c4c8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x10C4C8u;
    {
        const bool branch_taken_0x10c4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4C8u;
        // 0x10c4cc: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4c8) {
            ctx->pc = 0x10C3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c3f0;
        }
    }
    ctx->pc = 0x10C4D0u;
    // 0x10c4d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x10c4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c4d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10c4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c4d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x10c4d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c4dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10c4dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c4e0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10c4e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c4e4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x10c4e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c4e8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x10c4e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c4f0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x10c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10c4f4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x10c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4F8u;
        // 0x10c4fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C500u;
}
