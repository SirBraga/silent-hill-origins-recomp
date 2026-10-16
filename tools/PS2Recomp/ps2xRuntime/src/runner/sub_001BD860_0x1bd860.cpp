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

// Function: sub_001BD860
// Address: 0x1bd860 - 0x1bda20
void sub_001BD860_0x1bd860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD860_0x1bd860");
#endif

    switch (ctx->pc) {
        case 0x1bd8c4u: goto label_1bd8c4;
        case 0x1bd8f0u: goto label_1bd8f0;
        case 0x1bd958u: goto label_1bd958;
        case 0x1bd9b8u: goto label_1bd9b8;
        case 0x1bd9c0u: goto label_1bd9c0;
        default: break;
    }

    ctx->pc = 0x1bd860u;

    // 0x1bd860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bd860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bd864: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1bd868: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bd868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bd86c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd870: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1bd870u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1bd874: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1bd874u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1bd878: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bd878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bd87c: 0x46157381  sub.s       $f14, $f14, $f21
    ctx->pc = 0x1bd87cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[21]);
    // 0x1bd880: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1bd880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1bd884: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bd884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bd888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd88c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd890: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1bd890u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1bd894: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x1bd894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd898: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bd898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bd89c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD89Cu;
    {
        const bool branch_taken_0x1bd89c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD89Cu;
        // 0x1bd8a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd89c) {
            ctx->pc = 0x1BD8B0u;
            goto label_1bd8b0;
        }
    }
    ctx->pc = 0x1BD8A4u;
    // 0x1bd8a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1bd8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1bd8a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BD8A8u;
    {
        const bool branch_taken_0x1bd8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8A8u;
        // 0x1bd8ac: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8a8) {
            ctx->pc = 0x1BD8D4u;
            goto label_1bd8d4;
        }
    }
    ctx->pc = 0x1BD8B0u;
label_1bd8b0:
    // 0x1bd8b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bd8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bd8b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bd8b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd8bc: 0xc09b0b2  jal         func_26C2C8
    ctx->pc = 0x1BD8BCu;
    SET_GPR_U32(ctx, 31, 0x1BD8C4u);
    ctx->pc = 0x1BD8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8BCu;
    // 0x1bd8c0: 0x460c7302  mul.s       $f12, $f14, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C2C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C2C8u, 0x1BD8BCu, 0x1BD8C4u)) {
        return;
    }
    ctx->pc = 0x1BD8C4u;
label_1bd8c4:
    // 0x1bd8c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd8c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bd8c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bd8cc: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x1bd8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1bd8d0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1bd8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1bd8d4:
    // 0x1bd8d4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1bd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bd8d8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BD8D8u;
    {
        const bool branch_taken_0x1bd8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8D8u;
        // 0x1bd8dc: 0x2612001c  addiu       $s2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8d8) {
            ctx->pc = 0x1BD96Cu;
            goto label_1bd96c;
        }
    }
    ctx->pc = 0x1BD8E0u;
    // 0x1bd8e0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bd8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bd8e4: 0x52600022  beql        $s3, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BD8E4u;
    {
        const bool branch_taken_0x1bd8e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8e4) {
            ctx->pc = 0x1BD8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD8E4u;
            // 0x1bd8e8: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD970u;
            goto label_1bd970;
        }
    }
    ctx->pc = 0x1BD8ECu;
    // 0x1bd8ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bd8f0:
    // 0x1bd8f0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x1bd8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd8f4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1bd8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd8f8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1bd8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1bd8fc: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1bd8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd900: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1bd900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd904: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bd904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd908: 0x0  nop
    ctx->pc = 0x1bd908u;
    // NOP
    // 0x1bd90c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD90Cu;
    {
        const bool branch_taken_0x1bd90c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD90Cu;
        // 0x1bd910: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd90c) {
            ctx->pc = 0x1BD964u;
            goto label_1bd964;
        }
    }
    ctx->pc = 0x1BD914u;
    // 0x1bd914: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD914u;
    {
        const bool branch_taken_0x1bd914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd914) {
            ctx->pc = 0x1BD950u;
            goto label_1bd950;
        }
    }
    ctx->pc = 0x1BD91Cu;
    // 0x1bd91c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd920: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD920u;
    {
        const bool branch_taken_0x1bd920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd920) {
            ctx->pc = 0x1BD924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD920u;
            // 0x1bd924: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD92Cu;
            goto label_1bd92c;
        }
    }
    ctx->pc = 0x1BD928u;
    // 0x1bd928: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1bd928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_1bd92c:
    // 0x1bd92c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd930: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD930u;
    {
        const bool branch_taken_0x1bd930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD930u;
        // 0x1bd934: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd930) {
            ctx->pc = 0x1BD940u;
            goto label_1bd940;
        }
    }
    ctx->pc = 0x1BD938u;
    // 0x1bd938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD938u;
    {
        const bool branch_taken_0x1bd938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD938u;
        // 0x1bd93c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd938) {
            ctx->pc = 0x1BD944u;
            goto label_1bd944;
        }
    }
    ctx->pc = 0x1BD940u;
