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

// Function: sub_00290FA8
// Address: 0x290fa8 - 0x2917a8
void sub_00290FA8_0x290fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290FA8_0x290fa8");
#endif

    switch (ctx->pc) {
        case 0x291080u: goto label_291080;
        case 0x2912c0u: goto label_2912c0;
        default: break;
    }

    ctx->pc = 0x290fa8u;

    // 0x290fa8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x290fa8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290fac: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x290facu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290fb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x290fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x290fb4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x290fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fb8: 0xc5850000  lwc1        $f5, 0x0($t4)
    ctx->pc = 0x290fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x290fbc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x290fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290fc0: 0x460501c1  sub.s       $f7, $f0, $f5
    ctx->pc = 0x290fc0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x290fc4: 0xc5840004  lwc1        $f4, 0x4($t4)
    ctx->pc = 0x290fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290fc8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x290fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fcc: 0xc5830008  lwc1        $f3, 0x8($t4)
    ctx->pc = 0x290fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290fd0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x290fd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x290fd4: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x290fd4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x290fd8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x290fd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x290fdc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x290fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x290fe0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x290fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x290fe4: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x290fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290fe8: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x290fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290fec: 0x46050981  sub.s       $f6, $f1, $f5
    ctx->pc = 0x290fecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x290ff0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x290ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ff4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x290ff4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x290ff8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x290ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x290ffc: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x290ffcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x291000: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x291000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x291004: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x291004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x291008: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x291008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29100c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x29100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291010: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x291010u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x291014: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x291014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291018: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x291018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x29101c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29101cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x291020: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x291020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x291024: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x291024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x291028: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x291028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29102c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291034: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x291034u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x291038: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x291038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29103c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x29103cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x291040: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x291040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x291044: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x291044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x291048: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x291048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29104c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x29104Cu;
    {
        const bool branch_taken_0x29104c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x291050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29104Cu;
        // 0x291050: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29104c) {
            ctx->pc = 0x291088u;
            goto label_291088;
        }
    }
    ctx->pc = 0x291054u;
    // 0x291054: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x291054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291058: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x291058u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x29105c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x29105cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x291060: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x291060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x291064: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x291064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x291068: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x291068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29106c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29106cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x291070: 0x1041025  or          $v0, $t0, $a0
    ctx->pc = 0x291070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x291074: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x291074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x291078: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x291078u;
    {
        const bool branch_taken_0x291078 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291078u;
        // 0x29107c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291078) {
            ctx->pc = 0x2910C0u;
            goto label_2910c0;
        }
    }
    ctx->pc = 0x291080u;
label_291080:
    // 0x291080: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x291080u;
    {
        const bool branch_taken_0x291080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291080u;
        // 0x291084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291080) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x291088u;
label_291088:
    // 0x291088: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x29108c: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29108Cu;
    {
        const bool branch_taken_0x29108c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x291090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29108Cu;
        // 0x291090: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29108c) {
            ctx->pc = 0x2910C0u;
            goto label_2910c0;
        }
    }
    ctx->pc = 0x291094u;
    // 0x291094: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x291094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291098: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x291098u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x29109c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x29109cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2910a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2910a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2910a4: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x2910a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2910a8: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x2910a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2910ac: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2910acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2910b0: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x2910b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x2910b4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2910b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2910b8: 0x440fff1  bltz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2910B8u;
    {
        const bool branch_taken_0x2910b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2910BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910B8u;
        // 0x2910bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910b8) {
            ctx->pc = 0x291080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291080;
        }
    }
    ctx->pc = 0x2910C0u;
