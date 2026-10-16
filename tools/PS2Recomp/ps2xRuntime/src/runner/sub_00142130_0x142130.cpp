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

// Function: sub_00142130
// Address: 0x142130 - 0x1424b0
void sub_00142130_0x142130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142130_0x142130");
#endif

    switch (ctx->pc) {
        case 0x14214cu: goto label_14214c;
        case 0x142178u: goto label_142178;
        case 0x142180u: goto label_142180;
        case 0x142188u: goto label_142188;
        case 0x142190u: goto label_142190;
        case 0x1421a8u: goto label_1421a8;
        case 0x1421b4u: goto label_1421b4;
        case 0x1421c0u: goto label_1421c0;
        case 0x1421c8u: goto label_1421c8;
        case 0x1421dcu: goto label_1421dc;
        case 0x1421e4u: goto label_1421e4;
        case 0x1421f0u: goto label_1421f0;
        case 0x1421f8u: goto label_1421f8;
        case 0x142204u: goto label_142204;
        case 0x142210u: goto label_142210;
        case 0x14221cu: goto label_14221c;
        case 0x142258u: goto label_142258;
        case 0x14226cu: goto label_14226c;
        case 0x142274u: goto label_142274;
        case 0x1422b8u: goto label_1422b8;
        case 0x1422c4u: goto label_1422c4;
        case 0x142334u: goto label_142334;
        case 0x142340u: goto label_142340;
        case 0x142358u: goto label_142358;
        case 0x142394u: goto label_142394;
        case 0x1423c0u: goto label_1423c0;
        case 0x142448u: goto label_142448;
        case 0x142458u: goto label_142458;
        default: break;
    }

    ctx->pc = 0x142130u;

    // 0x142130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x142134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x142138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14213c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142140: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x142140u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x142144: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x142144u;
    SET_GPR_U32(ctx, 31, 0x14214Cu);
    ctx->pc = 0x142148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142144u;
    // 0x142148: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x142144u, 0x14214Cu)) {
        return;
    }
    ctx->pc = 0x14214Cu;
label_14214c:
    // 0x14214c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x142150: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x142154: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x142154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x142158: 0x24630f60  addiu       $v1, $v1, 0xF60
    ctx->pc = 0x142158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3936));
    // 0x14215c: 0x24a50f80  addiu       $a1, $a1, 0xF80
    ctx->pc = 0x14215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3968));
    // 0x142160: 0x24420f48  addiu       $v0, $v0, 0xF48
    ctx->pc = 0x142160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3912));
    // 0x142164: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x142164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x142168: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x142168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x14216c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x14216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x142170: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x142170u;
    SET_GPR_U32(ctx, 31, 0x142178u);
    ctx->pc = 0x142174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142170u;
    // 0x142174: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x142170u, 0x142178u)) {
        return;
    }
    ctx->pc = 0x142178u;
label_142178:
    // 0x142178: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x142178u;
    SET_GPR_U32(ctx, 31, 0x142180u);
    ctx->pc = 0x14217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142178u;
    // 0x14217c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x142178u, 0x142180u)) {
        return;
    }
    ctx->pc = 0x142180u;
label_142180:
    // 0x142180: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x142180u;
    SET_GPR_U32(ctx, 31, 0x142188u);
    ctx->pc = 0x142184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142180u;
    // 0x142184: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x142180u, 0x142188u)) {
        return;
    }
    ctx->pc = 0x142188u;
label_142188:
    // 0x142188: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x142188u;
    SET_GPR_U32(ctx, 31, 0x142190u);
    ctx->pc = 0x14218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142188u;
    // 0x14218c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x142188u, 0x142190u)) {
        return;
    }
    ctx->pc = 0x142190u;
label_142190:
    // 0x142190: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x142190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x142194: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x142194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x142198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14219c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x14219cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1421a0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1421A0u;
    SET_GPR_U32(ctx, 31, 0x1421A8u);
    ctx->pc = 0x1421A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421A0u;
    // 0x1421a4: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1421A0u, 0x1421A8u)) {
        return;
    }
    ctx->pc = 0x1421A8u;
