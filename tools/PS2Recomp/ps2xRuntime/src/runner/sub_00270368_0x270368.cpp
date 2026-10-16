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

// Function: sub_00270368
// Address: 0x270368 - 0x270748
void sub_00270368_0x270368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270368_0x270368");
#endif

    switch (ctx->pc) {
        case 0x2704ccu: goto label_2704cc;
        case 0x270680u: goto label_270680;
        case 0x2706c8u: goto label_2706c8;
        case 0x270704u: goto label_270704;
        default: break;
    }

    ctx->pc = 0x270368u;

    // 0x270368: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x270368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27036c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x270370: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x270370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x270374: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x270374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x270378: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x270378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27037c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x27037cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x270380: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270384: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x270384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x270388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x270388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27038c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x27038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x270390: 0x2438024  and         $s0, $s2, $v1
    ctx->pc = 0x270390u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x270394: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x270394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x270398: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x270398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x27039c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27039Cu;
    {
        const bool branch_taken_0x27039c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2703A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27039Cu;
        // 0x2703a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27039c) {
            ctx->pc = 0x2703B8u;
            goto label_2703b8;
        }
    }
    ctx->pc = 0x2703A4u;
    // 0x2703a4: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x2703a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2703a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2703a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2703ac: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2703ACu;
    {
        const bool branch_taken_0x2703ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703ACu;
        // 0x2703b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703ac) {
            ctx->pc = 0x270730u;
            goto label_270730;
        }
    }
    ctx->pc = 0x2703B4u;
    // 0x2703b4: 0x0  nop
    ctx->pc = 0x2703b4u;
    // NOP
label_2703b8:
    // 0x2703b8: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x2703b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x2703bc: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x2703bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x2703c0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2703c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2703c4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2703C4u;
    {
        const bool branch_taken_0x2703c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2703C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703C4u;
        // 0x2703c8: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703c4) {
            ctx->pc = 0x2704B4u;
            goto label_2704b4;
        }
    }
    ctx->pc = 0x2703CCu;
    // 0x2703cc: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2703CCu;
    {
        const bool branch_taken_0x2703cc = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2703D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703CCu;
        // 0x2703d0: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703cc) {
            ctx->pc = 0x270444u;
            goto label_270444;
        }
    }
    ctx->pc = 0x2703D4u;
    // 0x2703d4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2703d8: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x2703d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x2703dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2703dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2703e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2703e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2703e4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2703e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2703e8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2703e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2703ec: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x2703ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x2703f0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2703F0u;
    {
        const bool branch_taken_0x2703f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2703F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703F0u;
        // 0x2703f4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703f0) {
            ctx->pc = 0x27040Cu;
            goto label_27040c;
        }
    }
    ctx->pc = 0x2703F8u;
    // 0x2703f8: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2703f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2703fc: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x2703fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x270400: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270404: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x270404u;
    {
        const bool branch_taken_0x270404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270404u;
        // 0x270408: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270404) {
            ctx->pc = 0x27042Cu;
            goto label_27042c;
        }
    }
    ctx->pc = 0x27040Cu;
label_27040c:
    // 0x27040c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x27040cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x270410: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x270410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x270414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270418: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x270418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x27041c: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x27041cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x270420: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270424: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x270424u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x270428: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x270428u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_27042c:
    // 0x27042c: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x27042cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x270430: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x270430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x270434: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x270434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x270438: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x270438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27043c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x27043Cu;
    {
        const bool branch_taken_0x27043c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27043Cu;
        // 0x270440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27043c) {
            ctx->pc = 0x270730u;
            goto label_270730;
        }
    }
    ctx->pc = 0x270444u;
label_270444:
    // 0x270444: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x270444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x270448: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x270448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x27044c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27044cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270450: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x270450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x270454: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x270454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x270458: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x270458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x27045c: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x27045cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x270460: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x270460u;
    {
        const bool branch_taken_0x270460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x270464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270460u;
        // 0x270464: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270460) {
            ctx->pc = 0x27047Cu;
            goto label_27047c;
        }
    }
    ctx->pc = 0x270468u;
    // 0x270468: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x270468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x27046c: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x27046cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x270470: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270474: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x270474u;
    {
        const bool branch_taken_0x270474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270474u;
        // 0x270478: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270474) {
            ctx->pc = 0x27049Cu;
            goto label_27049c;
        }
    }
    ctx->pc = 0x27047Cu;
