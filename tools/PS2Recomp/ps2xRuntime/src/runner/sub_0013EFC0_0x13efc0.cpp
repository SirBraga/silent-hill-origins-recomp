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

// Function: sub_0013EFC0
// Address: 0x13efc0 - 0x13f168
void sub_0013EFC0_0x13efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EFC0_0x13efc0");
#endif

    switch (ctx->pc) {
        case 0x13efe4u: goto label_13efe4;
        case 0x13eff8u: goto label_13eff8;
        case 0x13f018u: goto label_13f018;
        case 0x13f044u: goto label_13f044;
        case 0x13f0e0u: goto label_13f0e0;
        case 0x13f0ecu: goto label_13f0ec;
        case 0x13f0f8u: goto label_13f0f8;
        case 0x13f110u: goto label_13f110;
        case 0x13f120u: goto label_13f120;
        case 0x13f13cu: goto label_13f13c;
        default: break;
    }

    ctx->pc = 0x13efc0u;

    // 0x13efc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13efc4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x13efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13efc8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x13efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x13efcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13efccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13efd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13efd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13efd4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x13efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x13efd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13efdc: 0xc040670  jal         func_1019C0
    ctx->pc = 0x13EFDCu;
    SET_GPR_U32(ctx, 31, 0x13EFE4u);
    ctx->pc = 0x13EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFDCu;
    // 0x13efe0: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019C0u, 0x13EFDCu, 0x13EFE4u)) {
        return;
    }
    ctx->pc = 0x13EFE4u;
label_13efe4:
    // 0x13efe4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x13efe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13efe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13efec: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x13efecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x13eff0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13EFF0u;
    SET_GPR_U32(ctx, 31, 0x13EFF8u);
    ctx->pc = 0x13EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFF0u;
    // 0x13eff4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13EFF0u, 0x13EFF8u)) {
        return;
    }
    ctx->pc = 0x13EFF8u;
label_13eff8:
    // 0x13eff8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13effc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f000: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x13F000u;
    {
        const bool branch_taken_0x13f000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F000u;
        // 0x13f004: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f000) {
            ctx->pc = 0x13F150u;
            goto label_13f150;
        }
    }
    ctx->pc = 0x13F008u;
    // 0x13f008: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13f00c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13f00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13f010: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f018:
    // 0x13f018: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13f01c: 0x14640041  bne         $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x13F01Cu;
    {
        const bool branch_taken_0x13f01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F01Cu;
        // 0x13f020: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f01c) {
            ctx->pc = 0x13F124u;
            goto label_13f124;
        }
    }
    ctx->pc = 0x13F024u;
    // 0x13f024: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x13f028: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x13F028u;
    {
        const bool branch_taken_0x13f028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F028u;
        // 0x13f02c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f028) {
            ctx->pc = 0x13F124u;
            goto label_13f124;
        }
    }
    ctx->pc = 0x13F030u;
    // 0x13f030: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x13f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x13f034: 0x8c508bc4  lw          $s0, -0x743C($v0)
    ctx->pc = 0x13f034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    // 0x13f038: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13f038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13f03c: 0xc07794c  jal         func_1DE530
    ctx->pc = 0x13F03Cu;
    SET_GPR_U32(ctx, 31, 0x13F044u);
    ctx->pc = 0x13F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F03Cu;
    // 0x13f040: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE530u, 0x13F03Cu, 0x13F044u)) {
        return;
    }
    ctx->pc = 0x13F044u;