label_1bd940:
    // 0x1bd940: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1bd940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1bd944:
    // 0x1bd944: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bd944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd948: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd94c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bd94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1bd950:
    // 0x1bd950: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BD950u;
    SET_GPR_U32(ctx, 31, 0x1BD958u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BD950u, 0x1BD958u)) {
        return;
    }
    ctx->pc = 0x1BD958u;
label_1bd958:
    // 0x1bd958: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bd958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bd95c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd960: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1bd960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1bd964:
    // 0x1bd964: 0x1620ffe2  bnez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1BD964u;
    {
        const bool branch_taken_0x1bd964 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD964u;
        // 0x1bd968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd964) {
            ctx->pc = 0x1BD8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd8f0;
        }
    }
    ctx->pc = 0x1BD96Cu;
label_1bd96c:
    // 0x1bd96c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1bd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1bd970:
    // 0x1bd970: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1BD970u;
    {
        const bool branch_taken_0x1bd970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd970) {
            ctx->pc = 0x1BD974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD970u;
            // 0x1bd974: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9A0u;
            goto label_1bd9a0;
        }
    }
    ctx->pc = 0x1BD978u;
    // 0x1bd978: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1bd978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd97c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1bd97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd980: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1bd980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1bd984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bd984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd988: 0x0  nop
    ctx->pc = 0x1bd988u;
    // NOP
    // 0x1bd98c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD98Cu;
    {
        const bool branch_taken_0x1bd98c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD98Cu;
        // 0x1bd990: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd98c) {
            ctx->pc = 0x1BD99Cu;
            goto label_1bd99c;
        }
    }
    ctx->pc = 0x1BD994u;
    // 0x1bd994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd998: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1bd998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1bd99c:
    // 0x1bd99c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bd9a0:
    // 0x1bd9a0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1bd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bd9a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bd9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bd9a8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD9A8u;
    {
        const bool branch_taken_0x1bd9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9a8) {
            ctx->pc = 0x1BD9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD9A8u;
            // 0x1bd9ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDA00u;
            goto label_1bda00;
        }
    }
    ctx->pc = 0x1BD9B0u;
    // 0x1bd9b0: 0xc06f688  jal         func_1BDA20
    ctx->pc = 0x1BD9B0u;
    SET_GPR_U32(ctx, 31, 0x1BD9B8u);
    ctx->pc = 0x1BD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD9B0u;
    // 0x1bd9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BDA20u, 0x1BD9B0u, 0x1BD9B8u)) {
        return;
    }
    ctx->pc = 0x1BD9B8u;
label_1bd9b8:
    // 0x1bd9b8: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1BD9B8u;
    SET_GPR_U32(ctx, 31, 0x1BD9C0u);
    ctx->pc = 0x1BD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD9B8u;
    // 0x1bd9bc: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1BD9B8u, 0x1BD9C0u)) {
        return;
    }
    ctx->pc = 0x1BD9C0u;
label_1bd9c0:
    // 0x1bd9c0: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bd9c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bd9c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bd9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bd9c8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bd9cc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bd9d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd9d4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1bd9d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bd9d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BD9D8u;
    {
        const bool branch_taken_0x1bd9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9d8) {
            ctx->pc = 0x1BD9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD9D8u;
            // 0x1bd9dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9E0u;
            goto label_1bd9e0;
        }
    }
    ctx->pc = 0x1BD9E0u;
label_1bd9e0:
    // 0x1bd9e0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1bd9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1bd9e4: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd9e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bd9e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd9e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd9ec: 0x0  nop
    ctx->pc = 0x1bd9ecu;
    // NOP
    // 0x1bd9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bd9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bd9f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bd9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bd9f8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1bd9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1bd9fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bd9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bda00:
    // 0x1bda00: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bda00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bda04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bda04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bda08: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bda08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bda0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bda0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bda10: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1bda10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bda14: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1bda14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bda18: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA18u;
        // 0x1bda1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDA20u;
}