label_27047c:
    // 0x27047c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x27047cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x270480: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x270480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x270484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270488: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x270488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x27048c: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x27048cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x270490: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270494: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x270494u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x270498: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x270498u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_27049c:
    // 0x27049c: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x27049cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2704a0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2704a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2704a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2704a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2704a8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2704a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2704ac: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2704ACu;
    {
        const bool branch_taken_0x2704ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2704B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704ACu;
        // 0x2704b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704ac) {
            ctx->pc = 0x270730u;
            goto label_270730;
        }
    }
    ctx->pc = 0x2704B4u;
label_2704b4:
    // 0x2704b4: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x2704b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x2704b8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2704b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2704bc: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2704BCu;
    {
        const bool branch_taken_0x2704bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2704C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704BCu;
        // 0x2704c0: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704bc) {
            ctx->pc = 0x270638u;
            goto label_270638;
        }
    }
    ctx->pc = 0x2704C4u;
    // 0x2704c4: 0xc09b122  jal         func_26C488
    ctx->pc = 0x2704C4u;
    SET_GPR_U32(ctx, 31, 0x2704CCu);
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x2704C4u, 0x2704CCu)) {
        return;
    }
    ctx->pc = 0x2704CCu;
label_2704cc:
    // 0x2704cc: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x2704ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x2704d0: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x2704d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
    // 0x2704d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2704d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2704d8: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x2704d8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2704dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2704dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2704e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2704e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2704e4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2704e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2704e8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2704e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2704ec: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x2704ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x2704f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2704f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2704f4: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x2704f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x2704f8: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x2704f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x2704fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2704fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x270500: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x270500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x270504: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x270508: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x270508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x27050c: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x27050cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x270510: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x270510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x270514: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x270514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x270518: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x270518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x27051c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x27051cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x270520: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x270520u;
    {
        const bool branch_taken_0x270520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270520u;
        // 0x270524: 0x46002901  sub.s       $f4, $f5, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270520) {
            ctx->pc = 0x27055Cu;
            goto label_27055c;
        }
    }
    ctx->pc = 0x270528u;
    // 0x270528: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x270528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x27052c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x27052cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x270530: 0x2484c808  addiu       $a0, $a0, -0x37F8
    ctx->pc = 0x270530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
    // 0x270534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x270534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x270538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x270538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27053c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x270540: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x270540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x270544: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270548: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x270548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x27054c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27054Cu;
    {
        const bool branch_taken_0x27054c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x270550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27054Cu;
        // 0x270550: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27054c) {
            ctx->pc = 0x270560u;
            goto label_270560;
        }
    }
    ctx->pc = 0x270554u;
    // 0x270554: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x270554u;
    {
        const bool branch_taken_0x270554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270554u;
        // 0x270558: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270554) {
            ctx->pc = 0x270618u;
            goto label_270618;
        }
    }
    ctx->pc = 0x27055Cu;
label_27055c:
    // 0x27055c: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x27055cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_270560:
    // 0x270560: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x270560u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x270564: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x270564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x270568: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x270568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x27056c: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x27056cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x270570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x270570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x270574: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x270574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x270578: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x270578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x27057c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x27057Cu;
    {
        const bool branch_taken_0x27057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27057c) {
            ctx->pc = 0x270580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27057Cu;
            // 0x270580: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27061Cu;
            goto label_27061c;
        }
    }
    ctx->pc = 0x270584u;
    // 0x270584: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x270584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x270588: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x270588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x27058c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27058cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270590: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x270590u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x270594: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x270594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x270598: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x270598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x27059c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27059cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2705a0: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x2705a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2705a4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2705a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2705a8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2705a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2705ac: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x2705acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2705b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2705b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2705b4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2705b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2705b8: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x2705b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2705bc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2705bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2705c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2705c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2705c4: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x2705c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2705c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2705c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2705cc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2705ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2705d0: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x2705d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x2705d4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2705D4u;
    {
        const bool branch_taken_0x2705d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2705d4) {
            ctx->pc = 0x2705D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2705D4u;
            // 0x2705d8: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27061Cu;
            goto label_27061c;
        }
    }
    ctx->pc = 0x2705DCu;
    // 0x2705dc: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x2705dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x2705e0: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x2705e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x2705e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2705e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2705e8: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x2705e8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x2705ec: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x2705ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x2705f0: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x2705f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x2705f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2705f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2705f8: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x2705f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2705fc: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2705fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x270600: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x270600u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x270604: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x270604u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x270608: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x270608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27060c: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x27060cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270610: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x270610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x270614: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x270614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_270618:
    // 0x270618: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x270618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27061c:
    // 0x27061c: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x27061cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x270620: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x270620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x270624: 0x6410041  bgez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x270624u;
    {
        const bool branch_taken_0x270624 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x270628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270624u;
        // 0x270628: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270624) {
            ctx->pc = 0x27072Cu;
            goto label_27072c;
        }
    }
    ctx->pc = 0x27062Cu;
    // 0x27062c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x27062cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x270630: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x270630u;
    {
        const bool branch_taken_0x270630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270630u;
        // 0x270634: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270630) {
            ctx->pc = 0x27071Cu;
            goto label_27071c;
        }
    }
    ctx->pc = 0x270638u;
