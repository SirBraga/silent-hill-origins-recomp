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

// Function: sub_0026F7F0
// Address: 0x26f7f0 - 0x26fad8
void sub_0026F7F0_0x26f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F7F0_0x26f7f0");
#endif

    switch (ctx->pc) {
        case 0x26f854u: goto label_26f854;
        case 0x26f8a0u: goto label_26f8a0;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa30u: goto label_26fa30;
        default: break;
    }

    ctx->pc = 0x26f7f0u;

    // 0x26f7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f7f4: 0x44086800  mfc1        $t0, $f13
    ctx->pc = 0x26f7f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x26f7f8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x26f7f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x26f7fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f800: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x26f800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f804: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26f808: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f80c: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x26f80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x26f810: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26f810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26f814: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x26f814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f818: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x26f818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x26f81c: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x26f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x26f820: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x26f820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26f824: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F824u;
    {
        const bool branch_taken_0x26f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F824u;
        // 0x26f828: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f824) {
            ctx->pc = 0x26F838u;
            goto label_26f838;
        }
    }
    ctx->pc = 0x26F82Cu;
    // 0x26f82c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x26f82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f830: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F830u;
    {
        const bool branch_taken_0x26f830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F830u;
        // 0x26f834: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f830) {
            ctx->pc = 0x26F844u;
            goto label_26f844;
        }
    }
    ctx->pc = 0x26F838u;
label_26f838:
    // 0x26f838: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x26f838u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f83c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x26F83Cu;
    {
        const bool branch_taken_0x26f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F83Cu;
        // 0x26f840: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f83c) {
            ctx->pc = 0x26FAC8u;
            goto label_26fac8;
        }
    }
    ctx->pc = 0x26F844u;
label_26f844:
    // 0x26f844: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F844u;
    {
        const bool branch_taken_0x26f844 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F844u;
        // 0x26f848: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f844) {
            ctx->pc = 0x26F85Cu;
            goto label_26f85c;
        }
    }
    ctx->pc = 0x26F84Cu;
    // 0x26f84c: 0xc09b008  jal         func_26C020
    ctx->pc = 0x26F84Cu;
    SET_GPR_U32(ctx, 31, 0x26F854u);
    ctx->pc = 0x26F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F84Cu;
    // 0x26f850: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C020u, 0x26F84Cu, 0x26F854u)) {
        return;
    }
    ctx->pc = 0x26F854u;
label_26f854:
    // 0x26f854: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x26F854u;
    {
        const bool branch_taken_0x26f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F854u;
        // 0x26f858: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f854) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F85Cu;
label_26f85c:
    // 0x26f85c: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x26f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x26f860: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26f860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26f864: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x26F864u;
    {
        const bool branch_taken_0x26f864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F864u;
        // 0x26f868: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f864) {
            ctx->pc = 0x26F898u;
            goto label_26f898;
        }
    }
    ctx->pc = 0x26F86Cu;
    // 0x26f86c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f870: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26F870u;
    {
        const bool branch_taken_0x26f870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F870u;
        // 0x26f874: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f870) {
            ctx->pc = 0x26F9B0u;
            goto label_26f9b0;
        }
    }
    ctx->pc = 0x26F878u;
    // 0x26f878: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F878u;
    {
        const bool branch_taken_0x26f878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F878u;
        // 0x26f87c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f878) {
            ctx->pc = 0x26F890u;
            goto label_26f890;
        }
    }
    ctx->pc = 0x26F880u;
    // 0x26f880: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x26F880u;
    {
        const bool branch_taken_0x26f880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f880) {
            ctx->pc = 0x26F9C4u;
            goto label_26f9c4;
        }
    }
    ctx->pc = 0x26F888u;
    // 0x26f888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F888u;
    {
        const bool branch_taken_0x26f888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f888) {
            ctx->pc = 0x26F898u;
            goto label_26f898;
        }
    }
    ctx->pc = 0x26F890u;
label_26f890:
    // 0x26f890: 0x601008e  bgez        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x26F890u;
    {
        const bool branch_taken_0x26f890 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x26F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F890u;
        // 0x26f894: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f890) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F898u;
label_26f898:
    // 0x26f898: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F898u;
    {
        const bool branch_taken_0x26f898 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F898u;
        // 0x26f89c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f898) {
            ctx->pc = 0x26F8C8u;
            goto label_26f8c8;
        }
    }
    ctx->pc = 0x26F8A0u;