label_2910c0:
    // 0x2910c0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2910c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2910c4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2910c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2910c8: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2910c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2910cc: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x2910ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2910d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2910d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2910d4: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2910d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2910d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2910d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2910dc: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2910DCu;
    {
        const bool branch_taken_0x2910dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2910E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910DCu;
        // 0x2910e0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910dc) {
            ctx->pc = 0x291124u;
            goto label_291124;
        }
    }
    ctx->pc = 0x2910E4u;
    // 0x2910e4: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x2910e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910e8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2910e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2910ec: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2910ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2910f0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2910f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2910f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2910f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2910f8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2910f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2910fc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2910fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x291100: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x291100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x291104: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x291104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x291108: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x291108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29110c: 0x1041025  or          $v0, $t0, $a0
    ctx->pc = 0x29110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x291110: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x291110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x291114: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x291114u;
    {
        const bool branch_taken_0x291114 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x291118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291114u;
        // 0x291118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291114) {
            ctx->pc = 0x291164u;
            goto label_291164;
        }
    }
    ctx->pc = 0x29111Cu;
    // 0x29111c: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x29111Cu;
    {
        const bool branch_taken_0x29111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29111c) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x291124u;
label_291124:
    // 0x291124: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x291124u;
    {
        const bool branch_taken_0x291124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291124u;
        // 0x291128: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291124) {
            ctx->pc = 0x291168u;
            goto label_291168;
        }
    }
    ctx->pc = 0x29112Cu;
    // 0x29112c: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x29112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291130: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x291130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291134: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x291134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291138: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x291138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29113c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29113cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291140: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x291140u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x291144: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x291144u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x291148: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x291148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x29114c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x29114cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x291150: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x291150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x291154: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x291154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x291158: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x291158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29115c: 0x440018f  bltz        $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x29115Cu;
    {
        const bool branch_taken_0x29115c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x291160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29115Cu;
        // 0x291160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29115c) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x291164u;
label_291164:
    // 0x291164: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x291164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_291168:
    // 0x291168: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x291168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29116c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x291170: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x291170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x291174: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x291174u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x291178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29117c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x29117cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x291180: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x291180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x291184: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x291184u;
    {
        const bool branch_taken_0x291184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291184u;
        // 0x291188: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291184) {
            ctx->pc = 0x2911CCu;
            goto label_2911cc;
        }
    }
    ctx->pc = 0x29118Cu;
    // 0x29118c: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x29118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291190: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x291190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291194: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x291194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291198: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x291198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29119c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29119cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2911a0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2911a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2911a4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2911a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2911a8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2911a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2911ac: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2911acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2911b0: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x2911b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2911b4: 0x1041025  or          $v0, $t0, $a0
    ctx->pc = 0x2911b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2911b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2911b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2911bc: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2911BCu;
    {
        const bool branch_taken_0x2911bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911BCu;
        // 0x2911c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911bc) {
            ctx->pc = 0x29120Cu;
            goto label_29120c;
        }
    }
    ctx->pc = 0x2911C4u;
    // 0x2911c4: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x2911C4u;
    {
        const bool branch_taken_0x2911c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2911c4) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x2911CCu;