label_1421a8:
    // 0x1421a8: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1421a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1421ac: 0xc095e0c  jal         func_257830
    ctx->pc = 0x1421ACu;
    SET_GPR_U32(ctx, 31, 0x1421B4u);
    ctx->pc = 0x1421B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421ACu;
    // 0x1421b0: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x1421ACu, 0x1421B4u)) {
        return;
    }
    ctx->pc = 0x1421B4u;
label_1421b4:
    // 0x1421b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1421b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1421b8: 0xc095e0c  jal         func_257830
    ctx->pc = 0x1421B8u;
    SET_GPR_U32(ctx, 31, 0x1421C0u);
    ctx->pc = 0x1421BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421B8u;
    // 0x1421bc: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x1421B8u, 0x1421C0u)) {
        return;
    }
    ctx->pc = 0x1421C0u;
label_1421c0:
    // 0x1421c0: 0xc08949c  jal         func_225270
    ctx->pc = 0x1421C0u;
    SET_GPR_U32(ctx, 31, 0x1421C8u);
    ctx->pc = 0x1421C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421C0u;
    // 0x1421c4: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225270u, 0x1421C0u, 0x1421C8u)) {
        return;
    }
    ctx->pc = 0x1421C8u;
label_1421c8:
    // 0x1421c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1421c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1421cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1421ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1421d0: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1421d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x1421d4: 0xc089892  jal         func_226248
    ctx->pc = 0x1421D4u;
    SET_GPR_U32(ctx, 31, 0x1421DCu);
    ctx->pc = 0x1421D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421D4u;
    // 0x1421d8: 0xe600017c  swc1        $f0, 0x17C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1421D4u, 0x1421DCu)) {
        return;
    }
    ctx->pc = 0x1421DCu;
label_1421dc:
    // 0x1421dc: 0xc089892  jal         func_226248
    ctx->pc = 0x1421DCu;
    SET_GPR_U32(ctx, 31, 0x1421E4u);
    ctx->pc = 0x1421E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421DCu;
    // 0x1421e0: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1421DCu, 0x1421E4u)) {
        return;
    }
    ctx->pc = 0x1421E4u;
label_1421e4:
    // 0x1421e4: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x1421e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1421e8: 0xc089a04  jal         func_226810
    ctx->pc = 0x1421E8u;
    SET_GPR_U32(ctx, 31, 0x1421F0u);
    ctx->pc = 0x1421ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421E8u;
    // 0x1421ec: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1421E8u, 0x1421F0u)) {
        return;
    }
    ctx->pc = 0x1421F0u;
label_1421f0:
    // 0x1421f0: 0xc089a04  jal         func_226810
    ctx->pc = 0x1421F0u;
    SET_GPR_U32(ctx, 31, 0x1421F8u);
    ctx->pc = 0x1421F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421F0u;
    // 0x1421f4: 0x8e040124  lw          $a0, 0x124($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1421F0u, 0x1421F8u)) {
        return;
    }
    ctx->pc = 0x1421F8u;
label_1421f8:
    // 0x1421f8: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x1421f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1421fc: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1421FCu;
    SET_GPR_U32(ctx, 31, 0x142204u);
    ctx->pc = 0x142200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421FCu;
    // 0x142200: 0x8e050120  lw          $a1, 0x120($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1421FCu, 0x142204u)) {
        return;
    }
    ctx->pc = 0x142204u;
label_142204:
    // 0x142204: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x142204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x142208: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x142208u;
    SET_GPR_U32(ctx, 31, 0x142210u);
    ctx->pc = 0x14220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142208u;
    // 0x14220c: 0x8e050124  lw          $a1, 0x124($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x142208u, 0x142210u)) {
        return;
    }
    ctx->pc = 0x142210u;
label_142210:
    // 0x142210: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x142210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x142214: 0xc089436  jal         func_2250D8
    ctx->pc = 0x142214u;
    SET_GPR_U32(ctx, 31, 0x14221Cu);
    ctx->pc = 0x142218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142214u;
    // 0x142218: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2250D8u, 0x142214u, 0x14221Cu)) {
        return;
    }
    ctx->pc = 0x14221Cu;
