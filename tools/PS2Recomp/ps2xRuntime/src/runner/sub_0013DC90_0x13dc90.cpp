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

// Function: sub_0013DC90
// Address: 0x13dc90 - 0x13def8
void sub_0013DC90_0x13dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DC90_0x13dc90");
#endif

    switch (ctx->pc) {
        case 0x13dcacu: goto label_13dcac;
        case 0x13dcccu: goto label_13dccc;
        case 0x13dd24u: goto label_13dd24;
        case 0x13dd58u: goto label_13dd58;
        case 0x13dd78u: goto label_13dd78;
        case 0x13dd94u: goto label_13dd94;
        case 0x13ddc8u: goto label_13ddc8;
        case 0x13ddf0u: goto label_13ddf0;
        case 0x13ddfcu: goto label_13ddfc;
        case 0x13dea4u: goto label_13dea4;
        case 0x13dec4u: goto label_13dec4;
        case 0x13dee4u: goto label_13dee4;
        default: break;
    }

    ctx->pc = 0x13dc90u;

    // 0x13dc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13dc94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13dc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13dc9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13dc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13dca4: 0xc04ee86  jal         func_13BA18
    ctx->pc = 0x13DCA4u;
    SET_GPR_U32(ctx, 31, 0x13DCACu);
    ctx->pc = 0x13DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCA4u;
    // 0x13dca8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BA18u, 0x13DCA4u, 0x13DCACu)) {
        return;
    }
    ctx->pc = 0x13DCACu;
label_13dcac:
    // 0x13dcac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x13dcb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13dcb4: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x13dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x13dcb8: 0x54830031  bnel        $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x13DCB8u;
    {
        const bool branch_taken_0x13dcb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13dcb8) {
            ctx->pc = 0x13DCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DCB8u;
            // 0x13dcbc: 0x8e2200ec  lw          $v0, 0xEC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DD80u;
            goto label_13dd80;
        }
    }
    ctx->pc = 0x13DCC0u;
    // 0x13dcc0: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x13dcc4: 0xc041eda  jal         func_107B68
    ctx->pc = 0x13DCC4u;
    SET_GPR_U32(ctx, 31, 0x13DCCCu);
    ctx->pc = 0x13DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCC4u;
    // 0x13dcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B68u, 0x13DCC4u, 0x13DCCCu)) {
        return;
    }
    ctx->pc = 0x13DCCCu;
label_13dccc:
    // 0x13dccc: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x13dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x13dcd0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13DCD0u;
    {
        const bool branch_taken_0x13dcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCD0u;
        // 0x13dcd4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcd0) {
            ctx->pc = 0x13DD58u;
            goto label_13dd58;
        }
    }
    ctx->pc = 0x13DCD8u;
    // 0x13dcd8: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x13dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dcdc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x13dcdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dce0: 0x0  nop
    ctx->pc = 0x13dce0u;
    // NOP
    // 0x13dce4: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x13DCE4u;
    {
        const bool branch_taken_0x13dce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13dce4) {
            ctx->pc = 0x13DCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DCE4u;
            // 0x13dce8: 0x8e2400e8  lw          $a0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DD5Cu;
            goto label_13dd5c;
        }
    }
    ctx->pc = 0x13DCECu;
    // 0x13dcec: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x13dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x13dcf0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x13DCF0u;
    {
        const bool branch_taken_0x13dcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dcf0) {
            ctx->pc = 0x13DCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DCF0u;
            // 0x13dcf4: 0x8e2400e8  lw          $a0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DD5Cu;
            goto label_13dd5c;
        }
    }
    ctx->pc = 0x13DCF8u;
    // 0x13dcf8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x13dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x13dcfc: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x13dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13dd00: 0xc62200d8  lwc1        $f2, 0xD8($s1)
    ctx->pc = 0x13dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13dd04: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x13dd04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x13dd08: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x13dd08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x13dd0c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x13dd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dd10: 0x0  nop
    ctx->pc = 0x13dd10u;
    // NOP
    // 0x13dd14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13DD14u;
    {
        const bool branch_taken_0x13dd14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13dd14) {
            ctx->pc = 0x13DD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DD14u;
            // 0x13dd18: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DD1Cu;
            goto label_13dd1c;
        }
    }
    ctx->pc = 0x13DD1Cu;