label_13f044:
    // 0x13f044: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x13f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f048: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x13f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13f04c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x13f04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13f050: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x13f050u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x13f054: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x13f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f058: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f05c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x13f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13f060: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x13f060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x13f064: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x13f064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x13f068: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x13f068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x13f06c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13f06cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x13f070: 0xe6220384  swc1        $f2, 0x384($s1)
    ctx->pc = 0x13f070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
    // 0x13f074: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13f074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x13f078: 0xe6210388  swc1        $f1, 0x388($s1)
    ctx->pc = 0x13f078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 904), bits); }
    // 0x13f07c: 0xe620038c  swc1        $f0, 0x38C($s1)
    ctx->pc = 0x13f07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 908), bits); }
    // 0x13f080: 0x6a22038b  ldl         $v0, 0x38B($s1)
    ctx->pc = 0x13f080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13f084: 0x6e220384  ldr         $v0, 0x384($s1)
    ctx->pc = 0x13f084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13f088: 0x8e23038c  lw          $v1, 0x38C($s1)
    ctx->pc = 0x13f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
    // 0x13f08c: 0xb2220397  sdl         $v0, 0x397($s1)
    ctx->pc = 0x13f08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f090: 0xb6220390  sdr         $v0, 0x390($s1)
    ctx->pc = 0x13f090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f094: 0xae230398  sw          $v1, 0x398($s1)
    ctx->pc = 0x13f094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 3));
    // 0x13f098: 0x8e220330  lw          $v0, 0x330($s1)
    ctx->pc = 0x13f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x13f09c: 0xe6240394  swc1        $f4, 0x394($s1)
    ctx->pc = 0x13f09cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
    // 0x13f0a0: 0xae20039c  sw          $zero, 0x39C($s1)
    ctx->pc = 0x13f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 0));
    // 0x13f0a4: 0xae2003a0  sw          $zero, 0x3A0($s1)
    ctx->pc = 0x13f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
    // 0x13f0a8: 0xae2003a4  sw          $zero, 0x3A4($s1)
    ctx->pc = 0x13f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 0));
    // 0x13f0ac: 0x6a26038b  ldl         $a2, 0x38B($s1)
    ctx->pc = 0x13f0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13f0b0: 0x6e260384  ldr         $a2, 0x384($s1)
    ctx->pc = 0x13f0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13f0b4: 0x8e23038c  lw          $v1, 0x38C($s1)
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
    // 0x13f0b8: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x13f0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f0bc: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x13f0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13f0c0: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x13f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x13f0c4: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f0c8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13F0C8u;
    {
        const bool branch_taken_0x13f0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0C8u;
        // 0x13f0cc: 0x8cb20024  lw          $s2, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0c8) {
            ctx->pc = 0x13F120u;
            goto label_13f120;
        }
    }
    ctx->pc = 0x13F0D0u;
    // 0x13f0d0: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F0D0u;
    {
        const bool branch_taken_0x13f0d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D0u;
        // 0x13f0d4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0d0) {
            ctx->pc = 0x13F124u;
            goto label_13f124;
        }
    }
    ctx->pc = 0x13F0D8u;
    // 0x13f0d8: 0xc066512  jal         func_199448
    ctx->pc = 0x13F0D8u;
    SET_GPR_U32(ctx, 31, 0x13F0E0u);
    ctx->pc = 0x13F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0D8u;
    // 0x13f0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199448u, 0x13F0D8u, 0x13F0E0u)) {
        return;
    }
    ctx->pc = 0x13F0E0u;
label_13f0e0:
    // 0x13f0e0: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f0e4: 0xc06640a  jal         func_199028
    ctx->pc = 0x13F0E4u;
    SET_GPR_U32(ctx, 31, 0x13F0ECu);
    ctx->pc = 0x13F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0E4u;
    // 0x13f0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x13F0E4u, 0x13F0ECu)) {
        return;
    }
    ctx->pc = 0x13F0ECu;
label_13f0ec:
    // 0x13f0ec: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x13f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x13f0f0: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x13F0F0u;
    SET_GPR_U32(ctx, 31, 0x13F0F8u);
    ctx->pc = 0x13F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0F0u;
    // 0x13f0f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x13F0F0u, 0x13F0F8u)) {
        return;
    }
    ctx->pc = 0x13F0F8u;
label_13f0f8:
    // 0x13f0f8: 0x8e26032c  lw          $a2, 0x32C($s1)
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f0fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13f0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f104: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13f104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f108: 0xc06656c  jal         func_1995B0
    ctx->pc = 0x13F108u;
    SET_GPR_U32(ctx, 31, 0x13F110u);
    ctx->pc = 0x13F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F108u;
    // 0x13f10c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1995B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1995B0u, 0x13F108u, 0x13F110u)) {
        return;
    }
    ctx->pc = 0x13F110u;
label_13f110:
    // 0x13f110: 0x8e25032c  lw          $a1, 0x32C($s1)
    ctx->pc = 0x13f110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x13f114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f118: 0xc066318  jal         func_198C60
    ctx->pc = 0x13F118u;
    SET_GPR_U32(ctx, 31, 0x13F120u);
    ctx->pc = 0x13F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F118u;
    // 0x13f11c: 0x26260044  addiu       $a2, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x198C60u, 0x13F118u, 0x13F120u)) {
        return;
    }
    ctx->pc = 0x13F120u;
label_13f120:
    // 0x13f120: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13f124:
    // 0x13f124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f12c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f130: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f134: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13F134u;
    SET_GPR_U32(ctx, 31, 0x13F13Cu);
    ctx->pc = 0x13F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F134u;
    // 0x13f138: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13F134u, 0x13F13Cu)) {
        return;
    }
    ctx->pc = 0x13F13Cu;
label_13f13c:
    // 0x13f13c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f144: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x13F144u;
    {
        const bool branch_taken_0x13f144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F144u;
        // 0x13f148: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f144) {
            ctx->pc = 0x13F018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f018;
        }
    }
    ctx->pc = 0x13F14Cu;
    // 0x13f14c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x13f14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13f150:
    // 0x13f150: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13f150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13f154: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13f154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f15c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x13f15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f160: 0x3e00008  jr          $ra
    ctx->pc = 0x13F160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F160u;
        // 0x13f164: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F168u;
}
