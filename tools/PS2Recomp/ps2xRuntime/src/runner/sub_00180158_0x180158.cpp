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

// Function: sub_00180158
// Address: 0x180158 - 0x1802f8
void sub_00180158_0x180158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180158_0x180158");
#endif

    switch (ctx->pc) {
        case 0x18017cu: goto label_18017c;
        case 0x18018cu: goto label_18018c;
        case 0x180198u: goto label_180198;
        case 0x1801c0u: goto label_1801c0;
        case 0x1801d0u: goto label_1801d0;
        case 0x1801d8u: goto label_1801d8;
        case 0x1801e8u: goto label_1801e8;
        case 0x1801f0u: goto label_1801f0;
        case 0x180200u: goto label_180200;
        case 0x180210u: goto label_180210;
        case 0x18021cu: goto label_18021c;
        case 0x180228u: goto label_180228;
        case 0x180240u: goto label_180240;
        case 0x180248u: goto label_180248;
        case 0x18026cu: goto label_18026c;
        case 0x180284u: goto label_180284;
        case 0x1802b0u: goto label_1802b0;
        case 0x1802b8u: goto label_1802b8;
        case 0x1802ccu: goto label_1802cc;
        default: break;
    }

    ctx->pc = 0x180158u;

    // 0x180158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18015c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x18015cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x180160: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x180160u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x180164: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x180164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x180168: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18016c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180174: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x180174u;
    SET_GPR_U32(ctx, 31, 0x18017Cu);
    ctx->pc = 0x180178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180174u;
    // 0x180178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x180174u, 0x18017Cu)) {
        return;
    }
    ctx->pc = 0x18017Cu;
label_18017c:
    // 0x18017c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x18017cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x180180: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x180180u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x180184: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x180184u;
    SET_GPR_U32(ctx, 31, 0x18018Cu);
    ctx->pc = 0x180188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180184u;
    // 0x180188: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x180184u, 0x18018Cu)) {
        return;
    }
    ctx->pc = 0x18018Cu;
label_18018c:
    // 0x18018c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x18018cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x180190: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x180190u;
    SET_GPR_U32(ctx, 31, 0x180198u);
    ctx->pc = 0x180194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180190u;
    // 0x180194: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x180190u, 0x180198u)) {
        return;
    }
    ctx->pc = 0x180198u;
label_180198:
    // 0x180198: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x180198u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x18019c: 0x4600a540  add.s       $f21, $f20, $f0
    ctx->pc = 0x18019cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1801a0: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x1801a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1801a4: 0x0  nop
    ctx->pc = 0x1801a4u;
    // NOP
    // 0x1801a8: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x1801A8u;
    {
        const bool branch_taken_0x1801a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1801a8) {
            ctx->pc = 0x1801ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1801A8u;
            // 0x1801ac: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180208u;
            goto label_180208;
        }
    }
    ctx->pc = 0x1801B0u;
    // 0x1801b0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1801b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1801b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1801b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1801b8: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1801B8u;
    SET_GPR_U32(ctx, 31, 0x1801C0u);
    ctx->pc = 0x1801BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801B8u;
    // 0x1801bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1801B8u, 0x1801C0u)) {
        return;
    }
    ctx->pc = 0x1801C0u;
label_1801c0:
    // 0x1801c0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1801c0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x1801c4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1801c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1801c8: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1801C8u;
    SET_GPR_U32(ctx, 31, 0x1801D0u);
    ctx->pc = 0x1801CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801C8u;
    // 0x1801cc: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1801C8u, 0x1801D0u)) {
        return;
    }
    ctx->pc = 0x1801D0u;
label_1801d0:
    // 0x1801d0: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1801D0u;
    SET_GPR_U32(ctx, 31, 0x1801D8u);
    ctx->pc = 0x1801D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801D0u;
    // 0x1801d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1801D0u, 0x1801D8u)) {
        return;
    }
    ctx->pc = 0x1801D8u;
label_1801d8:
    // 0x1801d8: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1801d8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x1801dc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1801dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1801e0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1801E0u;
    SET_GPR_U32(ctx, 31, 0x1801E8u);
    ctx->pc = 0x1801E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801E0u;
    // 0x1801e4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1801E0u, 0x1801E8u)) {
        return;
    }
    ctx->pc = 0x1801E8u;
label_1801e8:
    // 0x1801e8: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1801E8u;
    SET_GPR_U32(ctx, 31, 0x1801F0u);
    ctx->pc = 0x1801ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801E8u;
    // 0x1801ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1801E8u, 0x1801F0u)) {
        return;
    }
    ctx->pc = 0x1801F0u;
label_1801f0:
    // 0x1801f0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1801f0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x1801f4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1801f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1801f8: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1801F8u;
    SET_GPR_U32(ctx, 31, 0x180200u);
    ctx->pc = 0x1801FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801F8u;
    // 0x1801fc: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1801F8u, 0x180200u)) {
        return;
    }
    ctx->pc = 0x180200u;
label_180200:
    // 0x180200: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180200u;
    {
        const bool branch_taken_0x180200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180200u;
        // 0x180204: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180200) {
            ctx->pc = 0x18022Cu;
            goto label_18022c;
        }
    }
    ctx->pc = 0x180208u;
label_180208:
    // 0x180208: 0xc05f910  jal         func_17E440
    ctx->pc = 0x180208u;
    SET_GPR_U32(ctx, 31, 0x180210u);
    ctx->pc = 0x18020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180208u;
    // 0x18020c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x180208u, 0x180210u)) {
        return;
    }
    ctx->pc = 0x180210u;
