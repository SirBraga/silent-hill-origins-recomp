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

// Function: sub_001488B0
// Address: 0x1488b0 - 0x148e48
void sub_001488B0_0x1488b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001488B0_0x1488b0");
#endif

    switch (ctx->pc) {
        case 0x1489dcu: goto label_1489dc;
        case 0x148a30u: goto label_148a30;
        case 0x148a98u: goto label_148a98;
        case 0x148aa0u: goto label_148aa0;
        case 0x148b78u: goto label_148b78;
        case 0x148b94u: goto label_148b94;
        case 0x148bb0u: goto label_148bb0;
        case 0x148bd8u: goto label_148bd8;
        case 0x148be0u: goto label_148be0;
        case 0x148bf8u: goto label_148bf8;
        case 0x148c10u: goto label_148c10;
        case 0x148c28u: goto label_148c28;
        case 0x148cd0u: goto label_148cd0;
        case 0x148cecu: goto label_148cec;
        case 0x148d08u: goto label_148d08;
        case 0x148d30u: goto label_148d30;
        case 0x148d38u: goto label_148d38;
        case 0x148d50u: goto label_148d50;
        case 0x148d68u: goto label_148d68;
        case 0x148e08u: goto label_148e08;
        case 0x148e10u: goto label_148e10;
        default: break;
    }

    ctx->pc = 0x1488b0u;

    // 0x1488b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1488b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1488b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1488b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1488b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1488b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1488bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1488bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1488c4: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x1488c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1488c8: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1488C8u;
    {
        const bool branch_taken_0x1488c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1488CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488C8u;
        // 0x1488cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488c8) {
            ctx->pc = 0x1488ECu;
            goto label_1488ec;
        }
    }
    ctx->pc = 0x1488D0u;
    // 0x1488d0: 0x54400159  bnel        $v0, $zero, . + 4 + (0x159 << 2)
    ctx->pc = 0x1488D0u;
    {
        const bool branch_taken_0x1488d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1488d0) {
            ctx->pc = 0x1488D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1488D0u;
            // 0x1488d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148E38u;
            goto label_148e38;
        }
    }
    ctx->pc = 0x1488D8u;
    // 0x1488d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1488d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1488dc: 0x5062014e  beql        $v1, $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x1488DCu;
    {
        const bool branch_taken_0x1488dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1488dc) {
            ctx->pc = 0x1488E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1488DCu;
            // 0x1488e0: 0xc6000188  lwc1        $f0, 0x188($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148E18u;
            goto label_148e18;
        }
    }
    ctx->pc = 0x1488E4u;
    // 0x1488e4: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x1488E4u;
    {
        const bool branch_taken_0x1488e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1488E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488E4u;
        // 0x1488e8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488e4) {
            ctx->pc = 0x148E38u;
            goto label_148e38;
        }
    }
    ctx->pc = 0x1488ECu;
label_1488ec:
    // 0x1488ec: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1488ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1488f0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1488f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1488f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1488f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1488f8: 0xc6020184  lwc1        $f2, 0x184($s0)
    ctx->pc = 0x1488f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1488fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1488fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x148900: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x148900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148904: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x148904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x148908: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x148908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x14890c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14890cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x148910: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x148910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148914: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x148914u;
    {
        const bool branch_taken_0x148914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148914u;
        // 0x148918: 0xe6010134  swc1        $f1, 0x134($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148914) {
            ctx->pc = 0x148AA8u;
            goto label_148aa8;
        }
    }
    ctx->pc = 0x14891Cu;
    // 0x14891c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14891cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148920: 0x0  nop
    ctx->pc = 0x148920u;
    // NOP
    // 0x148924: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x148924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148928: 0x0  nop
    ctx->pc = 0x148928u;
    // NOP
    // 0x14892c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14892Cu;
    {
        const bool branch_taken_0x14892c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14892Cu;
        // 0x148930: 0xc6000138  lwc1        $f0, 0x138($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14892c) {
            ctx->pc = 0x148940u;
            goto label_148940;
        }
    }
    ctx->pc = 0x148934u;
    // 0x148934: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x148934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148938u;
    {
        const bool branch_taken_0x148938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148938) {
            ctx->pc = 0x148944u;
            goto label_148944;
        }
    }
    ctx->pc = 0x148940u;