label_14221c:
    // 0x14221c: 0xc600017c  lwc1        $f0, 0x17C($s0)
    ctx->pc = 0x14221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142220: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x142220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x142224: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x142224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x142228: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14222c: 0x0  nop
    ctx->pc = 0x14222cu;
    // NOP
    // 0x142230: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x142230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142234: 0x0  nop
    ctx->pc = 0x142234u;
    // NOP
    // 0x142238: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x142238u;
    {
        const bool branch_taken_0x142238 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142238u;
        // 0x14223c: 0xe6000180  swc1        $f0, 0x180($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142238) {
            ctx->pc = 0x142244u;
            goto label_142244;
        }
    }
    ctx->pc = 0x142240u;
    // 0x142240: 0xe6010180  swc1        $f1, 0x180($s0)
    ctx->pc = 0x142240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_142244:
    // 0x142244: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x142244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x142248: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x142248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x14224c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14224cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x142250: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x142250u;
    SET_GPR_U32(ctx, 31, 0x142258u);
    ctx->pc = 0x142254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142250u;
    // 0x142254: 0xc60c0180  lwc1        $f12, 0x180($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x142250u, 0x142258u)) {
        return;
    }
    ctx->pc = 0x142258u;
label_142258:
    // 0x142258: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x142258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14225c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14225cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x142260: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x142260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x142264: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x142264u;
    SET_GPR_U32(ctx, 31, 0x14226Cu);
    ctx->pc = 0x142268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142264u;
    // 0x142268: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x142264u, 0x14226Cu)) {
        return;
    }
    ctx->pc = 0x14226Cu;
label_14226c:
    // 0x14226c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x14226Cu;
    SET_GPR_U32(ctx, 31, 0x142274u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14226Cu, 0x142274u)) {
        return;
    }
    ctx->pc = 0x142274u;
label_142274:
    // 0x142274: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x142274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x142278: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x14227c: 0x8c64848c  lw          $a0, -0x7B74($v1)
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33848Cu));
    // 0x142280: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x142280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x142284: 0xaca40060  sw          $a0, 0x60($a1)
    ctx->pc = 0x142284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 4));
    // 0x142288: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x142288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x14228c: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x142290: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x142290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x142294: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142298: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14229c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x14229cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x1422a0: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x1422a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x1422a4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1422a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1422a8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1422a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1422ac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1422acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1422b0: 0xc095d54  jal         func_257550
    ctx->pc = 0x1422B0u;
    SET_GPR_U32(ctx, 31, 0x1422B8u);
    ctx->pc = 0x1422B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422B0u;
    // 0x1422b4: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257550u, 0x1422B0u, 0x1422B8u)) {
        return;
    }
    ctx->pc = 0x1422B8u;
label_1422b8:
    // 0x1422b8: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x1422b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1422bc: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x1422BCu;
    SET_GPR_U32(ctx, 31, 0x1422C4u);
    ctx->pc = 0x1422C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422BCu;
    // 0x1422c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x1422BCu, 0x1422C4u)) {
        return;
    }
    ctx->pc = 0x1422C4u;
