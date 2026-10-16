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

// Function: sub_0019F138
// Address: 0x19f138 - 0x19f330
void sub_0019F138_0x19f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F138_0x19f138");
#endif

    switch (ctx->pc) {
        case 0x19f31cu: goto label_19f31c;
        default: break;
    }

    ctx->pc = 0x19f138u;

    // 0x19f138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f13c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19f140: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19f140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19f144: 0x2469ae30  addiu       $t1, $v1, -0x51D0
    ctx->pc = 0x19f144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946352));
    // 0x19f148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f150: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x19f150u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x19f154: 0x260e0010  addiu       $t6, $s0, 0x10
    ctx->pc = 0x19f154u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19f158: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f15c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x19f15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f160: 0x356b869f  ori         $t3, $t3, 0x869F
    ctx->pc = 0x19f160u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)34463);
    // 0x19f164: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x19f164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x19f168: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x19f168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x19f16c: 0x8c4d000c  lw          $t5, 0xC($v0)
    ctx->pc = 0x19f16cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19f170: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x19f170u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x19f174: 0x8c4c0010  lw          $t4, 0x10($v0)
    ctx->pc = 0x19f174u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19f178: 0x30e29000  andi        $v0, $a3, 0x9000
    ctx->pc = 0x19f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)36864);
    // 0x19f17c: 0x30e30f00  andi        $v1, $a3, 0xF00
    ctx->pc = 0x19f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x19f180: 0x30e56000  andi        $a1, $a3, 0x6000
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)24576);
    // 0x19f184: 0x10640031  beq         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x19F184u;
    {
        const bool branch_taken_0x19f184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x19F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F184u;
        // 0x19f188: 0x2502b  sltu        $t2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f184) {
            ctx->pc = 0x19F24Cu;
            goto label_19f24c;
        }
    }
    ctx->pc = 0x19F18Cu;
    // 0x19f18c: 0x28620501  slti        $v0, $v1, 0x501
    ctx->pc = 0x19f18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1281) ? 1 : 0);
    // 0x19f190: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19F190u;
    {
        const bool branch_taken_0x19f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F190u;
        // 0x19f194: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f190) {
            ctx->pc = 0x19F1D4u;
            goto label_19f1d4;
        }
    }
    ctx->pc = 0x19F198u;
    // 0x19f198: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x19F198u;
    {
        const bool branch_taken_0x19f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F198u;
        // 0x19f19c: 0x28620201  slti        $v0, $v1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f198) {
            ctx->pc = 0x19F220u;
            goto label_19f220;
        }
    }
    ctx->pc = 0x19F1A0u;
    // 0x19f1a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F1A0u;
    {
        const bool branch_taken_0x19f1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A0u;
        // 0x19f1a4: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1a0) {
            ctx->pc = 0x19F1B8u;
            goto label_19f1b8;
        }
    }
    ctx->pc = 0x19F1A8u;
    // 0x19f1a8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19F1A8u;
    {
        const bool branch_taken_0x19f1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A8u;
        // 0x19f1ac: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1a8) {
            ctx->pc = 0x19F214u;
            goto label_19f214;
        }
    }
    ctx->pc = 0x19F1B0u;
    // 0x19f1b0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19F1B0u;
    {
        const bool branch_taken_0x19f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1b0) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F1B8u;
label_19f1b8:
    // 0x19f1b8: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x19f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x19f1bc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19F1BCu;
    {
        const bool branch_taken_0x19f1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1BCu;
        // 0x19f1c0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1bc) {
            ctx->pc = 0x19F230u;
            goto label_19f230;
        }
    }
    ctx->pc = 0x19F1C4u;
    // 0x19f1c4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19F1C4u;
    {
        const bool branch_taken_0x19f1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C4u;
        // 0x19f1c8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1c4) {
            ctx->pc = 0x19F240u;
            goto label_19f240;
        }
    }
    ctx->pc = 0x19F1CCu;
    // 0x19f1cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19F1CCu;
    {
        const bool branch_taken_0x19f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1cc) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F1D4u;
