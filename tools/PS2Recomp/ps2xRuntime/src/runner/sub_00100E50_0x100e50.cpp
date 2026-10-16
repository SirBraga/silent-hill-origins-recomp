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

// Function: sub_00100E50
// Address: 0x100e50 - 0x101008
void sub_00100E50_0x100e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100E50_0x100e50");
#endif

    switch (ctx->pc) {
        case 0x100ef8u: goto label_100ef8;
        case 0x100f08u: goto label_100f08;
        case 0x100f54u: goto label_100f54;
        case 0x100f64u: goto label_100f64;
        case 0x100fccu: goto label_100fcc;
        case 0x100fd8u: goto label_100fd8;
        default: break;
    }

    ctx->pc = 0x100e50u;

    // 0x100e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x100e54: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x100e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x100e58: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x100e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x100e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100e60: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x100e60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x100e64: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x100e64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x100e68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x100e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x100e6c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x100e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x100e70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x100e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x100e74: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x100e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x100e78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100e80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x100e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e84: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x100E84u;
    {
        const bool branch_taken_0x100e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x100E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E84u;
        // 0x100e88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e84) {
            ctx->pc = 0x100F2Cu;
            goto label_100f2c;
        }
    }
    ctx->pc = 0x100E8Cu;
    // 0x100e8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x100e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x100e90: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x100e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x100e94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x100e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x100e98: 0xae1101a8  sw          $s1, 0x1A8($s0)
    ctx->pc = 0x100e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 17));
    // 0x100e9c: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x100e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x100ea0: 0x26040188  addiu       $a0, $s0, 0x188
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x100ea4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100ea8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x100ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x100eac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x100eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x100eb0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x100eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100eb4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100eb8: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x100eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x100ebc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x100ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x100ec0: 0xae060194  sw          $a2, 0x194($s0)
    ctx->pc = 0x100ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 6));
    // 0x100ec4: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x100ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x100ec8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x100ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100ecc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100ECCu;
    {
        const bool branch_taken_0x100ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ECCu;
        // 0x100ed0: 0xae040190  sw          $a0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ecc) {
            ctx->pc = 0x100ED8u;
            goto label_100ed8;
        }
    }
    ctx->pc = 0x100ED4u;
    // 0x100ed4: 0xae04019c  sw          $a0, 0x19C($s0)
    ctx->pc = 0x100ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 4));
label_100ed8:
    // 0x100ed8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x100ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x100edc: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x100edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100ee0: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x100ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100ee4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x100ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x100ee8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x100ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x100eec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x100eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100ef0: 0xc09d55c  jal         func_275570
    ctx->pc = 0x100EF0u;
    SET_GPR_U32(ctx, 31, 0x100EF8u);
    ctx->pc = 0x100EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EF0u;
    // 0x100ef4: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x100EF0u, 0x100EF8u)) {
        return;
    }
    ctx->pc = 0x100EF8u;
label_100ef8:
    // 0x100ef8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x100ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x100efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x100efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x100f00: 0xc09d926  jal         func_276498
    ctx->pc = 0x100F00u;
    SET_GPR_U32(ctx, 31, 0x100F08u);
    ctx->pc = 0x100F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F00u;
    // 0x100f04: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x100F00u, 0x100F08u)) {
        return;
    }
    ctx->pc = 0x100F08u;
label_100f08:
    // 0x100f08: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x100f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x100f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100f14: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x100f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x100f18: 0xae0301cc  sw          $v1, 0x1CC($s0)
    ctx->pc = 0x100f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 3));
    // 0x100f1c: 0xae04019c  sw          $a0, 0x19C($s0)
    ctx->pc = 0x100f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 4));
    // 0x100f20: 0xae1201e4  sw          $s2, 0x1E4($s0)
    ctx->pc = 0x100f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 18));
    // 0x100f24: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x100F24u;
    {
        const bool branch_taken_0x100f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F24u;
        // 0x100f28: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f24) {
            ctx->pc = 0x100FE8u;
            goto label_100fe8;
        }
    }
    ctx->pc = 0x100F2Cu;