label_13dd1c:
    // 0x13dd1c: 0xc041edc  jal         func_107B70
    ctx->pc = 0x13DD1Cu;
    SET_GPR_U32(ctx, 31, 0x13DD24u);
    ctx->pc = 0x13DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD1Cu;
    // 0x13dd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B70u, 0x13DD1Cu, 0x13DD24u)) {
        return;
    }
    ctx->pc = 0x13DD24u;
label_13dd24:
    // 0x13dd24: 0xc62c00d8  lwc1        $f12, 0xD8($s1)
    ctx->pc = 0x13dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13dd28: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x13dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd2c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x13dd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x13dd30: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x13dd30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x13dd34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13dd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13dd38: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x13dd38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x13dd3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13dd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dd40: 0x0  nop
    ctx->pc = 0x13dd40u;
    // NOP
    // 0x13dd44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13DD44u;
    {
        const bool branch_taken_0x13dd44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD44u;
        // 0x13dd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd44) {
            ctx->pc = 0x13DD58u;
            goto label_13dd58;
        }
    }
    ctx->pc = 0x13DD4Cu;
    // 0x13dd4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd50: 0xc041d28  jal         func_1074A0
    ctx->pc = 0x13DD50u;
    SET_GPR_U32(ctx, 31, 0x13DD58u);
    ctx->pc = 0x13DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD50u;
    // 0x13dd54: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1074A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1074A0u, 0x13DD50u, 0x13DD58u)) {
        return;
    }
    ctx->pc = 0x13DD58u;
label_13dd58:
    // 0x13dd58: 0x8e2400e8  lw          $a0, 0xE8($s1)
    ctx->pc = 0x13dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_13dd5c:
    // 0x13dd5c: 0x10800062  beqz        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x13DD5Cu;
    {
        const bool branch_taken_0x13dd5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD5Cu;
        // 0x13dd60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd5c) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DD64u;
    // 0x13dd64: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x13dd68: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x13DD68u;
    {
        const bool branch_taken_0x13dd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD68u;
        // 0x13dd6c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd68) {
            ctx->pc = 0x13DEECu;
            goto label_13deec;
        }
    }
    ctx->pc = 0x13DD70u;
    // 0x13dd70: 0xc041fd6  jal         func_107F58
    ctx->pc = 0x13DD70u;
    SET_GPR_U32(ctx, 31, 0x13DD78u);
    ctx->pc = 0x107F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107F58u, 0x13DD70u, 0x13DD78u)) {
        return;
    }
    ctx->pc = 0x13DD78u;
label_13dd78:
    // 0x13dd78: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x13DD78u;
    {
        const bool branch_taken_0x13dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD78u;
        // 0x13dd7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd78) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DD80u;
label_13dd80:
    // 0x13dd80: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DD80u;
    {
        const bool branch_taken_0x13dd80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13dd80) {
            ctx->pc = 0x13DD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DD80u;
            // 0x13dd84: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DDA8u;
            goto label_13dda8;
        }
    }
    ctx->pc = 0x13DD88u;
    // 0x13dd88: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x13dd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x13dd8c: 0xc041f10  jal         func_107C40
    ctx->pc = 0x13DD8Cu;
    SET_GPR_U32(ctx, 31, 0x13DD94u);
    ctx->pc = 0x13DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD8Cu;
    // 0x13dd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x13DD8Cu, 0x13DD94u)) {
        return;
    }
    ctx->pc = 0x13DD94u;
label_13dd94:
    // 0x13dd94: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x13dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x13dd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dd9c: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x13dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x13dda0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x13DDA0u;
    {
        const bool branch_taken_0x13dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDA0u;
        // 0x13dda4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dda0) {
            ctx->pc = 0x13DEE4u;
            goto label_13dee4;
        }
    }
    ctx->pc = 0x13DDA8u;