label_19f1d4:
    // 0x19f1d4: 0x24020700  addiu       $v0, $zero, 0x700
    ctx->pc = 0x19f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x19f1d8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x19F1D8u;
    {
        const bool branch_taken_0x19f1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D8u;
        // 0x19f1dc: 0x28620701  slti        $v0, $v1, 0x701 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1793) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1d8) {
            ctx->pc = 0x19F268u;
            goto label_19f268;
        }
    }
    ctx->pc = 0x19F1E0u;
    // 0x19f1e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F1E0u;
    {
        const bool branch_taken_0x19f1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1E0u;
        // 0x19f1e4: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1e0) {
            ctx->pc = 0x19F1F8u;
            goto label_19f1f8;
        }
    }
    ctx->pc = 0x19F1E8u;
    // 0x19f1e8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19F1E8u;
    {
        const bool branch_taken_0x19f1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1E8u;
        // 0x19f1ec: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1e8) {
            ctx->pc = 0x19F25Cu;
            goto label_19f25c;
        }
    }
    ctx->pc = 0x19F1F0u;
    // 0x19f1f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19F1F0u;
    {
        const bool branch_taken_0x19f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1f0) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F1F8u;
label_19f1f8:
    // 0x19f1f8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x19f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19f1fc: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19F1FCu;
    {
        const bool branch_taken_0x19f1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1FCu;
        // 0x19f200: 0x24020a00  addiu       $v0, $zero, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1fc) {
            ctx->pc = 0x19F278u;
            goto label_19f278;
        }
    }
    ctx->pc = 0x19F204u;
    // 0x19f204: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19F204u;
    {
        const bool branch_taken_0x19f204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F204u;
        // 0x19f208: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f204) {
            ctx->pc = 0x19F288u;
            goto label_19f288;
        }
    }
    ctx->pc = 0x19F20Cu;
    // 0x19f20c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19F20Cu;
    {
        const bool branch_taken_0x19f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f20c) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F214u;
label_19f214:
    // 0x19f214: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x19f214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19f218: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19F218u;
    {
        const bool branch_taken_0x19f218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F218u;
        // 0x19f21c: 0x2448ae38  addiu       $t0, $v0, -0x51C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f218) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F220u;
label_19f220:
    // 0x19f220: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f224: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x19f224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19f228: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19F228u;
    {
        const bool branch_taken_0x19f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F228u;
        // 0x19f22c: 0x2448ae40  addiu       $t0, $v0, -0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f228) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F230u;
label_19f230:
    // 0x19f230: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f234: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x19f234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19f238: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F238u;
    {
        const bool branch_taken_0x19f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F238u;
        // 0x19f23c: 0x2448ae48  addiu       $t0, $v0, -0x51B8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f238) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F240u;
label_19f240:
    // 0x19f240: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x19f240u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f244: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19F244u;
    {
        const bool branch_taken_0x19f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F244u;
        // 0x19f248: 0x2448ae50  addiu       $t0, $v0, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f244) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F24Cu;
label_19f24c:
    // 0x19f24c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f250: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x19f250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19f254: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19F254u;
    {
        const bool branch_taken_0x19f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F254u;
        // 0x19f258: 0x2448ae58  addiu       $t0, $v0, -0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f254) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F25Cu;
label_19f25c:
    // 0x19f25c: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x19f25cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19f260: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19F260u;
    {
        const bool branch_taken_0x19f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F260u;
        // 0x19f264: 0x2448ae60  addiu       $t0, $v0, -0x51A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f260) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F268u;
label_19f268:
    // 0x19f268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f26c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19f270: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F270u;
    {
        const bool branch_taken_0x19f270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F270u;
        // 0x19f274: 0x2448ae68  addiu       $t0, $v0, -0x5198 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f270) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F278u;
label_19f278:
    // 0x19f278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f27c: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x19f27cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19f280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19F280u;
    {
        const bool branch_taken_0x19f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F280u;
        // 0x19f284: 0x2448ae70  addiu       $t0, $v0, -0x5190 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f280) {
            ctx->pc = 0x19F290u;
            goto label_19f290;
        }
    }
    ctx->pc = 0x19F288u;
label_19f288:
    // 0x19f288: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x19f288u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19f28c: 0x2448ae78  addiu       $t0, $v0, -0x5188
    ctx->pc = 0x19f28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946424));
label_19f290:
    // 0x19f290: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x19F290u;
    {
        const bool branch_taken_0x19f290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F290u;
        // 0x19f294: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f290) {
            ctx->pc = 0x19F2D0u;
            goto label_19f2d0;
        }
    }
    ctx->pc = 0x19F298u;
    // 0x19f298: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F298u;
    {
        const bool branch_taken_0x19f298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F298u;
        // 0x19f29c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f298) {
            ctx->pc = 0x19F2B4u;
            goto label_19f2b4;
        }
    }
    ctx->pc = 0x19F2A0u;
    // 0x19f2a0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x19f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19f2a4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F2A4u;
    {
        const bool branch_taken_0x19f2a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2A4u;
        // 0x19f2a8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2a4) {
            ctx->pc = 0x19F2C4u;
            goto label_19f2c4;
        }
    }
    ctx->pc = 0x19F2ACu;
    // 0x19f2ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F2ACu;
    {
        const bool branch_taken_0x19f2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2ACu;
        // 0x19f2b0: 0x2448ae90  addiu       $t0, $v0, -0x5170 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2ac) {
            ctx->pc = 0x19F2D0u;
            goto label_19f2d0;
        }
    }
    ctx->pc = 0x19F2B4u;