label_1422c4:
    // 0x1422c4: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1422c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1422c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1422c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1422cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1422d0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1422d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1422d4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1422d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1422d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1422d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1422dc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1422dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1422e0: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x1422e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x1422e4: 0xe6010174  swc1        $f1, 0x174($s0)
    ctx->pc = 0x1422e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x1422e8: 0xe6150178  swc1        $f21, 0x178($s0)
    ctx->pc = 0x1422e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x1422ec: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x1422ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x1422f0: 0xae0601c4  sw          $a2, 0x1C4($s0)
    ctx->pc = 0x1422f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 6));
    // 0x1422f4: 0x8c82870c  lw          $v0, -0x78F4($a0)
    ctx->pc = 0x1422f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1422f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1422fc: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x142300: 0xae0500f4  sw          $a1, 0xF4($s0)
    ctx->pc = 0x142300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 5));
    // 0x142304: 0x8c82870c  lw          $v0, -0x78F4($a0)
    ctx->pc = 0x142304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x142308: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x142308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14230c: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x142310: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142310u;
    {
        const bool branch_taken_0x142310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x142314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142310u;
        // 0x142314: 0xae0400f0  sw          $a0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142310) {
            ctx->pc = 0x142324u;
            goto label_142324;
        }
    }
    ctx->pc = 0x142318u;
    // 0x142318: 0xae0500f0  sw          $a1, 0xF0($s0)
    ctx->pc = 0x142318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 5));
    // 0x14231c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14231Cu;
    {
        const bool branch_taken_0x14231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14231Cu;
        // 0x142320: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14231c) {
            ctx->pc = 0x142328u;
            goto label_142328;
        }
    }
    ctx->pc = 0x142324u;
label_142324:
    // 0x142324: 0xae060108  sw          $a2, 0x108($s0)
    ctx->pc = 0x142324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 6));
label_142328:
    // 0x142328: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14232c: 0xc097910  jal         func_25E440
    ctx->pc = 0x14232Cu;
    SET_GPR_U32(ctx, 31, 0x142334u);
    ctx->pc = 0x142330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14232Cu;
    // 0x142330: 0x8e05011c  lw          $a1, 0x11C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x14232Cu, 0x142334u)) {
        return;
    }
    ctx->pc = 0x142334u;
label_142334:
    // 0x142334: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x142338: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x142338u;
    SET_GPR_U32(ctx, 31, 0x142340u);
    ctx->pc = 0x14233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142338u;
    // 0x14233c: 0x8e050114  lw          $a1, 0x114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x142338u, 0x142340u)) {
        return;
    }
    ctx->pc = 0x142340u;
label_142340:
    // 0x142340: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x142340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x142344: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x142344u;
    {
        const bool branch_taken_0x142344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142344) {
            ctx->pc = 0x142348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142344u;
            // 0x142348: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14235Cu;
            goto label_14235c;
        }
    }
    ctx->pc = 0x14234Cu;
    // 0x14234c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x142350: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x142350u;
    SET_GPR_U32(ctx, 31, 0x142358u);
    ctx->pc = 0x142354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142350u;
    // 0x142354: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x142350u, 0x142358u)) {
        return;
    }
    ctx->pc = 0x142358u;
label_142358:
    // 0x142358: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x142358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_14235c:
    // 0x14235c: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x14235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x142360: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x142360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x142364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142368: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x142368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x14236c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x14236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142370: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x142370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x142374: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x142374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x142378: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x142378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x14237c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x14237cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x142380: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x142380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x142384: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x142384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x142388: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x142388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x14238c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14238Cu;
    SET_GPR_U32(ctx, 31, 0x142394u);
    ctx->pc = 0x142390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14238Cu;
    // 0x142390: 0xae0001a4  sw          $zero, 0x1A4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14238Cu, 0x142394u)) {
        return;
    }
    ctx->pc = 0x142394u;