label_26f8a0:
    // 0x26f8a0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26f8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26f8a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f8ac: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x26F8ACu;
    {
        const bool branch_taken_0x26f8ac = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x26F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8ACu;
        // 0x26f8b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8ac) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F8B4u;
    // 0x26f8b4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x26f8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x26f8b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f8b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f8bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f8c0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x26F8C0u;
    {
        const bool branch_taken_0x26f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C0u;
        // 0x26f8c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8c0) {
            ctx->pc = 0x26FAD0u;
            goto label_26fad0;
        }
    }
    ctx->pc = 0x26F8C8u;
label_26f8c8:
    // 0x26f8c8: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x26F8C8u;
    {
        const bool branch_taken_0x26f8c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C8u;
        // 0x26f8cc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8c8) {
            ctx->pc = 0x26F9D8u;
            goto label_26f9d8;
        }
    }
    ctx->pc = 0x26F8D0u;
    // 0x26f8d0: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x26F8D0u;
    {
        const bool branch_taken_0x26f8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x26F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8D0u;
        // 0x26f8d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8d0) {
            ctx->pc = 0x26F960u;
            goto label_26f960;
        }
    }
    ctx->pc = 0x26F8D8u;
    // 0x26f8d8: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26F8D8u;
    {
        const bool branch_taken_0x26f8d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8D8u;
        // 0x26f8dc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8d8) {
            ctx->pc = 0x26F924u;
            goto label_26f924;
        }
    }
    ctx->pc = 0x26F8E0u;
    // 0x26f8e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F8E0u;
    {
        const bool branch_taken_0x26f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8E0u;
        // 0x26f8e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8e0) {
            ctx->pc = 0x26F8F8u;
            goto label_26f8f8;
        }
    }
    ctx->pc = 0x26F8E8u;
    // 0x26f8e8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F8E8u;
    {
        const bool branch_taken_0x26f8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8E8u;
        // 0x26f8ec: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8e8) {
            ctx->pc = 0x26F910u;
            goto label_26f910;
        }
    }
    ctx->pc = 0x26F8F0u;
    // 0x26f8f0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26F8F0u;
    {
        const bool branch_taken_0x26f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f8f0) {
            ctx->pc = 0x26F9D8u;
            goto label_26f9d8;
        }
    }
    ctx->pc = 0x26F8F8u;
label_26f8f8:
    // 0x26f8f8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26F8F8u;
    {
        const bool branch_taken_0x26f8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8F8u;
        // 0x26f8fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8f8) {
            ctx->pc = 0x26F938u;
            goto label_26f938;
        }
    }
    ctx->pc = 0x26F900u;
    // 0x26f900: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26F900u;
    {
        const bool branch_taken_0x26f900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F900u;
        // 0x26f904: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f900) {
            ctx->pc = 0x26F94Cu;
            goto label_26f94c;
        }
    }
    ctx->pc = 0x26F908u;
    // 0x26f908: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x26F908u;
    {
        const bool branch_taken_0x26f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f908) {
            ctx->pc = 0x26F9D8u;
            goto label_26f9d8;
        }
    }
    ctx->pc = 0x26F910u;