label_19f2b4:
    // 0x19f2b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f2b8: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x19f2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f2bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F2BCu;
    {
        const bool branch_taken_0x19f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2BCu;
        // 0x19f2c0: 0x2448ae80  addiu       $t0, $v0, -0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2bc) {
            ctx->pc = 0x19F2D0u;
            goto label_19f2d0;
        }
    }
    ctx->pc = 0x19F2C4u;
label_19f2c4:
    // 0x19f2c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f2c8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19f2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f2cc: 0x2448ae88  addiu       $t0, $v0, -0x5178
    ctx->pc = 0x19f2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946440));
label_19f2d0:
    // 0x19f2d0: 0x1ac1818  mult        $v1, $t5, $t4
    ctx->pc = 0x19f2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19f2d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f2d8: 0x29660011  slti        $a2, $t3, 0x11
    ctx->pc = 0x19f2d8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x19f2dc: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x19f2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19f2e0: 0xa3202a  slt         $a0, $a1, $v1
    ctx->pc = 0x19f2e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19f2e4: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x19f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x19f2e8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x19f2e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x19f2ec: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x19f2ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x19f2f0: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x19f2f0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f2f4: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x19f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x19f2f8: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x19f2f8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x19f2fc: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F2FCu;
    {
        const bool branch_taken_0x19f2fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2FCu;
        // 0x19f300: 0x35a83  sra         $t3, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2fc) {
            ctx->pc = 0x19F31Cu;
            goto label_19f31c;
        }
    }
    ctx->pc = 0x19F304u;
    // 0x19f304: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x19f304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x19f308: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x19f308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x19f30c: 0x2484ae98  addiu       $a0, $a0, -0x5168
    ctx->pc = 0x19f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946456));
    // 0x19f310: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f314: 0xc041e86  jal         func_107A18
    ctx->pc = 0x19F314u;
    SET_GPR_U32(ctx, 31, 0x19F31Cu);
    ctx->pc = 0x19F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F314u;
    // 0x19f318: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x19F314u, 0x19F31Cu)) {
        return;
    }
    ctx->pc = 0x19F31Cu;
label_19f31c:
    // 0x19f31c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19f31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f324: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19f324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f328: 0x3e00008  jr          $ra
    ctx->pc = 0x19F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F328u;
        // 0x19f32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F330u;
}