label_148940:
    // 0x148940: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_148944:
    // 0x148944: 0x0  nop
    ctx->pc = 0x148944u;
    // NOP
    // 0x148948: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x148948u;
    {
        const bool branch_taken_0x148948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148948) {
            ctx->pc = 0x14894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148948u;
            // 0x14894c: 0xe6000134  swc1        $f0, 0x134($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148950u;
            goto label_148950;
        }
    }
    ctx->pc = 0x148950u;
label_148950:
    // 0x148950: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x148950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148954: 0xc6010138  lwc1        $f1, 0x138($s0)
    ctx->pc = 0x148954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148958: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x148958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x14895c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14895cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x148960: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x148960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x148964: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x148964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x148968: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x148968u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14896c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x14896cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148970: 0x0  nop
    ctx->pc = 0x148970u;
    // NOP
    // 0x148974: 0x4502005c  bc1fl       . + 4 + (0x5C << 2)
    ctx->pc = 0x148974u;
    {
        const bool branch_taken_0x148974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148974) {
            ctx->pc = 0x148978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148974u;
            // 0x148978: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148AE8u;
            goto label_148ae8;
        }
    }
    ctx->pc = 0x14897Cu;
    // 0x14897c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x14897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x148980: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x148980u;
    {
        const bool branch_taken_0x148980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148980) {
            ctx->pc = 0x148984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148980u;
            // 0x148984: 0x860200fe  lh          $v0, 0xFE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 254)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148A68u;
            goto label_148a68;
        }
    }
    ctx->pc = 0x148988u;
    // 0x148988: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x148988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14898c: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x14898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148990: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x148990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x148994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x148994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x148998: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x148998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14899c: 0x0  nop
    ctx->pc = 0x14899cu;
    // NOP
    // 0x1489a0: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x1489A0u;
    {
        const bool branch_taken_0x1489a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1489a0) {
            ctx->pc = 0x1489A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1489A0u;
            // 0x1489a4: 0x86020106  lh          $v0, 0x106($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148A00u;
            goto label_148a00;
        }
    }
    ctx->pc = 0x1489A8u;
    // 0x1489a8: 0x860200fe  lh          $v0, 0xFE($s0)
    ctx->pc = 0x1489a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 254)));
    // 0x1489ac: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1489ACu;
    {
        const bool branch_taken_0x1489ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1489B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489ACu;
        // 0x1489b0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489ac) {
            ctx->pc = 0x1489DCu;
            goto label_1489dc;
        }
    }
    ctx->pc = 0x1489B4u;
    // 0x1489b4: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x1489b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1489b8: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x1489bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1489bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1489c0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1489C0u;
    {
        const bool branch_taken_0x1489c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1489C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489C0u;
        // 0x1489c4: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489c0) {
            ctx->pc = 0x1489DCu;
            goto label_1489dc;
        }
    }
    ctx->pc = 0x1489C8u;
    // 0x1489c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1489c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1489cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1489CCu;
    {
        const bool branch_taken_0x1489cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489cc) {
            ctx->pc = 0x1489D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1489CCu;
            // 0x1489d0: 0xae000138  sw          $zero, 0x138($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1489E0u;
            goto label_1489e0;
        }
    }
    ctx->pc = 0x1489D4u;
    // 0x1489d4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1489D4u;
    SET_GPR_U32(ctx, 31, 0x1489DCu);
    ctx->pc = 0x1489D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489D4u;
    // 0x1489d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1489D4u, 0x1489DCu)) {
        return;
    }
    ctx->pc = 0x1489DCu;
label_1489dc:
    // 0x1489dc: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x1489dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_1489e0:
    // 0x1489e0: 0xc601011c  lwc1        $f1, 0x11C($s0)
    ctx->pc = 0x1489e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1489e4: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x1489e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1489e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1489e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1489ec: 0x0  nop
    ctx->pc = 0x1489ecu;
    // NOP
    // 0x1489f0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1489F0u;
    {
        const bool branch_taken_0x1489f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1489F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489F0u;
        // 0x1489f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489f0) {
            ctx->pc = 0x148A58u;
            goto label_148a58;
        }
    }
    ctx->pc = 0x1489F8u;
    // 0x1489f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1489F8u;
    {
        const bool branch_taken_0x1489f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1489FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489F8u;
        // 0x1489fc: 0xe6010188  swc1        $f1, 0x188($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489f8) {
            ctx->pc = 0x148A54u;
            goto label_148a54;
        }
    }
    ctx->pc = 0x148A00u;