label_2911cc:
    // 0x2911cc: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2911CCu;
    {
        const bool branch_taken_0x2911cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2911cc) {
            ctx->pc = 0x2911D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2911CCu;
            // 0x2911d0: 0xc5670008  lwc1        $f7, 0x8($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291210u;
            goto label_291210;
        }
    }
    ctx->pc = 0x2911D4u;
    // 0x2911d4: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x2911d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2911d8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2911d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2911dc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2911dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2911e0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2911e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2911e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2911e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2911e8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2911e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2911ec: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2911ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2911f0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2911f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2911f4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2911f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2911f8: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x2911f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2911fc: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x2911fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x291200: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x291200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x291204: 0x4400165  bltz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x291204u;
    {
        const bool branch_taken_0x291204 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x291208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291204u;
        // 0x291208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291204) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x29120Cu;
label_29120c:
    // 0x29120c: 0xc5670008  lwc1        $f7, 0x8($t3)
    ctx->pc = 0x29120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_291210:
    // 0x291210: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x291210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x291214: 0xc5650000  lwc1        $f5, 0x0($t3)
    ctx->pc = 0x291214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x291218: 0xc5630004  lwc1        $f3, 0x4($t3)
    ctx->pc = 0x291218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29121c: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x29121cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x291220: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x291220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x291224: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x291224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291228: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x291228u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x29122c: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x29122cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x291230: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x291230u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x291234: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x291234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x291238: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x291238u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29123c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x29123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291240: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x291240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291244: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x291244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x291248: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x291248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29124c: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x29124cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x291250: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x291250u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x291254: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x291254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x291258: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x291258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29125c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x29125cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x291260: 0x46021902  mul.s       $f4, $f3, $f2
    ctx->pc = 0x291260u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x291264: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x291264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x291268: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x291268u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x29126c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x29126cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x291270: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x291270u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x291274: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x291274u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x291278: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x291278u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x29127c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x29127cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x291280: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x291280u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x291284: 0xe5460008  swc1        $f6, 0x8($t2)
    ctx->pc = 0x291284u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x291288: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x291288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x29128c: 0xe5440000  swc1        $f4, 0x0($t2)
    ctx->pc = 0x29128cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x291290: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x291290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x291294: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x291294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x291298: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x291298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x29129c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x29129cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2912a0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2912a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2912a4: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x2912a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2912a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2912a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2912ac: 0x0  nop
    ctx->pc = 0x2912acu;
    // NOP
    // 0x2912b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2912B0u;
    {
        const bool branch_taken_0x2912b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2912B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912B0u;
        // 0x2912b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912b0) {
            ctx->pc = 0x2912D4u;
            goto label_2912d4;
        }
    }
    ctx->pc = 0x2912B8u;
    // 0x2912b8: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x2912B8u;
    {
        const bool branch_taken_0x2912b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2912b8) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x2912C0u;
label_2912c0:
    // 0x2912c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2912c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2912c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2912c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2912c8: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x2912c8u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2912cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2912CCu;
    {
        const bool branch_taken_0x2912cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912CCu;
        // 0x2912d0: 0xc5400000  lwc1        $f0, 0x0($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912cc) {
            ctx->pc = 0x2912F0u;
            goto label_2912f0;
        }
    }
    ctx->pc = 0x2912D4u;
label_2912d4:
    // 0x2912d4: 0x46000044  c1          0x44
    ctx->pc = 0x2912d4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2912d8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2912d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2912dc: 0x0  nop
    ctx->pc = 0x2912dcu;
    // NOP
    // 0x2912e0: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
    ctx->pc = 0x2912E0u;
    {
        const bool branch_taken_0x2912e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2912E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912E0u;
        // 0x2912e4: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912e0) {
            ctx->pc = 0x2912C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2912c0;
        }
    }
    ctx->pc = 0x2912E8u;
    // 0x2912e8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2912e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912ec: 0x0  nop
    ctx->pc = 0x2912ecu;
    // NOP