label_26f910:
    // 0x26f910: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26f910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x26f914: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f91c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x26F91Cu;
    {
        const bool branch_taken_0x26f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F91Cu;
        // 0x26f920: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f91c) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F924u;
label_26f924:
    // 0x26f924: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x26f924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x26f928: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f92c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f930: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x26F930u;
    {
        const bool branch_taken_0x26f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F930u;
        // 0x26f934: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f930) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F938u;
label_26f938:
    // 0x26f938: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x26f938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x26f93c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x26f93cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x26f940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f944: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x26F944u;
    {
        const bool branch_taken_0x26f944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F944u;
        // 0x26f948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f944) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F94Cu;
label_26f94c:
    // 0x26f94c: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x26f94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x26f950: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x26f950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x26f954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f958: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x26F958u;
    {
        const bool branch_taken_0x26f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F958u;
        // 0x26f95c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f958) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F960u;
label_26f960:
    // 0x26f960: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26F960u;
    {
        const bool branch_taken_0x26f960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F960u;
        // 0x26f964: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f960) {
            ctx->pc = 0x26F9A4u;
            goto label_26f9a4;
        }
    }
    ctx->pc = 0x26F968u;
    // 0x26f968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F968u;
    {
        const bool branch_taken_0x26f968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F968u;
        // 0x26f96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f968) {
            ctx->pc = 0x26F980u;
            goto label_26f980;
        }
    }
    ctx->pc = 0x26F970u;
    // 0x26f970: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F970u;
    {
        const bool branch_taken_0x26f970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F970u;
        // 0x26f974: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f970) {
            ctx->pc = 0x26F998u;
            goto label_26f998;
        }
    }
    ctx->pc = 0x26F978u;
    // 0x26f978: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26F978u;
    {
        const bool branch_taken_0x26f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f978) {
            ctx->pc = 0x26F9D8u;
            goto label_26f9d8;
        }
    }
    ctx->pc = 0x26F980u;
label_26f980:
    // 0x26f980: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F980u;
    {
        const bool branch_taken_0x26f980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F980u;
        // 0x26f984: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f980) {
            ctx->pc = 0x26F9B0u;
            goto label_26f9b0;
        }
    }
    ctx->pc = 0x26F988u;
    // 0x26f988: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26F988u;
    {
        const bool branch_taken_0x26f988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F988u;
        // 0x26f98c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f988) {
            ctx->pc = 0x26F9C4u;
            goto label_26f9c4;
        }
    }
    ctx->pc = 0x26F990u;
    // 0x26f990: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26F990u;
    {
        const bool branch_taken_0x26f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f990) {
            ctx->pc = 0x26F9D8u;
            goto label_26f9d8;
        }
    }
    ctx->pc = 0x26F998u;
label_26f998:
    // 0x26f998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f99c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x26F99Cu;
    {
        const bool branch_taken_0x26f99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F99Cu;
        // 0x26f9a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f99c) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F9A4u;
label_26f9a4:
    // 0x26f9a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26f9a8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x26F9A8u;
    {
        const bool branch_taken_0x26f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9A8u;
        // 0x26f9ac: 0xc440c450  lwc1        $f0, -0x3BB0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9a8) {
            ctx->pc = 0x26FAC8u;
            goto label_26fac8;
        }
    }
    ctx->pc = 0x26F9B0u;
label_26f9b0:
    // 0x26f9b0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26f9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26f9b4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26f9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26f9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f9bc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x26F9BCu;
    {
        const bool branch_taken_0x26f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9BCu;
        // 0x26f9c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9bc) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F9C4u;
label_26f9c4:
    // 0x26f9c4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x26f9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x26f9c8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26f9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26f9cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f9d0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x26F9D0u;
    {
        const bool branch_taken_0x26f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D0u;
        // 0x26f9d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9d0) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26F9D8u;
label_26f9d8:
    // 0x26f9d8: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x26F9D8u;
    {
        const bool branch_taken_0x26f9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D8u;
        // 0x26f9dc: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9d8) {
            ctx->pc = 0x26F8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f8a0;
        }
    }
    ctx->pc = 0x26F9E0u;
    // 0x26f9e0: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x26f9e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x26f9e4: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x26f9e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x26f9e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F9E8u;
    {
        const bool branch_taken_0x26f9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f9e8) {
            ctx->pc = 0x26FA00u;
            goto label_26fa00;
        }
    }
    ctx->pc = 0x26F9F0u;
    // 0x26f9f0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x26f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x26f9f4: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x26f9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x26f9f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26F9F8u;
    {
        const bool branch_taken_0x26f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9F8u;
        // 0x26f9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9f8) {
            ctx->pc = 0x26FA38u;
            goto label_26fa38;
        }
    }
    ctx->pc = 0x26FA00u;