label_148a00:
    // 0x148a00: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x148A00u;
    {
        const bool branch_taken_0x148a00 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x148A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A00u;
        // 0x148a04: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a00) {
            ctx->pc = 0x148A30u;
            goto label_148a30;
        }
    }
    ctx->pc = 0x148A08u;
    // 0x148a08: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x148a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x148a0c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x148a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x148a10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x148a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x148a14: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148A14u;
    {
        const bool branch_taken_0x148a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x148A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A14u;
        // 0x148a18: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a14) {
            ctx->pc = 0x148A30u;
            goto label_148a30;
        }
    }
    ctx->pc = 0x148A1Cu;
    // 0x148a1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148a20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x148A20u;
    {
        const bool branch_taken_0x148a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a20) {
            ctx->pc = 0x148A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148A20u;
            // 0x148a24: 0xc6020118  lwc1        $f2, 0x118($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148A34u;
            goto label_148a34;
        }
    }
    ctx->pc = 0x148A28u;
    // 0x148a28: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x148A28u;
    SET_GPR_U32(ctx, 31, 0x148A30u);
    ctx->pc = 0x148A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A28u;
    // 0x148a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x148A28u, 0x148A30u)) {
        return;
    }
    ctx->pc = 0x148A30u;
label_148a30:
    // 0x148a30: 0xc6020118  lwc1        $f2, 0x118($s0)
    ctx->pc = 0x148a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_148a34:
    // 0x148a34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x148a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148a38: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x148a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148a3c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x148a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148a40: 0x0  nop
    ctx->pc = 0x148a40u;
    // NOP
    // 0x148a44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x148A44u;
    {
        const bool branch_taken_0x148a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A44u;
        // 0x148a48: 0xe6010138  swc1        $f1, 0x138($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a44) {
            ctx->pc = 0x148A58u;
            goto label_148a58;
        }
    }
    ctx->pc = 0x148A4Cu;
    // 0x148a4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x148a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148a50: 0xe6020188  swc1        $f2, 0x188($s0)
    ctx->pc = 0x148a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_148a54:
    // 0x148a54: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x148a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_148a58:
    // 0x148a58: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x148a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148a5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148a5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148a60: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x148A60u;
    {
        const bool branch_taken_0x148a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A60u;
        // 0x148a64: 0xe6000184  swc1        $f0, 0x184($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a60) {
            ctx->pc = 0x148AE4u;
            goto label_148ae4;
        }
    }
    ctx->pc = 0x148A68u;
label_148a68:
    // 0x148a68: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x148A68u;
    {
        const bool branch_taken_0x148a68 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x148A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A68u;
        // 0x148a6c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a68) {
            ctx->pc = 0x148A98u;
            goto label_148a98;
        }
    }
    ctx->pc = 0x148A70u;
    // 0x148a70: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x148a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x148a74: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x148a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x148a78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x148a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x148a7c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148A7Cu;
    {
        const bool branch_taken_0x148a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x148A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A7Cu;
        // 0x148a80: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a7c) {
            ctx->pc = 0x148A98u;
            goto label_148a98;
        }
    }
    ctx->pc = 0x148A84u;
    // 0x148a84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148a88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148A88u;
    {
        const bool branch_taken_0x148a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a88) {
            ctx->pc = 0x148A98u;
            goto label_148a98;
        }
    }
    ctx->pc = 0x148A90u;
    // 0x148a90: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x148A90u;
    SET_GPR_U32(ctx, 31, 0x148A98u);
    ctx->pc = 0x148A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A90u;
    // 0x148a94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x148A90u, 0x148A98u)) {
        return;
    }
    ctx->pc = 0x148A98u;