label_100f2c:
    // 0x100f2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x100f30: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x100f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x100f34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x100f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x100f38: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100F38u;
    {
        const bool branch_taken_0x100f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x100F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F38u;
        // 0x100f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f38) {
            ctx->pc = 0x100F5Cu;
            goto label_100f5c;
        }
    }
    ctx->pc = 0x100F40u;
    // 0x100f40: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x100f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
    // 0x100f44: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x100f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x100f48: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x100f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x100f4c: 0xc09d918  jal         func_276460
    ctx->pc = 0x100F4Cu;
    SET_GPR_U32(ctx, 31, 0x100F54u);
    ctx->pc = 0x100F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F4Cu;
    // 0x100f50: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x100F4Cu, 0x100F54u)) {
        return;
    }
    ctx->pc = 0x100F54u;
label_100f54:
    // 0x100f54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x100F54u;
    {
        const bool branch_taken_0x100f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F54u;
        // 0x100f58: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f54) {
            ctx->pc = 0x100F68u;
            goto label_100f68;
        }
    }
    ctx->pc = 0x100F5Cu;
label_100f5c:
    // 0x100f5c: 0xc0408cc  jal         func_102330
    ctx->pc = 0x100F5Cu;
    SET_GPR_U32(ctx, 31, 0x100F64u);
    ctx->pc = 0x100F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F5Cu;
    // 0x100f60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102330u, 0x100F5Cu, 0x100F64u)) {
        return;
    }
    ctx->pc = 0x100F64u;
label_100f64:
    // 0x100f64: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x100f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_100f68:
    // 0x100f68: 0x26050188  addiu       $a1, $s0, 0x188
    ctx->pc = 0x100f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x100f6c: 0xae1101ac  sw          $s1, 0x1AC($s0)
    ctx->pc = 0x100f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 17));
    // 0x100f70: 0xe61401bc  swc1        $f20, 0x1BC($s0)
    ctx->pc = 0x100f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x100f74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x100f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100f78: 0xe61401b8  swc1        $f20, 0x1B8($s0)
    ctx->pc = 0x100f78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x100f7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x100f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100f80: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x100f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x100f84: 0x8e0701d4  lw          $a3, 0x1D4($s0)
    ctx->pc = 0x100f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x100f88: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x100f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100f8c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x100f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100f90: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x100f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x100f94: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x100f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x100f98: 0xae060194  sw          $a2, 0x194($s0)
    ctx->pc = 0x100f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 6));
    // 0x100f9c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x100f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x100fa0: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x100FA0u;
    {
        const bool branch_taken_0x100fa0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x100FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FA0u;
        // 0x100fa4: 0xae050190  sw          $a1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fa0) {
            ctx->pc = 0x100FACu;
            goto label_100fac;
        }
    }
    ctx->pc = 0x100FA8u;
    // 0x100fa8: 0xae05019c  sw          $a1, 0x19C($s0)
    ctx->pc = 0x100fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 5));
label_100fac:
    // 0x100fac: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x100facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x100fb0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x100fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x100fb4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x100fb8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x100fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100fbc: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x100fc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x100fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100fc4: 0xc09d55c  jal         func_275570
    ctx->pc = 0x100FC4u;
    SET_GPR_U32(ctx, 31, 0x100FCCu);
    ctx->pc = 0x100FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FC4u;
    // 0x100fc8: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x100FC4u, 0x100FCCu)) {
        return;
    }
    ctx->pc = 0x100FCCu;
label_100fcc:
    // 0x100fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x100fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x100fd0: 0xc09d926  jal         func_276498
    ctx->pc = 0x100FD0u;
    SET_GPR_U32(ctx, 31, 0x100FD8u);
    ctx->pc = 0x100FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FD0u;
    // 0x100fd4: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x100FD0u, 0x100FD8u)) {
        return;
    }
    ctx->pc = 0x100FD8u;
label_100fd8:
    // 0x100fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100fdc: 0xae1201e4  sw          $s2, 0x1E4($s0)
    ctx->pc = 0x100fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 18));
    // 0x100fe0: 0xae0301cc  sw          $v1, 0x1CC($s0)
    ctx->pc = 0x100fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 3));
    // 0x100fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100fe8:
    // 0x100fe8: 0xae0302a4  sw          $v1, 0x2A4($s0)
    ctx->pc = 0x100fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
    // 0x100fec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x100fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100ff0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x100ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100ff4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x100ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ffc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x100ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x101000: 0x3e00008  jr          $ra
    ctx->pc = 0x101000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101000u;
        // 0x101004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101008u;
}
