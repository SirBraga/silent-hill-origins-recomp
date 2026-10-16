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

// Function: sub_001BB078
// Address: 0x1bb078 - 0x1bb1d8
void sub_001BB078_0x1bb078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB078_0x1bb078");
#endif

    switch (ctx->pc) {
        case 0x1bb078u: goto label_1bb078;
        case 0x1bb07cu: goto label_1bb07c;
        case 0x1bb080u: goto label_1bb080;
        case 0x1bb084u: goto label_1bb084;
        case 0x1bb088u: goto label_1bb088;
        case 0x1bb08cu: goto label_1bb08c;
        case 0x1bb090u: goto label_1bb090;
        case 0x1bb094u: goto label_1bb094;
        case 0x1bb098u: goto label_1bb098;
        case 0x1bb09cu: goto label_1bb09c;
        case 0x1bb0a0u: goto label_1bb0a0;
        case 0x1bb0a4u: goto label_1bb0a4;
        case 0x1bb0a8u: goto label_1bb0a8;
        case 0x1bb0acu: goto label_1bb0ac;
        case 0x1bb0b0u: goto label_1bb0b0;
        case 0x1bb0b4u: goto label_1bb0b4;
        case 0x1bb0b8u: goto label_1bb0b8;
        case 0x1bb0bcu: goto label_1bb0bc;
        case 0x1bb0c0u: goto label_1bb0c0;
        case 0x1bb0c4u: goto label_1bb0c4;
        case 0x1bb0c8u: goto label_1bb0c8;
        case 0x1bb0ccu: goto label_1bb0cc;
        case 0x1bb0d0u: goto label_1bb0d0;
        case 0x1bb0d4u: goto label_1bb0d4;
        case 0x1bb0d8u: goto label_1bb0d8;
        case 0x1bb0dcu: goto label_1bb0dc;
        case 0x1bb0e0u: goto label_1bb0e0;
        case 0x1bb0e4u: goto label_1bb0e4;
        case 0x1bb0e8u: goto label_1bb0e8;
        case 0x1bb0ecu: goto label_1bb0ec;
        case 0x1bb0f0u: goto label_1bb0f0;
        case 0x1bb0f4u: goto label_1bb0f4;
        case 0x1bb0f8u: goto label_1bb0f8;
        case 0x1bb0fcu: goto label_1bb0fc;
        case 0x1bb100u: goto label_1bb100;
        case 0x1bb104u: goto label_1bb104;
        case 0x1bb108u: goto label_1bb108;
        case 0x1bb10cu: goto label_1bb10c;
        case 0x1bb110u: goto label_1bb110;
        case 0x1bb114u: goto label_1bb114;
        case 0x1bb118u: goto label_1bb118;
        case 0x1bb11cu: goto label_1bb11c;
        case 0x1bb120u: goto label_1bb120;
        case 0x1bb124u: goto label_1bb124;
        case 0x1bb128u: goto label_1bb128;
        case 0x1bb12cu: goto label_1bb12c;
        case 0x1bb130u: goto label_1bb130;
        case 0x1bb134u: goto label_1bb134;
        case 0x1bb138u: goto label_1bb138;
        case 0x1bb13cu: goto label_1bb13c;
        case 0x1bb140u: goto label_1bb140;
        case 0x1bb144u: goto label_1bb144;
        case 0x1bb148u: goto label_1bb148;
        case 0x1bb14cu: goto label_1bb14c;
        case 0x1bb150u: goto label_1bb150;
        case 0x1bb154u: goto label_1bb154;
        case 0x1bb158u: goto label_1bb158;
        case 0x1bb15cu: goto label_1bb15c;
        case 0x1bb160u: goto label_1bb160;
        case 0x1bb164u: goto label_1bb164;
        case 0x1bb168u: goto label_1bb168;
        case 0x1bb16cu: goto label_1bb16c;
        case 0x1bb170u: goto label_1bb170;
        case 0x1bb174u: goto label_1bb174;
        case 0x1bb178u: goto label_1bb178;
        case 0x1bb17cu: goto label_1bb17c;
        case 0x1bb180u: goto label_1bb180;
        case 0x1bb184u: goto label_1bb184;
        case 0x1bb188u: goto label_1bb188;
        case 0x1bb18cu: goto label_1bb18c;
        case 0x1bb190u: goto label_1bb190;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb198u: goto label_1bb198;
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1a0u: goto label_1bb1a0;
        case 0x1bb1a4u: goto label_1bb1a4;
        case 0x1bb1a8u: goto label_1bb1a8;
        case 0x1bb1acu: goto label_1bb1ac;
        case 0x1bb1b0u: goto label_1bb1b0;
        case 0x1bb1b4u: goto label_1bb1b4;
        case 0x1bb1b8u: goto label_1bb1b8;
        case 0x1bb1bcu: goto label_1bb1bc;
        case 0x1bb1c0u: goto label_1bb1c0;
        case 0x1bb1c4u: goto label_1bb1c4;
        case 0x1bb1c8u: goto label_1bb1c8;
        case 0x1bb1ccu: goto label_1bb1cc;
        case 0x1bb1d0u: goto label_1bb1d0;
        case 0x1bb1d4u: goto label_1bb1d4;
        default: break;
    }

    ctx->pc = 0x1bb078u;