label_2912f0:
    // 0x2912f0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x2912f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2912f4: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x2912f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2912f8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2912f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2912fc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2912fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x291300: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x291300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x291304: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x291304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x291308: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x291308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x29130c: 0xe5420008  swc1        $f2, 0x8($t2)
    ctx->pc = 0x29130cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x291310: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x291310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x291314: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x291314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291318: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x291318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x29131c: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x29131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x291320: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x291320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x291324: 0xc584000c  lwc1        $f4, 0xC($t4)
    ctx->pc = 0x291324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291328: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x291328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x29132c: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x29132cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x291330: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291334: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291338: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x291338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29133c: 0x0  nop
    ctx->pc = 0x29133cu;
    // NOP
    // 0x291340: 0x45010116  bc1t        . + 4 + (0x116 << 2)
    ctx->pc = 0x291340u;
    {
        const bool branch_taken_0x291340 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291340u;
        // 0x291344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291340) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x291348u;
    // 0x291348: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x291348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29134c: 0x45010113  bc1t        . + 4 + (0x113 << 2)
    ctx->pc = 0x29134Cu;
    {
        const bool branch_taken_0x29134c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29134c) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x291354u;
    // 0x291354: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x291354u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x291358: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x291358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x29135c: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x29135cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x291360: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x291360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x291364: 0x460d68c2  mul.s       $f3, $f13, $f13
    ctx->pc = 0x291364u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x291368: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x291368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29136c: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x29136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291370: 0x460003c2  mul.s       $f15, $f0, $f0
    ctx->pc = 0x291370u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x291374: 0x46030b80  add.s       $f14, $f1, $f3
    ctx->pc = 0x291374u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x291378: 0x460f7036  c.le.s      $f14, $f15
    ctx->pc = 0x291378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29137c: 0x0  nop
    ctx->pc = 0x29137cu;
    // NOP
    // 0x291380: 0x45010105  bc1t        . + 4 + (0x105 << 2)
    ctx->pc = 0x291380u;
    {
        const bool branch_taken_0x291380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291380u;
        // 0x291384: 0xe7ae0040  swc1        $f14, 0x40($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291380) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291388u;
    // 0x291388: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x291388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x29138c: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x29138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x291390: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x291390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x291394: 0xc7ab0018  lwc1        $f11, 0x18($sp)
    ctx->pc = 0x291394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x291398: 0x46094842  mul.s       $f1, $f9, $f9
    ctx->pc = 0x291398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x29139c: 0x460b5882  mul.s       $f2, $f11, $f11
    ctx->pc = 0x29139cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2913a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2913a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2913a4: 0x46020200  add.s       $f8, $f0, $f2
    ctx->pc = 0x2913a4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2913a8: 0x460f4036  c.le.s      $f8, $f15
    ctx->pc = 0x2913a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2913ac: 0x0  nop
    ctx->pc = 0x2913acu;
    // NOP
    // 0x2913b0: 0x450100f9  bc1t        . + 4 + (0xF9 << 2)
    ctx->pc = 0x2913B0u;
    {
        const bool branch_taken_0x2913b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2913B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913B0u;
        // 0x2913b4: 0xe7a80044  swc1        $f8, 0x44($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913b0) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x2913B8u;
    // 0x2913b8: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2913b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2913bc: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x2913bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2913c0: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2913c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2913c4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2913c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2913c8: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2913c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2913cc: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2913ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2913d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2913d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2913d4: 0x46020100  add.s       $f4, $f0, $f2
    ctx->pc = 0x2913d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2913d8: 0x460f2036  c.le.s      $f4, $f15
    ctx->pc = 0x2913d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2913dc: 0x0  nop
    ctx->pc = 0x2913dcu;
    // NOP
    // 0x2913e0: 0x450100ed  bc1t        . + 4 + (0xED << 2)
    ctx->pc = 0x2913E0u;
    {
        const bool branch_taken_0x2913e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2913E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913E0u;
        // 0x2913e4: 0xe7a40048  swc1        $f4, 0x48($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913e0) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x2913E8u;
    // 0x2913e8: 0x46087034  c.lt.s      $f14, $f8
    ctx->pc = 0x2913e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2913ec: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x2913ECu;
    {
        const bool branch_taken_0x2913ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2913ec) {
            ctx->pc = 0x291488u;
            goto label_291488;
        }
    }
    ctx->pc = 0x2913F4u;
    // 0x2913f4: 0x460e2034  c.lt.s      $f4, $f14
    ctx->pc = 0x2913f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2913f8: 0x0  nop
    ctx->pc = 0x2913f8u;
    // NOP
    // 0x2913fc: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2913FCu;
    {
        const bool branch_taken_0x2913fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2913fc) {
            ctx->pc = 0x291400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2913FCu;
            // 0x291400: 0x46075002  mul.s       $f0, $f10, $f7 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x291448u;
            goto label_291448;
        }
    }
    ctx->pc = 0x291404u;
    // 0x291404: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x291404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x291408: 0x460c3042  mul.s       $f1, $f6, $f12
    ctx->pc = 0x291408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x29140c: 0x460d1882  mul.s       $f2, $f3, $f13
    ctx->pc = 0x29140cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x291410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291414: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291418: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x291418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29141c: 0x0  nop
    ctx->pc = 0x29141cu;
    // NOP
    // 0x291420: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x291420u;
    {
        const bool branch_taken_0x291420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291420u;
        // 0x291424: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291420) {
            ctx->pc = 0x291528u;
            goto label_291528;
        }
    }
    ctx->pc = 0x291428u;
    // 0x291428: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x291428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x29142c: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x29142cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x291430: 0x460b1882  mul.s       $f2, $f3, $f11
    ctx->pc = 0x291430u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x291434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291438: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29143c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x29143cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291440: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x291440u;
    {
        const bool branch_taken_0x291440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291440) {
            ctx->pc = 0x291518u;
            goto label_291518;
        }
    }
    ctx->pc = 0x291448u;