label_148a98:
    // 0x148a98: 0xc0524cc  jal         func_149330
    ctx->pc = 0x148A98u;
    SET_GPR_U32(ctx, 31, 0x148AA0u);
    ctx->pc = 0x148A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A98u;
    // 0x148a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149330u, 0x148A98u, 0x148AA0u)) {
        return;
    }
    ctx->pc = 0x148AA0u;
label_148aa0:
    // 0x148aa0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x148AA0u;
    {
        const bool branch_taken_0x148aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AA0u;
        // 0x148aa4: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148aa0) {
            ctx->pc = 0x148AE8u;
            goto label_148ae8;
        }
    }
    ctx->pc = 0x148AA8u;
label_148aa8:
    // 0x148aa8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x148aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148aac: 0x0  nop
    ctx->pc = 0x148aacu;
    // NOP
    // 0x148ab0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x148AB0u;
    {
        const bool branch_taken_0x148ab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148ab0) {
            ctx->pc = 0x148AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148AB0u;
            // 0x148ab4: 0xc6010134  lwc1        $f1, 0x134($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x148AC4u;
            goto label_148ac4;
        }
    }
    ctx->pc = 0x148AB8u;
    // 0x148ab8: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x148ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x148abc: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x148abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x148ac0: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x148ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_148ac4:
    // 0x148ac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x148ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148ac8: 0x0  nop
    ctx->pc = 0x148ac8u;
    // NOP
    // 0x148acc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148ad0: 0x0  nop
    ctx->pc = 0x148ad0u;
    // NOP
    // 0x148ad4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x148AD4u;
    {
        const bool branch_taken_0x148ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148ad4) {
            ctx->pc = 0x148AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148AD4u;
            // 0x148ad8: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148AE8u;
            goto label_148ae8;
        }
    }
    ctx->pc = 0x148ADCu;
    // 0x148adc: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x148adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x148ae0: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x148ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_148ae4:
    // 0x148ae4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x148ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_148ae8:
    // 0x148ae8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x148AE8u;
    {
        const bool branch_taken_0x148ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ae8) {
            ctx->pc = 0x148C48u;
            goto label_148c48;
        }
    }
    ctx->pc = 0x148AF0u;
    // 0x148af0: 0x6a020147  ldl         $v0, 0x147($s0)
    ctx->pc = 0x148af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x148af4: 0x6e020140  ldr         $v0, 0x140($s0)
    ctx->pc = 0x148af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x148af8: 0x6a03014f  ldl         $v1, 0x14F($s0)
    ctx->pc = 0x148af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x148afc: 0x6e030148  ldr         $v1, 0x148($s0)
    ctx->pc = 0x148afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x148b00: 0x6a040157  ldl         $a0, 0x157($s0)
    ctx->pc = 0x148b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x148b04: 0x6e040150  ldr         $a0, 0x150($s0)
    ctx->pc = 0x148b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x148b08: 0x6a05015f  ldl         $a1, 0x15F($s0)
    ctx->pc = 0x148b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x148b0c: 0x6e050158  ldr         $a1, 0x158($s0)
    ctx->pc = 0x148b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x148b10: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x148b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b14: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x148b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b18: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x148b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b1c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x148b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b20: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x148b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b24: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x148b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b28: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x148b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b2c: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x148b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b30: 0x6a020167  ldl         $v0, 0x167($s0)
    ctx->pc = 0x148b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x148b34: 0x6e020160  ldr         $v0, 0x160($s0)
    ctx->pc = 0x148b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x148b38: 0x6a03016f  ldl         $v1, 0x16F($s0)
    ctx->pc = 0x148b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x148b3c: 0x6e030168  ldr         $v1, 0x168($s0)
    ctx->pc = 0x148b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x148b40: 0x6a040177  ldl         $a0, 0x177($s0)
    ctx->pc = 0x148b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x148b44: 0x6e040170  ldr         $a0, 0x170($s0)
    ctx->pc = 0x148b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x148b48: 0x6a05017f  ldl         $a1, 0x17F($s0)
    ctx->pc = 0x148b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x148b4c: 0x6e050178  ldr         $a1, 0x178($s0)
    ctx->pc = 0x148b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x148b50: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x148b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b54: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x148b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b58: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x148b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b5c: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x148b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b60: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x148b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b64: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x148b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b68: 0xb3a5004f  sdl         $a1, 0x4F($sp)
    ctx->pc = 0x148b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b6c: 0xb7a50048  sdr         $a1, 0x48($sp)
    ctx->pc = 0x148b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148b70: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148B70u;
    SET_GPR_U32(ctx, 31, 0x148B78u);
    ctx->pc = 0x148B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B70u;
    // 0x148b74: 0x8e040124  lw          $a0, 0x124($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148B70u, 0x148B78u)) {
        return;
    }
    ctx->pc = 0x148B78u;