label_26fa00:
    // 0x26fa00: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FA00u;
    {
        const bool branch_taken_0x26fa00 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x26FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA00u;
        // 0x26fa04: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa00) {
            ctx->pc = 0x26FA10u;
            goto label_26fa10;
        }
    }
    ctx->pc = 0x26FA08u;
    // 0x26fa08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26FA08u;
    {
        const bool branch_taken_0x26fa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA08u;
        // 0x26fa0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa08) {
            ctx->pc = 0x26FA34u;
            goto label_26fa34;
        }
    }
    ctx->pc = 0x26FA10u;
label_26fa10:
    // 0x26fa10: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x26fa10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26fa14: 0x0  nop
    ctx->pc = 0x26fa14u;
    // NOP
    // 0x26fa18: 0x0  nop
    ctx->pc = 0x26fa18u;
    // NOP
    // 0x26fa1c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x26fa1cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x26fa20: 0xc09b122  jal         func_26C488
    ctx->pc = 0x26FA20u;
    SET_GPR_U32(ctx, 31, 0x26FA28u);
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x26FA20u, 0x26FA28u)) {
        return;
    }
    ctx->pc = 0x26FA28u;
label_26fa28:
    // 0x26fa28: 0xc09b008  jal         func_26C020
    ctx->pc = 0x26FA28u;
    SET_GPR_U32(ctx, 31, 0x26FA30u);
    ctx->pc = 0x26FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA28u;
    // 0x26fa2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C020u, 0x26FA28u, 0x26FA30u)) {
        return;
    }
    ctx->pc = 0x26FA30u;
label_26fa30:
    // 0x26fa30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26fa30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26fa34:
    // 0x26fa34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fa38:
    // 0x26fa38: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26FA38u;
    {
        const bool branch_taken_0x26fa38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA38u;
        // 0x26fa3c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa38) {
            ctx->pc = 0x26FA68u;
            goto label_26fa68;
        }
    }
    ctx->pc = 0x26FA40u;
    // 0x26fa40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FA40u;
    {
        const bool branch_taken_0x26fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa40) {
            ctx->pc = 0x26FA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FA40u;
            // 0x26fa44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FA58u;
            goto label_26fa58;
        }
    }
    ctx->pc = 0x26FA48u;
    // 0x26fa48: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FA48u;
    {
        const bool branch_taken_0x26fa48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa48) {
            ctx->pc = 0x26FA70u;
            goto label_26fa70;
        }
    }
    ctx->pc = 0x26FA50u;
    // 0x26fa50: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26FA50u;
    {
        const bool branch_taken_0x26fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa50) {
            ctx->pc = 0x26FAA4u;
            goto label_26faa4;
        }
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FA58u;
    {
        const bool branch_taken_0x26fa58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fa58) {
            ctx->pc = 0x26FA7Cu;
            goto label_26fa7c;
        }
    }
    ctx->pc = 0x26FA60u;
    // 0x26fa60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26FA60u;
    {
        const bool branch_taken_0x26fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa60) {
            ctx->pc = 0x26FAA4u;
            goto label_26faa4;
        }
    }
    ctx->pc = 0x26FA68u;
label_26fa68:
    // 0x26fa68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26fa6c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x26fa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_26fa70:
    // 0x26fa70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26fa70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fa74: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26FA74u;
    {
        const bool branch_taken_0x26fa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA74u;
        // 0x26fa78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa74) {
            ctx->pc = 0x26FACCu;
            goto label_26facc;
        }
    }
    ctx->pc = 0x26FA7Cu;
label_26fa7c:
    // 0x26fa7c: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x26fa80: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x26fa80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x26fa84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fa84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fa88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26fa88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26fa8c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26fa90: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26fa90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26fa94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26fa94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fa98: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x26fa98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26fa9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26FA9Cu;
    {
        const bool branch_taken_0x26fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA9Cu;
        // 0x26faa0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa9c) {
            ctx->pc = 0x26FAC8u;
            goto label_26fac8;
        }
    }
    ctx->pc = 0x26FAA4u;
label_26faa4:
    // 0x26faa4: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x26faa8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x26faa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x26faac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26faacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fab0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26fab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26fab4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26fab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26fab8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x26fab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x26fabc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26fabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fac0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x26fac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26fac4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26fac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26fac8:
    // 0x26fac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26fac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26facc:
    // 0x26facc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26faccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26fad0:
    // 0x26fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x26FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAD0u;
        // 0x26fad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FAD8u;
}