label_1bb078:
    // 0x1bb078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bb07c:
    // 0x1bb07c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bb07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bb080:
    // 0x1bb080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bb084:
    // 0x1bb084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb088:
    // 0x1bb088: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1bb088u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1bb08c:
    // 0x1bb08c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1bb08cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1bb090:
    // 0x1bb090: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1bb094:
    // 0x1bb094: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x1bb094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb098:
    // 0x1bb098: 0xc4550bd8  lwc1        $f21, 0xBD8($v0)
    ctx->pc = 0x1bb098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bb09c:
    // 0x1bb09c: 0xc4540bdc  lwc1        $f20, 0xBDC($v0)
    ctx->pc = 0x1bb09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bb0a0:
    // 0x1bb0a0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1bb0a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_1bb0a4:
    // 0x1bb0a4: 0xc06ec76  jal         func_1BB1D8
label_1bb0a8:
    if (ctx->pc == 0x1BB0A8u) {
        ctx->pc = 0x1BB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0A4u;
        // 0x1bb0a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0ACu;
        goto label_1bb0ac;
    }
    ctx->pc = 0x1BB0A4u;
    SET_GPR_U32(ctx, 31, 0x1BB0ACu);
    ctx->pc = 0x1BB0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0A4u;
    // 0x1bb0a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB1D8u, 0x1BB0A4u, 0x1BB0ACu)) {
        return;
    }
    ctx->pc = 0x1BB0ACu;
label_1bb0ac:
    // 0x1bb0ac: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x1bb0acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1bb0b0:
    // 0x1bb0b0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bb0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1bb0b4:
    // 0x1bb0b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bb0b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1bb0b8:
    // 0x1bb0b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb0bc:
    // 0x1bb0bc: 0x0  nop
    ctx->pc = 0x1bb0bcu;
    // NOP
label_1bb0c0:
    // 0x1bb0c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb0c4:
    // 0x1bb0c4: 0x0  nop
    ctx->pc = 0x1bb0c4u;
    // NOP
label_1bb0c8:
    // 0x1bb0c8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1bb0cc:
    if (ctx->pc == 0x1BB0CCu) {
        ctx->pc = 0x1BB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C8u;
        // 0x1bb0cc: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0D0u;
        goto label_1bb0d0;
    }
    ctx->pc = 0x1BB0C8u;
    {
        const bool branch_taken_0x1bb0c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C8u;
        // 0x1bb0cc: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c8) {
            ctx->pc = 0x1BB0F4u;
            goto label_1bb0f4;
        }
    }
    ctx->pc = 0x1BB0D0u;