label_270638:
    // 0x270638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x270638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27063c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x27063cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x270640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270640u;
    {
        const bool branch_taken_0x270640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270640u;
        // 0x270644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270640) {
            ctx->pc = 0x270658u;
            goto label_270658;
        }
    }
    ctx->pc = 0x270648u;
    // 0x270648: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x270648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x27064c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x270650: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x270650u;
    {
        const bool branch_taken_0x270650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270650u;
        // 0x270654: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270650) {
            ctx->pc = 0x270730u;
            goto label_270730;
        }
    }
    ctx->pc = 0x270658u;
label_270658:
    // 0x270658: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x270658u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x27065c: 0x2466ff7a  addiu       $a2, $v1, -0x86
    ctx->pc = 0x27065cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967162));
    // 0x270660: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x270660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x270664: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x270664u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x270668: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x270668u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27066c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27066cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x270670: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x270678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27067c: 0x0  nop
    ctx->pc = 0x27067cu;
    // NOP
label_270680:
    // 0x270680: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x270684: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x270684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x270688: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x270688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27068c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x270690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x270694: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x270694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x270698: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x270698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x27069c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x27069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2706a0: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2706A0u;
    {
        const bool branch_taken_0x2706a0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2706A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A0u;
        // 0x2706a4: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706a0) {
            ctx->pc = 0x270680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270680;
        }
    }
    ctx->pc = 0x2706A8u;
    // 0x2706a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2706a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2706ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2706acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2706b0: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x2706b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2706b4: 0x0  nop
    ctx->pc = 0x2706b4u;
    // NOP
    // 0x2706b8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2706B8u;
    {
        const bool branch_taken_0x2706b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2706BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706B8u;
        // 0x2706bc: 0xe7ac0008  swc1        $f12, 0x8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706b8) {
            ctx->pc = 0x2706ECu;
            goto label_2706ec;
        }
    }
    ctx->pc = 0x2706C0u;
    // 0x2706c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2706c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2706c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2706c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2706c8:
    // 0x2706c8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2706c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2706cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2706ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2706d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2706d4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2706d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2706d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2706d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2706dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2706dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2706e0: 0x0  nop
    ctx->pc = 0x2706e0u;
    // NOP
    // 0x2706e4: 0x4503fff8  bc1tl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x2706E4u;
    {
        const bool branch_taken_0x2706e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2706e4) {
            ctx->pc = 0x2706E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706E4u;
            // 0x2706e8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2706C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2706ECu;
label_2706ec:
    // 0x2706ec: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x2706ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
    // 0x2706f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2706f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706f4: 0x2529c4f0  addiu       $t1, $t1, -0x3B10
    ctx->pc = 0x2706f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952176));
    // 0x2706f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2706f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706fc: 0xc09c65a  jal         func_271968
    ctx->pc = 0x2706FCu;
    SET_GPR_U32(ctx, 31, 0x270704u);
    ctx->pc = 0x270700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706FCu;
    // 0x270700: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x271968u, 0x2706FCu, 0x270704u)) {
        return;
    }
    ctx->pc = 0x270704u;
label_270704:
    // 0x270704: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x270704u;
    {
        const bool branch_taken_0x270704 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x270708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270704u;
        // 0x270708: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270704) {
            ctx->pc = 0x27072Cu;
            goto label_27072c;
        }
    }
    ctx->pc = 0x27070Cu;
    // 0x27070c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270710: 0x51023  negu        $v0, $a1
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x270714: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x270714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270718: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x270718u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_27071c:
    // 0x27071c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27071cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x270720: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x270720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x270724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x270724u;
    {
        const bool branch_taken_0x270724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270724u;
        // 0x270728: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270724) {
            ctx->pc = 0x270730u;
            goto label_270730;
        }
    }
    ctx->pc = 0x27072Cu;
label_27072c:
    // 0x27072c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x27072cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_270730:
    // 0x270730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x270730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270734: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x270734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270738: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x270738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27073c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27073cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270740: 0x3e00008  jr          $ra
    ctx->pc = 0x270740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270740u;
        // 0x270744: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270748u;
}
