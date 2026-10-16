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

// Function: sub_00162928
// Address: 0x162928 - 0x162ad0
void sub_00162928_0x162928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162928_0x162928");
#endif

    switch (ctx->pc) {
        case 0x162988u: goto label_162988;
        case 0x1629d8u: goto label_1629d8;
        case 0x162a58u: goto label_162a58;
        case 0x162a8cu: goto label_162a8c;
        default: break;
    }

    ctx->pc = 0x162928u;

    // 0x162928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16292c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x162930: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x162930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x162934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16293c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162940: 0x8e021d28  lw          $v0, 0x1D28($s0)
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7464)));
    // 0x162944: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x162944u;
    {
        const bool branch_taken_0x162944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162944u;
        // 0x162948: 0x26020044  addiu       $v0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162944) {
            ctx->pc = 0x162AB0u;
            goto label_162ab0;
        }
    }
    ctx->pc = 0x16294Cu;
    // 0x16294c: 0xc6031d14  lwc1        $f3, 0x1D14($s0)
    ctx->pc = 0x16294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162950: 0xc6001d10  lwc1        $f0, 0x1D10($s0)
    ctx->pc = 0x162950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162954: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x162954u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x162958: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x162958u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x16295c: 0xc6011d94  lwc1        $f1, 0x1D94($s0)
    ctx->pc = 0x16295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162960: 0xc6021d98  lwc1        $f2, 0x1D98($s0)
    ctx->pc = 0x162960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162964: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x162964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x162968: 0xc6001d9c  lwc1        $f0, 0x1D9C($s0)
    ctx->pc = 0x162968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16296c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16296cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x162970: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x162970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x162974: 0xe6011da0  swc1        $f1, 0x1DA0($s0)
    ctx->pc = 0x162974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7584), bits); }
    // 0x162978: 0xe6021da4  swc1        $f2, 0x1DA4($s0)
    ctx->pc = 0x162978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7588), bits); }
    // 0x16297c: 0xe6001da8  swc1        $f0, 0x1DA8($s0)
    ctx->pc = 0x16297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7592), bits); }
    // 0x162980: 0x26061c74  addiu       $a2, $s0, 0x1C74
    ctx->pc = 0x162980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 7284));
    // 0x162984: 0x24030257  addiu       $v1, $zero, 0x257
    ctx->pc = 0x162984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
label_162988:
    // 0x162988: 0xc6001da0  lwc1        $f0, 0x1DA0($s0)
    ctx->pc = 0x162988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16298c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162990: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x162990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162994: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x162994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162998: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x162998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16299c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x16299cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1629a0: 0xc6001da4  lwc1        $f0, 0x1DA4($s0)
    ctx->pc = 0x1629a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1629a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1629a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1629a8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1629a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1629ac: 0xc6001da8  lwc1        $f0, 0x1DA8($s0)
    ctx->pc = 0x1629acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1629b0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1629b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1629b4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x1629b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1629b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1629b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1629bc: 0x461fff2  bgez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1629BCu;
    {
        const bool branch_taken_0x1629bc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1629C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629BCu;
        // 0x1629c0: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629bc) {
            ctx->pc = 0x162988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162988;
        }
    }
    ctx->pc = 0x1629C4u;
    // 0x1629c4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1629c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1629c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1629c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1629cc: 0x26041c70  addiu       $a0, $s0, 0x1C70
    ctx->pc = 0x1629ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7280));
    // 0x1629d0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1629d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629d4: 0x24c500a0  addiu       $a1, $a2, 0xA0
    ctx->pc = 0x1629d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_1629d8:
    // 0x1629d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1629d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1629dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1629DCu;
    {
        const bool branch_taken_0x1629dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629dc) {
            ctx->pc = 0x1629E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1629DCu;
            // 0x1629e0: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162A0Cu;
            goto label_162a0c;
        }
    }
    ctx->pc = 0x1629E4u;
    // 0x1629e4: 0xc6001d20  lwc1        $f0, 0x1D20($s0)
    ctx->pc = 0x1629e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1629e8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1629e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1629ec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1629ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1629f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1629f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1629f4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1629f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1629f8: 0x0  nop
    ctx->pc = 0x1629f8u;
    // NOP
    // 0x1629fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1629FCu;
    {
        const bool branch_taken_0x1629fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629FCu;
        // 0x162a00: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629fc) {
            ctx->pc = 0x162A08u;
            goto label_162a08;
        }
    }
    ctx->pc = 0x162A04u;
    // 0x162a04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x162a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_162a08:
    // 0x162a08: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x162a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_162a0c:
    // 0x162a0c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x162a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x162a10: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x162A10u;
    {
        const bool branch_taken_0x162a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A10u;
        // 0x162a14: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a10) {
            ctx->pc = 0x1629D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1629d8;
        }
    }
    ctx->pc = 0x162A18u;
    // 0x162a18: 0xc6001d04  lwc1        $f0, 0x1D04($s0)
    ctx->pc = 0x162a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162a1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x162a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162a20: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x162a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x162a24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162a28: 0x0  nop
    ctx->pc = 0x162a28u;
    // NOP
    // 0x162a2c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x162A2Cu;
    {
        const bool branch_taken_0x162a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A2Cu;
        // 0x162a30: 0xe6001d04  swc1        $f0, 0x1D04($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7428), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a2c) {
            ctx->pc = 0x162AB0u;
            goto label_162ab0;
        }
    }
    ctx->pc = 0x162A34u;
    // 0x162a34: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x162a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x162a38: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x162a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x162a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162a40: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x162a40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a44: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x162a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x162a48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a4c: 0xe6001d04  swc1        $f0, 0x1D04($s0)
    ctx->pc = 0x162a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7428), bits); }
    // 0x162a50: 0x26041c64  addiu       $a0, $s0, 0x1C64
    ctx->pc = 0x162a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7268));
    // 0x162a54: 0x0  nop
    ctx->pc = 0x162a54u;
    // NOP