label_148b78:
    // 0x148b78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x148b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148b7c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x148b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148b80: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148b80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148b84: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148b88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x148b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148b8c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148B8Cu;
    SET_GPR_U32(ctx, 31, 0x148B94u);
    ctx->pc = 0x148B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B8Cu;
    // 0x148b90: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148B8Cu, 0x148B94u)) {
        return;
    }
    ctx->pc = 0x148B94u;
label_148b94:
    // 0x148b94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x148b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148b98: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x148b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148b9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148b9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148ba0: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148ba4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x148ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148ba8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148BA8u;
    SET_GPR_U32(ctx, 31, 0x148BB0u);
    ctx->pc = 0x148BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BA8u;
    // 0x148bac: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148BA8u, 0x148BB0u)) {
        return;
    }
    ctx->pc = 0x148BB0u;
label_148bb0:
    // 0x148bb0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x148bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148bb4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x148bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148bb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148bb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148bbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x148bbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148bc0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x148bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x148bc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x148bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x148bc8: 0xc60c0134  lwc1        $f12, 0x134($s0)
    ctx->pc = 0x148bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x148bcc: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x148bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x148bd0: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x148BD0u;
    SET_GPR_U32(ctx, 31, 0x148BD8u);
    ctx->pc = 0x148BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BD0u;
    // 0x148bd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x148BD0u, 0x148BD8u)) {
        return;
    }
    ctx->pc = 0x148BD8u;
label_148bd8:
    // 0x148bd8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148BD8u;
    SET_GPR_U32(ctx, 31, 0x148BE0u);
    ctx->pc = 0x148BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BD8u;
    // 0x148bdc: 0x8e040124  lw          $a0, 0x124($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148BD8u, 0x148BE0u)) {
        return;
    }
    ctx->pc = 0x148BE0u;
label_148be0:
    // 0x148be0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x148be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148be4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x148be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148be8: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148bec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x148becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148bf0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148BF0u;
    SET_GPR_U32(ctx, 31, 0x148BF8u);
    ctx->pc = 0x148BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BF0u;
    // 0x148bf4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148BF0u, 0x148BF8u)) {
        return;
    }
    ctx->pc = 0x148BF8u;
label_148bf8:
    // 0x148bf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x148bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148bfc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x148bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148c00: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148c04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x148c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148c08: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148C08u;
    SET_GPR_U32(ctx, 31, 0x148C10u);
    ctx->pc = 0x148C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C08u;
    // 0x148c0c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148C08u, 0x148C10u)) {
        return;
    }
    ctx->pc = 0x148C10u;
label_148c10:
    // 0x148c10: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x148c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148c14: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x148c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148c18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x148c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148c1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x148c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x148c20: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148C20u;
    SET_GPR_U32(ctx, 31, 0x148C28u);
    ctx->pc = 0x148C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C20u;
    // 0x148c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148C20u, 0x148C28u)) {
        return;
    }
    ctx->pc = 0x148C28u;
label_148c28:
    // 0x148c28: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x148c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x148c2c: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x148c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x148c30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148c34: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x148c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c38: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x148c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c3c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x148c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x148c40: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x148C40u;
    {
        const bool branch_taken_0x148c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C40u;
        // 0x148c44: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c40) {
            ctx->pc = 0x148E00u;
            goto label_148e00;
        }
    }
    ctx->pc = 0x148C48u;