label_13dda8:
    // 0x13dda8: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DDA8u;
    {
        const bool branch_taken_0x13dda8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13dda8) {
            ctx->pc = 0x13DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DDA8u;
            // 0x13ddac: 0x8e2200fc  lw          $v0, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DDD0u;
            goto label_13ddd0;
        }
    }
    ctx->pc = 0x13DDB0u;
    // 0x13ddb0: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x13ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x13ddb4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13DDB4u;
    {
        const bool branch_taken_0x13ddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDB4u;
        // 0x13ddb8: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddb4) {
            ctx->pc = 0x13DDFCu;
            goto label_13ddfc;
        }
    }
    ctx->pc = 0x13DDBCu;
    // 0x13ddbc: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x13ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x13ddc0: 0xc041f10  jal         func_107C40
    ctx->pc = 0x13DDC0u;
    SET_GPR_U32(ctx, 31, 0x13DDC8u);
    ctx->pc = 0x13DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDC0u;
    // 0x13ddc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x13DDC0u, 0x13DDC8u)) {
        return;
    }
    ctx->pc = 0x13DDC8u;
label_13ddc8:
    // 0x13ddc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13DDC8u;
    {
        const bool branch_taken_0x13ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDC8u;
        // 0x13ddcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddc8) {
            ctx->pc = 0x13DE00u;
            goto label_13de00;
        }
    }
    ctx->pc = 0x13DDD0u;
label_13ddd0:
    // 0x13ddd0: 0x5482000e  bnel        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13DDD0u;
    {
        const bool branch_taken_0x13ddd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ddd0) {
            ctx->pc = 0x13DDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DDD0u;
            // 0x13ddd4: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DE0Cu;
            goto label_13de0c;
        }
    }
    ctx->pc = 0x13DDD8u;
    // 0x13ddd8: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x13ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x13dddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DDDCu;
    {
        const bool branch_taken_0x13dddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDDCu;
        // 0x13dde0: 0x2630004c  addiu       $s0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dddc) {
            ctx->pc = 0x13DDF0u;
            goto label_13ddf0;
        }
    }
    ctx->pc = 0x13DDE4u;
    // 0x13dde4: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x13dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x13dde8: 0xc041f10  jal         func_107C40
    ctx->pc = 0x13DDE8u;
    SET_GPR_U32(ctx, 31, 0x13DDF0u);
    ctx->pc = 0x13DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDE8u;
    // 0x13ddec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x13DDE8u, 0x13DDF0u)) {
        return;
    }
    ctx->pc = 0x13DDF0u;
label_13ddf0:
    // 0x13ddf0: 0xc62c00dc  lwc1        $f12, 0xDC($s1)
    ctx->pc = 0x13ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13ddf4: 0xc041edc  jal         func_107B70
    ctx->pc = 0x13DDF4u;
    SET_GPR_U32(ctx, 31, 0x13DDFCu);
    ctx->pc = 0x13DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDF4u;
    // 0x13ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B70u, 0x13DDF4u, 0x13DDFCu)) {
        return;
    }
    ctx->pc = 0x13DDFCu;
label_13ddfc:
    // 0x13ddfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13de00:
    // 0x13de00: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x13de00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    // 0x13de04: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x13DE04u;
    {
        const bool branch_taken_0x13de04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE04u;
        // 0x13de08: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de04) {
            ctx->pc = 0x13DEE4u;
            goto label_13dee4;
        }
    }
    ctx->pc = 0x13DE0Cu;