label_142394:
    // 0x142394: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x142394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x142398: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x142398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x14239c: 0x244c48c0  addiu       $t4, $v0, 0x48C0
    ctx->pc = 0x14239cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x1423a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1423a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1423a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1423a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1423a8: 0x3c0e0034  lui         $t6, 0x34
    ctx->pc = 0x1423a8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)52 << 16));
    // 0x1423ac: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x1423acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1423b0: 0x246b4dc0  addiu       $t3, $v1, 0x4DC0
    ctx->pc = 0x1423b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 19904));
    // 0x1423b4: 0x244a49c0  addiu       $t2, $v0, 0x49C0
    ctx->pc = 0x1423b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x1423b8: 0x248951c0  addiu       $t1, $a0, 0x51C0
    ctx->pc = 0x1423b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
    // 0x1423bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1423bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1423c0:
    // 0x1423c0: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x1423c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1423c4: 0x83400  sll         $a2, $t0, 16
    ctx->pc = 0x1423c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1423c8: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x1423c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1423cc: 0x82e00  sll         $a1, $t0, 24
    ctx->pc = 0x1423ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1423d0: 0x222c2  srl         $a0, $v0, 11
    ctx->pc = 0x1423d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1423d4: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1423d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1423d8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1423d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1423dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1423dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1423e0: 0x3042fc00  andi        $v0, $v0, 0xFC00
    ctx->pc = 0x1423e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64512);
    // 0x1423e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1423e8: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1423e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1423ec: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1423ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1423f0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1423f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1423f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1423f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1423f8: 0x424c0  sll         $a0, $a0, 19
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
    // 0x1423fc: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1423fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x142400: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x142400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x142404: 0x10c3021  addu        $a2, $t0, $t4
    ctx->pc = 0x142404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x142408: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x142408u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x14240c: 0x82027  nor         $a0, $zero, $t0
    ctx->pc = 0x14240cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x142410: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x142410u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x142414: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x142414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x142418: 0xa1250001  sb          $a1, 0x1($t1)
    ctx->pc = 0x142418u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x14241c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x14241cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x142420: 0xa1250002  sb          $a1, 0x2($t1)
    ctx->pc = 0x142420u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x142424: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x142424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x142428: 0xa12d0003  sb          $t5, 0x3($t1)
    ctx->pc = 0x142428u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x14242c: 0x29020100  slti        $v0, $t0, 0x100
    ctx->pc = 0x14242cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x142430: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x142430u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x142434: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x142434u;
    {
        const bool branch_taken_0x142434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142434u;
        // 0x142438: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142434) {
            ctx->pc = 0x1423C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1423c0;
        }
    }
    ctx->pc = 0x14243Cu;
    // 0x14243c: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x14243cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x142440: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x142444: 0x0  nop
    ctx->pc = 0x142444u;
    // NOP
label_142448:
    // 0x142448: 0x8cc3847c  lw          $v1, -0x7B84($a2)
    ctx->pc = 0x142448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294935676)));
    // 0x14244c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14244Cu;
    {
        const bool branch_taken_0x14244c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14244Cu;
        // 0x142450: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14244c) {
            ctx->pc = 0x142470u;
            goto label_142470;
        }
    }
    ctx->pc = 0x142454u;
    // 0x142454: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x142454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_142458:
    // 0x142458: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x142458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x14245c: 0x8c6300ec  lw          $v1, 0xEC($v1)
    ctx->pc = 0x14245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x142460: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x142460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x142464: 0x0  nop
    ctx->pc = 0x142464u;
    // NOP
    // 0x142468: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x142468u;
    {
        const bool branch_taken_0x142468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142468u;
        // 0x14246c: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142468) {
            ctx->pc = 0x142458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142458;
        }
    }
    ctx->pc = 0x142470u;
label_142470:
    // 0x142470: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142470u;
    {
        const bool branch_taken_0x142470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x142474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142470u;
        // 0x142474: 0x8dc3847c  lw          $v1, -0x7B84($t6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294935676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142470) {
            ctx->pc = 0x142488u;
            goto label_142488;
        }
    }
    ctx->pc = 0x142478u;
    // 0x142478: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x14247c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142480: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x142480u;
    {
        const bool branch_taken_0x142480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142480u;
        // 0x142484: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142480) {
            ctx->pc = 0x142448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142448;
        }
    }
    ctx->pc = 0x142488u;
label_142488:
    // 0x142488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x142488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14248c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142490: 0xae0300ec  sw          $v1, 0xEC($s0)
    ctx->pc = 0x142490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
    // 0x142494: 0xadd0847c  sw          $s0, -0x7B84($t6)
    ctx->pc = 0x142494u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294935676), GPR_U32(ctx, 16));
    // 0x142498: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14249c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x14249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1424a0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1424a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1424a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1424A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1424A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424A4u;
        // 0x1424a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1424A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1424ACu;
    // 0x1424ac: 0x0  nop
    ctx->pc = 0x1424acu;
    // NOP
    ctx->pc = 0x1424b0u;
}