label_162a58:
    // 0x162a58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162a5c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x162A5Cu;
    {
        const bool branch_taken_0x162a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a5c) {
            ctx->pc = 0x162A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162A5Cu;
            // 0x162a60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162A64u;
            goto label_162a64;
        }
    }
    ctx->pc = 0x162A64u;
label_162a64:
    // 0x162a64: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x162a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x162a68: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x162a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x162a6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x162A6Cu;
    {
        const bool branch_taken_0x162a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A6Cu;
        // 0x162a70: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a6c) {
            ctx->pc = 0x162A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162a58;
        }
    }
    ctx->pc = 0x162A74u;
    // 0x162a74: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x162A74u;
    {
        const bool branch_taken_0x162a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A74u;
        // 0x162a78: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a74) {
            ctx->pc = 0x162AB0u;
            goto label_162ab0;
        }
    }
    ctx->pc = 0x162A7Cu;
    // 0x162a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a80: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x162a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x162a84: 0xc059b8a  jal         func_166E28
    ctx->pc = 0x162A84u;
    SET_GPR_U32(ctx, 31, 0x162A8Cu);
    ctx->pc = 0x162A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A84u;
    // 0x162a88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x166E28u, 0x162A84u, 0x162A8Cu)) {
        return;
    }
    ctx->pc = 0x162A8Cu;
label_162a8c:
    // 0x162a8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x162A8Cu;
    {
        const bool branch_taken_0x162a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a8c) {
            ctx->pc = 0x162A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162A8Cu;
            // 0x162a90: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162AB4u;
            goto label_162ab4;
        }
    }
    ctx->pc = 0x162A94u;
    // 0x162a94: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x162a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x162a98: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x162a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x162a9c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x162a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162aa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x162aa4: 0xc6001d04  lwc1        $f0, 0x1D04($s0)
    ctx->pc = 0x162aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162aa8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x162aa8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x162aac: 0xe6001d04  swc1        $f0, 0x1D04($s0)
    ctx->pc = 0x162aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7428), bits); }
label_162ab0:
    // 0x162ab0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x162ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_162ab4:
    // 0x162ab4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x162ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x162AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AC0u;
        // 0x162ac4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162AC8u;
    // 0x162ac8: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x162ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x162acc: 0x0  nop
    ctx->pc = 0x162accu;
    // NOP
    ctx->pc = 0x162ad0u;
}