label_291448:
    // 0x291448: 0x46096042  mul.s       $f1, $f12, $f9
    ctx->pc = 0x291448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x29144c: 0x460b6882  mul.s       $f2, $f13, $f11
    ctx->pc = 0x29144cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x291450: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291454: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291458: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x291458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29145c: 0x0  nop
    ctx->pc = 0x29145cu;
    // NOP
    // 0x291460: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x291460u;
    {
        const bool branch_taken_0x291460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291460u;
        // 0x291464: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291460) {
            ctx->pc = 0x291528u;
            goto label_291528;
        }
    }
    ctx->pc = 0x291468u;
    // 0x291468: 0x46055002  mul.s       $f0, $f10, $f5
    ctx->pc = 0x291468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x29146c: 0x46066042  mul.s       $f1, $f12, $f6
    ctx->pc = 0x29146cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x291470: 0x46036882  mul.s       $f2, $f13, $f3
    ctx->pc = 0x291470u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x291474: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291478: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29147c: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x29147cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291480: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x291480u;
    {
        const bool branch_taken_0x291480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291480) {
            ctx->pc = 0x291518u;
            goto label_291518;
        }
    }
    ctx->pc = 0x291488u;
label_291488:
    // 0x291488: 0x46082034  c.lt.s      $f4, $f8
    ctx->pc = 0x291488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29148c: 0x0  nop
    ctx->pc = 0x29148cu;
    // NOP
    // 0x291490: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x291490u;
    {
        const bool branch_taken_0x291490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291490) {
            ctx->pc = 0x291494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291490u;
            // 0x291494: 0x460a3802  mul.s       $f0, $f7, $f10 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914DCu;
            goto label_2914dc;
        }
    }
    ctx->pc = 0x291498u;
    // 0x291498: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x291498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x29149c: 0x460c3042  mul.s       $f1, $f6, $f12
    ctx->pc = 0x29149cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x2914a0: 0x460d1882  mul.s       $f2, $f3, $f13
    ctx->pc = 0x2914a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x2914a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2914a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2914a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2914a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2914ac: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2914acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2914b0: 0x0  nop
    ctx->pc = 0x2914b0u;
    // NOP
    // 0x2914b4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2914B4u;
    {
        const bool branch_taken_0x2914b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2914B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914B4u;
        // 0x2914b8: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914b4) {
            ctx->pc = 0x291528u;
            goto label_291528;
        }
    }
    ctx->pc = 0x2914BCu;
    // 0x2914bc: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x2914bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2914c0: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x2914c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x2914c4: 0x460b1882  mul.s       $f2, $f3, $f11
    ctx->pc = 0x2914c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x2914c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2914c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2914cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2914ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2914d0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2914d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2914d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2914D4u;
    {
        const bool branch_taken_0x2914d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2914d4) {
            ctx->pc = 0x291518u;
            goto label_291518;
        }
    }
    ctx->pc = 0x2914DCu;
label_2914dc:
    // 0x2914dc: 0x460c4842  mul.s       $f1, $f9, $f12
    ctx->pc = 0x2914dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x2914e0: 0x460d5882  mul.s       $f2, $f11, $f13
    ctx->pc = 0x2914e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x2914e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2914e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2914e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2914e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2914ec: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x2914ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2914f0: 0x0  nop
    ctx->pc = 0x2914f0u;
    // NOP
    // 0x2914f4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2914F4u;
    {
        const bool branch_taken_0x2914f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2914F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914F4u;
        // 0x2914f8: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914f4) {
            ctx->pc = 0x291528u;
            goto label_291528;
        }
    }
    ctx->pc = 0x2914FCu;
    // 0x2914fc: 0x46053802  mul.s       $f0, $f7, $f5
    ctx->pc = 0x2914fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x291500: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x291500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x291504: 0x46035882  mul.s       $f2, $f11, $f3
    ctx->pc = 0x291504u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x291508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29150c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29150cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291510: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x291510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291514: 0x0  nop
    ctx->pc = 0x291514u;
    // NOP