label_180210:
    // 0x180210: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x180210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x180214: 0xc05f910  jal         func_17E440
    ctx->pc = 0x180214u;
    SET_GPR_U32(ctx, 31, 0x18021Cu);
    ctx->pc = 0x180218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180214u;
    // 0x180218: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x180214u, 0x18021Cu)) {
        return;
    }
    ctx->pc = 0x18021Cu;
label_18021c:
    // 0x18021c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18021cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x180220: 0xc05f910  jal         func_17E440
    ctx->pc = 0x180220u;
    SET_GPR_U32(ctx, 31, 0x180228u);
    ctx->pc = 0x180224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180220u;
    // 0x180224: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x180220u, 0x180228u)) {
        return;
    }
    ctx->pc = 0x180228u;
label_180228:
    // 0x180228: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_18022c:
    // 0x18022c: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
    // 0x180230: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x180230u;
    {
        const bool branch_taken_0x180230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180230u;
        // 0x180234: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180230) {
            ctx->pc = 0x180290u;
            goto label_180290;
        }
    }
    ctx->pc = 0x180238u;
    // 0x180238: 0x24515080  addiu       $s1, $v0, 0x5080
    ctx->pc = 0x180238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x18023c: 0x0  nop
    ctx->pc = 0x18023cu;
    // NOP
label_180240:
    // 0x180240: 0xc05f9ea  jal         func_17E7A8
    ctx->pc = 0x180240u;
    SET_GPR_U32(ctx, 31, 0x180248u);
    ctx->pc = 0x180244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180240u;
    // 0x180244: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E7A8u, 0x180240u, 0x180248u)) {
        return;
    }
    ctx->pc = 0x180248u;
label_180248:
    // 0x180248: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x180248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18024c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x180250: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x180250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x180254: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x180258: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x180258u;
    {
        const bool branch_taken_0x180258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180258u;
        // 0x18025c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180258) {
            ctx->pc = 0x180284u;
            goto label_180284;
        }
    }
    ctx->pc = 0x180260u;
    // 0x180260: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x180260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180264: 0xc05f97c  jal         func_17E5F0
    ctx->pc = 0x180264u;
    SET_GPR_U32(ctx, 31, 0x18026Cu);
    ctx->pc = 0x180268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180264u;
    // 0x180268: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E5F0u, 0x180264u, 0x18026Cu)) {
        return;
    }
    ctx->pc = 0x18026Cu;
label_18026c:
    // 0x18026c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18026Cu;
    {
        const bool branch_taken_0x18026c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18026c) {
            ctx->pc = 0x180270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18026Cu;
            // 0x180270: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180288u;
            goto label_180288;
        }
    }
    ctx->pc = 0x180274u;
    // 0x180274: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x180274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18027c: 0xc05f99a  jal         func_17E668
    ctx->pc = 0x18027Cu;
    SET_GPR_U32(ctx, 31, 0x180284u);
    ctx->pc = 0x180280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18027Cu;
    // 0x180280: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E668u, 0x18027Cu, 0x180284u)) {
        return;
    }
    ctx->pc = 0x180284u;
label_180284:
    // 0x180284: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x180284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_180288:
    // 0x180288: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x180288u;
    {
        const bool branch_taken_0x180288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x180288) {
            ctx->pc = 0x180240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180240;
        }
    }
    ctx->pc = 0x180290u;
label_180290:
    // 0x180290: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x180290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x180294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180298: 0x8c5089ec  lw          $s0, -0x7614($v0)
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3389ECu));
    // 0x18029c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1802a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1802A0u;
    {
        const bool branch_taken_0x1802a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802A0u;
        // 0x1802a4: 0xac4389f0  sw          $v1, -0x7610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802a0) {
            ctx->pc = 0x1802D8u;
            goto label_1802d8;
        }
    }
    ctx->pc = 0x1802A8u;
    // 0x1802a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1802ac: 0x0  nop
    ctx->pc = 0x1802acu;
    // NOP
label_1802b0:
    // 0x1802b0: 0xc05f97c  jal         func_17E5F0
    ctx->pc = 0x1802B0u;
    SET_GPR_U32(ctx, 31, 0x1802B8u);
    ctx->pc = 0x1802B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1802B0u;
    // 0x1802b4: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E5F0u, 0x1802B0u, 0x1802B8u)) {
        return;
    }
    ctx->pc = 0x1802B8u;
label_1802b8:
    // 0x1802b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1802B8u;
    {
        const bool branch_taken_0x1802b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B8u;
        // 0x1802bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802b8) {
            ctx->pc = 0x1802CCu;
            goto label_1802cc;
        }
    }
    ctx->pc = 0x1802C0u;
    // 0x1802c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1802c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1802c4: 0xc05fa26  jal         func_17E898
    ctx->pc = 0x1802C4u;
    SET_GPR_U32(ctx, 31, 0x1802CCu);
    ctx->pc = 0x1802C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1802C4u;
    // 0x1802c8: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E898u, 0x1802C4u, 0x1802CCu)) {
        return;
    }
    ctx->pc = 0x1802CCu;
label_1802cc:
    // 0x1802cc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1802d0: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1802D0u;
    {
        const bool branch_taken_0x1802d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1802d0) {
            ctx->pc = 0x1802D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1802D0u;
            // 0x1802d4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1802B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1802b0;
        }
    }
    ctx->pc = 0x1802D8u;
label_1802d8:
    // 0x1802d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1802d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1802dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1802dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1802e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1802e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1802e4: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1802e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1802e8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1802e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1802ec: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1802ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1802f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1802F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1802F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802F0u;
        // 0x1802f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1802F8u;
}