label_1bb0d0:
    // 0x1bb0d0: 0x8e060284  lw          $a2, 0x284($s0)
    ctx->pc = 0x1bb0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_1bb0d4:
    // 0x1bb0d4: 0x24a5d7d0  addiu       $a1, $a1, -0x2830
    ctx->pc = 0x1bb0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957008));
label_1bb0d8:
    // 0x1bb0d8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bb0dc:
    // 0x1bb0dc: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1bb0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1bb0e0:
    // 0x1bb0e0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1bb0e4:
    // 0x1bb0e4: 0x60f809  jalr        $v1
label_1bb0e8:
    if (ctx->pc == 0x1BB0E8u) {
        ctx->pc = 0x1BB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0E4u;
        // 0x1bb0e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0ECu;
        goto label_1bb0ec;
    }
    ctx->pc = 0x1BB0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB0ECu);
        ctx->pc = 0x1BB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0E4u;
        // 0x1bb0e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB0E4u, 0x1BB0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB0ECu;
label_1bb0ec:
    // 0x1bb0ec: 0x10000034  b           . + 4 + (0x34 << 2)
label_1bb0f0:
    if (ctx->pc == 0x1BB0F0u) {
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ECu;
        // 0x1bb0f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0F4u;
        goto label_1bb0f4;
    }
    ctx->pc = 0x1BB0ECu;
    {
        const bool branch_taken_0x1bb0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ECu;
        // 0x1bb0f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0ec) {
            ctx->pc = 0x1BB1C0u;
            goto label_1bb1c0;
        }
    }
    ctx->pc = 0x1BB0F4u;
label_1bb0f4:
    // 0x1bb0f4: 0x0  nop
    ctx->pc = 0x1bb0f4u;
    // NOP
label_1bb0f8:
    // 0x1bb0f8: 0x0  nop
    ctx->pc = 0x1bb0f8u;
    // NOP
label_1bb0fc:
    // 0x1bb0fc: 0x4615a043  div.s       $f1, $f20, $f21
    ctx->pc = 0x1bb0fcu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[21]);
label_1bb100:
    // 0x1bb100: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1bb104:
    // 0x1bb104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb108:
    // 0x1bb108: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1bb108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_1bb10c:
    // 0x1bb10c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bb10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bb110:
    // 0x1bb110: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1bb110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1bb114:
    // 0x1bb114: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x1bb114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bb118:
    // 0x1bb118: 0x0  nop
    ctx->pc = 0x1bb118u;
    // NOP
label_1bb11c:
    // 0x1bb11c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1bb120:
    if (ctx->pc == 0x1BB120u) {
        ctx->pc = 0x1BB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB11Cu;
        // 0x1bb120: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB124u;
        goto label_1bb124;
    }
    ctx->pc = 0x1BB11Cu;
    {
        const bool branch_taken_0x1bb11c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB11Cu;
        // 0x1bb120: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb11c) {
            ctx->pc = 0x1BB19Cu;
            goto label_1bb19c;
        }
    }
    ctx->pc = 0x1BB124u;
label_1bb124:
    // 0x1bb124: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x1bb124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_1bb128:
    // 0x1bb128: 0x2446d7d8  addiu       $a2, $v0, -0x2828
    ctx->pc = 0x1bb128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957016));
label_1bb12c:
    // 0x1bb12c: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x1bb12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1bb130:
    // 0x1bb130: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x1bb130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1bb134:
    // 0x1bb134: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x1bb134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb138:
    // 0x1bb138: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x1bb138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bb13c:
    // 0x1bb13c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1bb140:
    // 0x1bb140: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bb144:
    // 0x1bb144: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bb144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bb148:
    // 0x1bb148: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x1bb148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_1bb14c:
    // 0x1bb14c: 0x0  nop
    ctx->pc = 0x1bb14cu;
    // NOP