label_291518:
    // 0x291518: 0x450100a0  bc1t        . + 4 + (0xA0 << 2)
    ctx->pc = 0x291518u;
    {
        const bool branch_taken_0x291518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291518u;
        // 0x29151c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291518) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x291520u;
    // 0x291520: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x291520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291524: 0x0  nop
    ctx->pc = 0x291524u;
    // NOP
label_291528:
    // 0x291528: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x291528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29152c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x29152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291530: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x291530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x291534: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x291534u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x291538: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x291538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29153c: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x29153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x291540: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x291540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x291544: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x291544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x291548: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x291548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x29154c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x29154cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x291550: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x291550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x291554: 0x460a1102  mul.s       $f4, $f2, $f10
    ctx->pc = 0x291554u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x291558: 0x46090942  mul.s       $f5, $f1, $f9
    ctx->pc = 0x291558u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x29155c: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x29155cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x291560: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x291560u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x291564: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x291564u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x291568: 0x460801c2  mul.s       $f7, $f0, $f8
    ctx->pc = 0x291568u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x29156c: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x29156cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x291570: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x291570u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x291574: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x291574u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x291578: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x291578u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x29157c: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x29157cu;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x291580: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x291580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x291584: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x291584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x291588: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x291588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x29158c: 0x46025281  sub.s       $f10, $f10, $f2
    ctx->pc = 0x29158cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x291590: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x291590u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x291594: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x291594u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x291598: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x291598u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x29159c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x29159cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2915a0: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x2915a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x2915a4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2915a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2915a8: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x2915a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2915ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2915acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2915b0: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x2915b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2915b4: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x2915b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2915b8: 0x0  nop
    ctx->pc = 0x2915b8u;
    // NOP
    // 0x2915bc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2915BCu;
    {
        const bool branch_taken_0x2915bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2915C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915BCu;
        // 0x2915c0: 0xe7a80048  swc1        $f8, 0x48($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915bc) {
            ctx->pc = 0x2915F8u;
            goto label_2915f8;
        }
    }
    ctx->pc = 0x2915C4u;
    // 0x2915c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2915c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915c8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2915c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2915cc: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2915ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2915d0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2915d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2915d4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2915d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2915d8: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x2915d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2915dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2915dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2915e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2915e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2915e4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2915e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2915e8: 0x0  nop
    ctx->pc = 0x2915e8u;
    // NOP
    // 0x2915ec: 0x4501006b  bc1t        . + 4 + (0x6B << 2)
    ctx->pc = 0x2915ECu;
    {
        const bool branch_taken_0x2915ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2915F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915ECu;
        // 0x2915f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915ec) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x2915F4u;
    // 0x2915f4: 0x0  nop
    ctx->pc = 0x2915f4u;
    // NOP
label_2915f8:
    // 0x2915f8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2915f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2915fc: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x2915fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x291600: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x291600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291604: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x291604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x291608: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x291608u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x29160c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x29160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291610: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x291610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x291614: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x291614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x291618: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x291618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29161c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x29161cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x291620: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x291620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x291624: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x291624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x291628: 0x460a1102  mul.s       $f4, $f2, $f10
    ctx->pc = 0x291628u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x29162c: 0x46090942  mul.s       $f5, $f1, $f9
    ctx->pc = 0x29162cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x291630: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x291630u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x291634: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x291634u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x291638: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x291638u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x29163c: 0x460801c2  mul.s       $f7, $f0, $f8
    ctx->pc = 0x29163cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x291640: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x291640u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x291644: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x291644u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x291648: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x291648u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x29164c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x29164cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x291650: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x291650u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x291654: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x291654u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x291658: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x291658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29165c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x29165cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x291660: 0x46025281  sub.s       $f10, $f10, $f2
    ctx->pc = 0x291660u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x291664: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x291664u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x291668: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x291668u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29166c: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x29166cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x291670: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x291670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x291674: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x291674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x291678: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x291678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x29167c: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x29167cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x291680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291684: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x291684u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291688: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x291688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29168c: 0x0  nop
    ctx->pc = 0x29168cu;
    // NOP
    // 0x291690: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291690u;
    {
        const bool branch_taken_0x291690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291690u;
        // 0x291694: 0xe7a80048  swc1        $f8, 0x48($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291690) {
            ctx->pc = 0x2916C8u;
            goto label_2916c8;
        }
    }
    ctx->pc = 0x291698u;
    // 0x291698: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x291698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29169c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x29169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2916a0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2916a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2916a4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2916a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2916a8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2916a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2916ac: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x2916acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2916b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2916b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2916b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2916b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2916b8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2916b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2916bc: 0x0  nop
    ctx->pc = 0x2916bcu;
    // NOP
    // 0x2916c0: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x2916C0u;
    {
        const bool branch_taken_0x2916c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2916C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916C0u;
        // 0x2916c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916c0) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x2916C8u;
label_2916c8:
    // 0x2916c8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2916c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2916cc: 0xc7aa0020  lwc1        $f10, 0x20($sp)
    ctx->pc = 0x2916ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2916d0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2916d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2916d4: 0xc7a90024  lwc1        $f9, 0x24($sp)
    ctx->pc = 0x2916d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2916d8: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x2916d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x2916dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2916dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2916e0: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x2916e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2916e4: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x2916e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x2916e8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2916e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2916ec: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2916ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2916f0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2916f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2916f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2916f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2916f8: 0x460a1102  mul.s       $f4, $f2, $f10
    ctx->pc = 0x2916f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2916fc: 0x46090942  mul.s       $f5, $f1, $f9
    ctx->pc = 0x2916fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x291700: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x291700u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x291704: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x291704u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x291708: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x291708u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x29170c: 0x460801c2  mul.s       $f7, $f0, $f8
    ctx->pc = 0x29170cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x291710: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x291710u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x291714: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x291714u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x291718: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x291718u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x29171c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x29171cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x291720: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x291720u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x291724: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x291724u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x291728: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x291728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29172c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x29172cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x291730: 0x46025281  sub.s       $f10, $f10, $f2
    ctx->pc = 0x291730u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x291734: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x291734u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x291738: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x291738u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29173c: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x29173cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x291740: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x291740u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x291744: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x291744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x291748: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x291748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x29174c: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x29174cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x291750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291754: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x291754u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291758: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x291758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29175c: 0x0  nop
    ctx->pc = 0x29175cu;
    // NOP
    // 0x291760: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x291760u;
    {
        const bool branch_taken_0x291760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291760u;
        // 0x291764: 0xe7a80048  swc1        $f8, 0x48($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291760) {
            ctx->pc = 0x291798u;
            goto label_291798;
        }
    }
    ctx->pc = 0x291768u;
    // 0x291768: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x291768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29176c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x29176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291770: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x291770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x291774: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x291774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291778: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x291778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x29177c: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x29177cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x291780: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x291780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291784: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291788: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x291788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29178c: 0x0  nop
    ctx->pc = 0x29178cu;
    // NOP
    // 0x291790: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x291790u;
    {
        const bool branch_taken_0x291790 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291790u;
        // 0x291794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291790) {
            ctx->pc = 0x29179Cu;
            goto label_29179c;
        }
    }
    ctx->pc = 0x291798u;
label_291798:
    // 0x291798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29179c:
    // 0x29179c: 0x3e00008  jr          $ra
    ctx->pc = 0x29179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2917A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29179Cu;
        // 0x2917a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2917A4u;
    // 0x2917a4: 0x0  nop
    ctx->pc = 0x2917a4u;
    // NOP
    ctx->pc = 0x2917a8u;
}