label_13de0c:
    // 0x13de0c: 0x54820027  bnel        $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13DE0Cu;
    {
        const bool branch_taken_0x13de0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13de0c) {
            ctx->pc = 0x13DE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DE0Cu;
            // 0x13de10: 0x8e22010c  lw          $v0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DEACu;
            goto label_13deac;
        }
    }
    ctx->pc = 0x13DE14u;
    // 0x13de14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13de18: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13de1c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x13de1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13de20: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x13de20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13de24: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x13de24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13de28: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x13de28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13de2c: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x13de2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13de30: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x13de30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13de34: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x13de34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13de38: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x13de38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13de3c: 0xb0440017  sdl         $a0, 0x17($v0)
    ctx->pc = 0x13de3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de40: 0xb4440010  sdr         $a0, 0x10($v0)
    ctx->pc = 0x13de40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de44: 0xb045001f  sdl         $a1, 0x1F($v0)
    ctx->pc = 0x13de44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de48: 0xb4450018  sdr         $a1, 0x18($v0)
    ctx->pc = 0x13de48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de4c: 0xb0460027  sdl         $a2, 0x27($v0)
    ctx->pc = 0x13de4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de50: 0xb4460020  sdr         $a2, 0x20($v0)
    ctx->pc = 0x13de50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de54: 0xb047002f  sdl         $a3, 0x2F($v0)
    ctx->pc = 0x13de54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de58: 0xb4470028  sdr         $a3, 0x28($v0)
    ctx->pc = 0x13de58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de5c: 0x68640027  ldl         $a0, 0x27($v1)
    ctx->pc = 0x13de5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13de60: 0x6c640020  ldr         $a0, 0x20($v1)
    ctx->pc = 0x13de60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13de64: 0x6865002f  ldl         $a1, 0x2F($v1)
    ctx->pc = 0x13de64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13de68: 0x6c650028  ldr         $a1, 0x28($v1)
    ctx->pc = 0x13de68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13de6c: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x13de6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13de70: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x13de70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13de74: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x13de74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13de78: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x13de78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13de7c: 0xb0440037  sdl         $a0, 0x37($v0)
    ctx->pc = 0x13de7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de80: 0xb4440030  sdr         $a0, 0x30($v0)
    ctx->pc = 0x13de80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de84: 0xb045003f  sdl         $a1, 0x3F($v0)
    ctx->pc = 0x13de84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de88: 0xb4450038  sdr         $a1, 0x38($v0)
    ctx->pc = 0x13de88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de8c: 0xb0460047  sdl         $a2, 0x47($v0)
    ctx->pc = 0x13de8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de90: 0xb4460040  sdr         $a2, 0x40($v0)
    ctx->pc = 0x13de90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de94: 0xb047004f  sdl         $a3, 0x4F($v0)
    ctx->pc = 0x13de94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de98: 0xb4470048  sdr         $a3, 0x48($v0)
    ctx->pc = 0x13de98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13de9c: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x13DE9Cu;
    SET_GPR_U32(ctx, 31, 0x13DEA4u);
    ctx->pc = 0x13DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE9Cu;
    // 0x13dea0: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x13DE9Cu, 0x13DEA4u)) {
        return;
    }
    ctx->pc = 0x13DEA4u;
label_13dea4:
    // 0x13dea4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13DEA4u;
    {
        const bool branch_taken_0x13dea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEA4u;
        // 0x13dea8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dea4) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DEACu;
label_13deac:
    // 0x13deac: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DEACu;
    {
        const bool branch_taken_0x13deac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13deac) {
            ctx->pc = 0x13DEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DEACu;
            // 0x13deb0: 0x8e220114  lw          $v0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DECCu;
            goto label_13decc;
        }
    }
    ctx->pc = 0x13DEB4u;
    // 0x13deb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13deb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13deb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13deb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13debc: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x13DEBCu;
    SET_GPR_U32(ctx, 31, 0x13DEC4u);
    ctx->pc = 0x13DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DEBCu;
    // 0x13dec0: 0x8c8500c4  lw          $a1, 0xC4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x13DEBCu, 0x13DEC4u)) {
        return;
    }
    ctx->pc = 0x13DEC4u;
label_13dec4:
    // 0x13dec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13DEC4u;
    {
        const bool branch_taken_0x13dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEC4u;
        // 0x13dec8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dec4) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DECCu;
label_13decc:
    // 0x13decc: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DECCu;
    {
        const bool branch_taken_0x13decc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DECCu;
        // 0x13ded0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13decc) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DED4u;
    // 0x13ded4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ded8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dedc: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x13DEDCu;
    SET_GPR_U32(ctx, 31, 0x13DEE4u);
    ctx->pc = 0x13DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DEDCu;
    // 0x13dee0: 0x8c8500c4  lw          $a1, 0xC4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x13DEDCu, 0x13DEE4u)) {
        return;
    }
    ctx->pc = 0x13DEE4u;
label_13dee4:
    // 0x13dee4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13dee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13dee8:
    // 0x13dee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13deec:
    // 0x13deec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13deecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13def0: 0x3e00008  jr          $ra
    ctx->pc = 0x13DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEF0u;
        // 0x13def4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DEF8u;
}
