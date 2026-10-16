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

// Function: sub_0010CE40
// Address: 0x10ce40 - 0x10cf80
void sub_0010CE40_0x10ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CE40_0x10ce40");
#endif

    switch (ctx->pc) {
        case 0x10ce80u: goto label_10ce80;
        case 0x10cee8u: goto label_10cee8;
        case 0x10cf0cu: goto label_10cf0c;
        case 0x10cf18u: goto label_10cf18;
        default: break;
    }

    ctx->pc = 0x10ce40u;

    // 0x10ce40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10ce44: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x10ce44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10ce48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10ce4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10ce50: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x10ce50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10ce54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10ce58: 0x24910b20  addiu       $s1, $a0, 0xB20
    ctx->pc = 0x10ce58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2848));
    // 0x10ce5c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10ce60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10ce60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce64: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x10ce64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x10ce68: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x10ce68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x10ce6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ce70: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x10ce70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x10ce74: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x10ce74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10ce78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ce7c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x10ce7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_10ce80:
    // 0x10ce80: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x10ce84: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x10ce88: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10ce8c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x10ce90: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10ce94: 0xe6360014  swc1        $f22, 0x14($s1)
    ctx->pc = 0x10ce94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x10ce98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ce9c: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10CE9Cu;
    {
        const bool branch_taken_0x10ce9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE9Cu;
        // 0x10cea0: 0x8e6282f4  lw          $v0, -0x7D0C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce9c) {
            ctx->pc = 0x10CF44u;
            goto label_10cf44;
        }
    }
    ctx->pc = 0x10CEA4u;
    // 0x10cea4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x10CEA4u;
    {
        const bool branch_taken_0x10cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cea4) {
            ctx->pc = 0x10CEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CEA4u;
            // 0x10cea8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CF48u;
            goto label_10cf48;
        }
    }
    ctx->pc = 0x10CEACu;
    // 0x10ceac: 0xc6340010  lwc1        $f20, 0x10($s1)
    ctx->pc = 0x10ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10ceb0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x10ceb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ceb4: 0x0  nop
    ctx->pc = 0x10ceb4u;
    // NOP
    // 0x10ceb8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x10CEB8u;
    {
        const bool branch_taken_0x10ceb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ceb8) {
            ctx->pc = 0x10CEE0u;
            goto label_10cee0;
        }
    }
    ctx->pc = 0x10CEC0u;
    // 0x10cec0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x10cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cec4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x10cec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10cec8: 0x0  nop
    ctx->pc = 0x10cec8u;
    // NOP
    // 0x10cecc: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x10CECCu;
    {
        const bool branch_taken_0x10cecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10cecc) {
            ctx->pc = 0x10CED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CECCu;
            // 0x10ced0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CF48u;
            goto label_10cf48;
        }
    }
    ctx->pc = 0x10CED4u;
    // 0x10ced4: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x10ced4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10ced8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10CED8u;
    {
        const bool branch_taken_0x10ced8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CED8u;
        // 0x10cedc: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ced8) {
            ctx->pc = 0x10CF44u;
            goto label_10cf44;
        }
    }
    ctx->pc = 0x10CEE0u;
label_10cee0:
    // 0x10cee0: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10CEE0u;
    SET_GPR_U32(ctx, 31, 0x10CEE8u);
    ctx->pc = 0x10CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEE0u;
    // 0x10cee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10CEE0u, 0x10CEE8u)) {
        return;
    }
    ctx->pc = 0x10CEE8u;
label_10cee8:
    // 0x10cee8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ceec: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10ceecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10cef0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10cef4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10cef8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CEF8u;
    {
        const bool branch_taken_0x10cef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEF8u;
        // 0x10cefc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cef8) {
            ctx->pc = 0x10CF10u;
            goto label_10cf10;
        }
    }
    ctx->pc = 0x10CF00u;
    // 0x10cf00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cf04: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10CF04u;
    SET_GPR_U32(ctx, 31, 0x10CF0Cu);
    ctx->pc = 0x10CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF04u;
    // 0x10cf08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10CF04u, 0x10CF0Cu)) {
        return;
    }
    ctx->pc = 0x10CF0Cu;
label_10cf0c:
    // 0x10cf0c: 0x0  nop
    ctx->pc = 0x10cf0cu;
    // NOP
label_10cf10:
    // 0x10cf10: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10CF10u;
    SET_GPR_U32(ctx, 31, 0x10CF18u);
    ctx->pc = 0x10CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF10u;
    // 0x10cf14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10CF10u, 0x10CF18u)) {
        return;
    }
    ctx->pc = 0x10CF18u;
label_10cf18:
    // 0x10cf18: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10cf18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10cf1c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10cf20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10cf24: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10cf28: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x10cf28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10cf2c: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x10cf2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10cf30: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x10cf30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10cf34: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10cf38: 0xe616001c  swc1        $f22, 0x1C($s0)
    ctx->pc = 0x10cf38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10cf3c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x10cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x10cf40: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_10cf44:
    // 0x10cf44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10cf44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10cf48:
    // 0x10cf48: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x10cf48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x10cf4c: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x10cf4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10cf50: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x10CF50u;
    {
        const bool branch_taken_0x10cf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF50u;
        // 0x10cf54: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf50) {
            ctx->pc = 0x10CE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ce80;
        }
    }
    ctx->pc = 0x10CF58u;
    // 0x10cf58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cf5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10cf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10cf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cf64: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10cf64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cf6c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x10cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10cf70: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x10cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10cf74: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10cf78: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF78u;
        // 0x10cf7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF80u;
}