label_1bb150:
    // 0x1bb150: 0x0  nop
    ctx->pc = 0x1bb150u;
    // NOP
label_1bb154:
    // 0x1bb154: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x1bb154u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[13]);
label_1bb158:
    // 0x1bb158: 0x8e060284  lw          $a2, 0x284($s0)
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_1bb15c:
    // 0x1bb15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb160:
    // 0x1bb160: 0x0  nop
    ctx->pc = 0x1bb160u;
    // NOP
label_1bb164:
    // 0x1bb164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bb164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bb168:
    // 0x1bb168: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1bb168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1bb16c:
    // 0x1bb16c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1bb16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bb170:
    // 0x1bb170: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bb174:
    // 0x1bb174: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1bb178:
    // 0x1bb178: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1bb178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bb17c:
    // 0x1bb17c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1bb17cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bb180:
    // 0x1bb180: 0x8cc30258  lw          $v1, 0x258($a2)
    ctx->pc = 0x1bb180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bb184:
    // 0x1bb184: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1bb184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1bb188:
    // 0x1bb188: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1bb188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1bb18c:
    // 0x1bb18c: 0x40f809  jalr        $v0
label_1bb190:
    if (ctx->pc == 0x1BB190u) {
        ctx->pc = 0x1BB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB18Cu;
        // 0x1bb190: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB194u;
        goto label_1bb194;
    }
    ctx->pc = 0x1BB18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB194u);
        ctx->pc = 0x1BB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB18Cu;
        // 0x1bb190: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB18Cu, 0x1BB194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB194u;
label_1bb194:
    // 0x1bb194: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bb198:
    if (ctx->pc == 0x1BB198u) {
        ctx->pc = 0x1BB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB194u;
        // 0x1bb198: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB19Cu;
        goto label_1bb19c;
    }
    ctx->pc = 0x1BB194u;
    {
        const bool branch_taken_0x1bb194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB194u;
        // 0x1bb198: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb194) {
            ctx->pc = 0x1BB1C0u;
            goto label_1bb1c0;
        }
    }
    ctx->pc = 0x1BB19Cu;
label_1bb19c:
    // 0x1bb19c: 0x8e060284  lw          $a2, 0x284($s0)
    ctx->pc = 0x1bb19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_1bb1a0:
    // 0x1bb1a0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1bb1a4:
    // 0x1bb1a4: 0x24a5d780  addiu       $a1, $a1, -0x2880
    ctx->pc = 0x1bb1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956928));
label_1bb1a8:
    // 0x1bb1a8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1bb1ac:
    // 0x1bb1ac: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1bb1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1bb1b0:
    // 0x1bb1b0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1bb1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1bb1b4:
    // 0x1bb1b4: 0x60f809  jalr        $v1
label_1bb1b8:
    if (ctx->pc == 0x1BB1B8u) {
        ctx->pc = 0x1BB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1B4u;
        // 0x1bb1b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB1BCu;
        goto label_1bb1bc;
    }
    ctx->pc = 0x1BB1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BB1BCu);
        ctx->pc = 0x1BB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1B4u;
        // 0x1bb1b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB1B4u, 0x1BB1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB1BCu;
label_1bb1bc:
    // 0x1bb1bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bb1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb1c0:
    // 0x1bb1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb1c4:
    // 0x1bb1c4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1bb1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bb1c8:
    // 0x1bb1c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1bb1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bb1cc:
    // 0x1bb1cc: 0x3e00008  jr          $ra
label_1bb1d0:
    if (ctx->pc == 0x1BB1D0u) {
        ctx->pc = 0x1BB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1CCu;
        // 0x1bb1d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB1D4u;
        goto label_1bb1d4;
    }
    ctx->pc = 0x1BB1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1CCu;
        // 0x1bb1d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB1D4u;
label_1bb1d4:
    // 0x1bb1d4: 0x0  nop
    ctx->pc = 0x1bb1d4u;
    // NOP
    ctx->pc = 0x1bb1d8u;
}