label_148c48:
    // 0x148c48: 0x6a060147  ldl         $a2, 0x147($s0)
    ctx->pc = 0x148c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x148c4c: 0x6e060140  ldr         $a2, 0x140($s0)
    ctx->pc = 0x148c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x148c50: 0x6a02014f  ldl         $v0, 0x14F($s0)
    ctx->pc = 0x148c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x148c54: 0x6e020148  ldr         $v0, 0x148($s0)
    ctx->pc = 0x148c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x148c58: 0x6a030157  ldl         $v1, 0x157($s0)
    ctx->pc = 0x148c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x148c5c: 0x6e030150  ldr         $v1, 0x150($s0)
    ctx->pc = 0x148c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x148c60: 0x6a04015f  ldl         $a0, 0x15F($s0)
    ctx->pc = 0x148c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x148c64: 0x6e040158  ldr         $a0, 0x158($s0)
    ctx->pc = 0x148c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x148c68: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x148c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c6c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x148c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c70: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x148c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c74: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x148c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c78: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x148c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c7c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x148c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c80: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x148c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c84: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x148c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148c88: 0x6a060167  ldl         $a2, 0x167($s0)
    ctx->pc = 0x148c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x148c8c: 0x6e060160  ldr         $a2, 0x160($s0)
    ctx->pc = 0x148c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x148c90: 0x6a02016f  ldl         $v0, 0x16F($s0)
    ctx->pc = 0x148c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x148c94: 0x6e020168  ldr         $v0, 0x168($s0)
    ctx->pc = 0x148c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x148c98: 0x6a030177  ldl         $v1, 0x177($s0)
    ctx->pc = 0x148c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x148c9c: 0x6e030170  ldr         $v1, 0x170($s0)
    ctx->pc = 0x148c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x148ca0: 0x6a04017f  ldl         $a0, 0x17F($s0)
    ctx->pc = 0x148ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x148ca4: 0x6e040178  ldr         $a0, 0x178($s0)
    ctx->pc = 0x148ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x148ca8: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x148ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cac: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x148cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cb0: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x148cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cb4: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x148cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cb8: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x148cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cbc: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x148cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cc0: 0xb3a4003f  sdl         $a0, 0x3F($sp)
    ctx->pc = 0x148cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cc4: 0xb7a40038  sdr         $a0, 0x38($sp)
    ctx->pc = 0x148cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148cc8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148CC8u;
    SET_GPR_U32(ctx, 31, 0x148CD0u);
    ctx->pc = 0x148CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CC8u;
    // 0x148ccc: 0x8e040124  lw          $a0, 0x124($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148CC8u, 0x148CD0u)) {
        return;
    }
    ctx->pc = 0x148CD0u;
label_148cd0:
    // 0x148cd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x148cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148cd4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x148cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148cd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148cd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148cdc: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148ce0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x148ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148ce4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148CE4u;
    SET_GPR_U32(ctx, 31, 0x148CECu);
    ctx->pc = 0x148CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CE4u;
    // 0x148ce8: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148CE4u, 0x148CECu)) {
        return;
    }
    ctx->pc = 0x148CECu;
label_148cec:
    // 0x148cec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x148cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148cf0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x148cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148cf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148cf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148cf8: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148cfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x148cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148d00: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148D00u;
    SET_GPR_U32(ctx, 31, 0x148D08u);
    ctx->pc = 0x148D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D00u;
    // 0x148d04: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148D00u, 0x148D08u)) {
        return;
    }
    ctx->pc = 0x148D08u;
label_148d08:
    // 0x148d08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x148d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148d0c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x148d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148d10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x148d10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x148d14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x148d14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148d18: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x148d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x148d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d20: 0xc60c0134  lwc1        $f12, 0x134($s0)
    ctx->pc = 0x148d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x148d24: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x148d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x148d28: 0xc092e32  jal         func_24B8C8
    ctx->pc = 0x148D28u;
    SET_GPR_U32(ctx, 31, 0x148D30u);
    ctx->pc = 0x148D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D28u;
    // 0x148d2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x148D28u, 0x148D30u)) {
        return;
    }
    ctx->pc = 0x148D30u;
label_148d30:
    // 0x148d30: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148D30u;
    SET_GPR_U32(ctx, 31, 0x148D38u);
    ctx->pc = 0x148D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D30u;
    // 0x148d34: 0x8e040124  lw          $a0, 0x124($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148D30u, 0x148D38u)) {
        return;
    }
    ctx->pc = 0x148D38u;
label_148d38:
    // 0x148d38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x148d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148d3c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x148d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148d40: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x148d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148d48: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148D48u;
    SET_GPR_U32(ctx, 31, 0x148D50u);
    ctx->pc = 0x148D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D48u;
    // 0x148d4c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148D48u, 0x148D50u)) {
        return;
    }
    ctx->pc = 0x148D50u;
label_148d50:
    // 0x148d50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x148d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148d54: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x148d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148d58: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x148d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x148d5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x148d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148d60: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148D60u;
    SET_GPR_U32(ctx, 31, 0x148D68u);
    ctx->pc = 0x148D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D60u;
    // 0x148d64: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148D60u, 0x148D68u)) {
        return;
    }
    ctx->pc = 0x148D68u;
label_148d68:
    // 0x148d68: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x148d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148d6c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x148d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x148d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148d74: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x148d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x148d78: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x148d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x148d7c: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x148d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x148d80: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x148d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x148d84: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x148d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x148d88: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x148d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x148d8c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x148d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x148d90: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x148d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x148d94: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x148d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x148d98: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x148d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x148d9c: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x148d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148da0: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x148da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148da4: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x148da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148da8: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x148da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148dac: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x148dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148db0: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x148db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148db4: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x148db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148db8: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x148db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148dbc: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x148dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x148dc0: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x148dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x148dc4: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x148dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x148dc8: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x148dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x148dcc: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x148dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x148dd0: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x148dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x148dd4: 0x6ba4003f  ldl         $a0, 0x3F($sp)
    ctx->pc = 0x148dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x148dd8: 0x6fa40038  ldr         $a0, 0x38($sp)
    ctx->pc = 0x148dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x148ddc: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x148ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148de0: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x148de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148de4: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x148de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148de8: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x148de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148dec: 0xb0430047  sdl         $v1, 0x47($v0)
    ctx->pc = 0x148decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148df0: 0xb4430040  sdr         $v1, 0x40($v0)
    ctx->pc = 0x148df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148df4: 0xb044004f  sdl         $a0, 0x4F($v0)
    ctx->pc = 0x148df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148df8: 0xb4440048  sdr         $a0, 0x48($v0)
    ctx->pc = 0x148df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x148dfc: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x148dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_148e00:
    // 0x148e00: 0xc092d94  jal         func_24B650
    ctx->pc = 0x148E00u;
    SET_GPR_U32(ctx, 31, 0x148E08u);
    ctx->pc = 0x148E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E00u;
    // 0x148e04: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x148E00u, 0x148E08u)) {
        return;
    }
    ctx->pc = 0x148E08u;
label_148e08:
    // 0x148e08: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x148E08u;
    SET_GPR_U32(ctx, 31, 0x148E10u);
    ctx->pc = 0x148E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E08u;
    // 0x148e0c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x148E08u, 0x148E10u)) {
        return;
    }
    ctx->pc = 0x148E10u;
label_148e10:
    // 0x148e10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x148E10u;
    {
        const bool branch_taken_0x148e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E10u;
        // 0x148e14: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e10) {
            ctx->pc = 0x148E38u;
            goto label_148e38;
        }
    }
    ctx->pc = 0x148E18u;
label_148e18:
    // 0x148e18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x148e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148e1c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x148e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x148e20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x148e20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148e24: 0x0  nop
    ctx->pc = 0x148e24u;
    // NOP
    // 0x148e28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x148E28u;
    {
        const bool branch_taken_0x148e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E28u;
        // 0x148e2c: 0xe6000188  swc1        $f0, 0x188($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e28) {
            ctx->pc = 0x148E34u;
            goto label_148e34;
        }
    }
    ctx->pc = 0x148E30u;
    // 0x148e30: 0xae040180  sw          $a0, 0x180($s0)
    ctx->pc = 0x148e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 4));
label_148e34:
    // 0x148e34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x148e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_148e38:
    // 0x148e38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x148e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x148E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E3Cu;
        // 0x148e40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148E44u;
    // 0x148e44: 0x0  nop
    ctx->pc = 0x148e44u;
    // NOP
    ctx->pc = 0x148e48u;
}
