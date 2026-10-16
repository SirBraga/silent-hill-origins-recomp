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

// Function: sub_0030A878
// Address: 0x30a878 - 0x30a9e8
void sub_0030A878_0x30a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A878_0x30a878");
#endif

    switch (ctx->pc) {
        case 0x30a8a4u: goto label_30a8a4;
        case 0x30a8d4u: goto label_30a8d4;
        case 0x30a900u: goto label_30a900;
        case 0x30a940u: goto label_30a940;
        case 0x30a96cu: goto label_30a96c;
        case 0x30a9b4u: goto label_30a9b4;
        default: break;
    }

    ctx->pc = 0x30a878u;

    // 0x30a878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30a87c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30a880: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30a884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30a884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a888: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30a88c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30a88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a894: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a898: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30a898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a89c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A89Cu;
    SET_GPR_U32(ctx, 31, 0x30A8A4u);
    ctx->pc = 0x30A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A89Cu;
    // 0x30a8a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A89Cu, 0x30A8A4u)) {
        return;
    }
    ctx->pc = 0x30A8A4u;
label_30a8a4:
    // 0x30a8a4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x30A8A4u;
    {
        const bool branch_taken_0x30a8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8A4u;
        // 0x30a8a8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8a4) {
            ctx->pc = 0x30A9A0u;
            goto label_30a9a0;
        }
    }
    ctx->pc = 0x30A8ACu;
    // 0x30a8ac: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x30a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x30a8b0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30a8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30a8b4: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x30A8B4u;
    {
        const bool branch_taken_0x30a8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8B4u;
        // 0x30a8b8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8b4) {
            ctx->pc = 0x30A9A0u;
            goto label_30a9a0;
        }
    }
    ctx->pc = 0x30A8BCu;
    // 0x30a8bc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x30A8BCu;
    {
        const bool branch_taken_0x30a8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8BCu;
        // 0x30a8c0: 0x27b10004  addiu       $s1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8bc) {
            ctx->pc = 0x30A9A0u;
            goto label_30a9a0;
        }
    }
    ctx->pc = 0x30A8C4u;
    // 0x30a8c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a8c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a8cc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A8CCu;
    SET_GPR_U32(ctx, 31, 0x30A8D4u);
    ctx->pc = 0x30A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A8CCu;
    // 0x30a8d0: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A8CCu, 0x30A8D4u)) {
        return;
    }
    ctx->pc = 0x30A8D4u;
label_30a8d4:
    // 0x30a8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30A8D4u;
    {
        const bool branch_taken_0x30a8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8D4u;
        // 0x30a8d8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8d4) {
            ctx->pc = 0x30A908u;
            goto label_30a908;
        }
    }
    ctx->pc = 0x30A8DCu;
    // 0x30a8dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30a8e0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30a8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30a8e4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A8E4u;
    {
        const bool branch_taken_0x30a8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8E4u;
        // 0x30a8e8: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8e4) {
            ctx->pc = 0x30A908u;
            goto label_30a908;
        }
    }
    ctx->pc = 0x30A8ECu;
    // 0x30a8ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A8ECu;
    {
        const bool branch_taken_0x30a8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8ECu;
        // 0x30a8f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8ec) {
            ctx->pc = 0x30A908u;
            goto label_30a908;
        }
    }
    ctx->pc = 0x30A8F4u;
    // 0x30a8f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a8f8: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30A8F8u;
    SET_GPR_U32(ctx, 31, 0x30A900u);
    ctx->pc = 0x30A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A8F8u;
    // 0x30a8fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30A8F8u, 0x30A900u)) {
        return;
    }
    ctx->pc = 0x30A900u;
label_30a900:
    // 0x30a900: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A900u;
    {
        const bool branch_taken_0x30a900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a900) {
            ctx->pc = 0x30A910u;
            goto label_30a910;
        }
    }
    ctx->pc = 0x30A908u;
label_30a908:
    // 0x30a908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A908u;
    {
        const bool branch_taken_0x30a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A908u;
        // 0x30a90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a908) {
            ctx->pc = 0x30A928u;
            goto label_30a928;
        }
    }
    ctx->pc = 0x30A910u;
label_30a910:
    // 0x30a910: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A910u;
    {
        const bool branch_taken_0x30a910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A910u;
        // 0x30a914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a910) {
            ctx->pc = 0x30A928u;
            goto label_30a928;
        }
    }
    ctx->pc = 0x30A918u;
    // 0x30a918: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a91c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a920: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a928:
    // 0x30a928: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30A928u;
    {
        const bool branch_taken_0x30a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A928u;
        // 0x30a92c: 0x27b1000c  addiu       $s1, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a928) {
            ctx->pc = 0x30A9A0u;
            goto label_30a9a0;
        }
    }
    ctx->pc = 0x30A930u;
    // 0x30a930: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a934: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30a934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a938: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30A938u;
    SET_GPR_U32(ctx, 31, 0x30A940u);
    ctx->pc = 0x30A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A938u;
    // 0x30a93c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30A938u, 0x30A940u)) {
        return;
    }
    ctx->pc = 0x30A940u;
label_30a940:
    // 0x30a940: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30A940u;
    {
        const bool branch_taken_0x30a940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A940u;
        // 0x30a944: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a940) {
            ctx->pc = 0x30A978u;
            goto label_30a978;
        }
    }
    ctx->pc = 0x30A948u;
    // 0x30a948: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30a94c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30a94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30a950: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A950u;
    {
        const bool branch_taken_0x30a950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A950u;
        // 0x30a954: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a950) {
            ctx->pc = 0x30A978u;
            goto label_30a978;
        }
    }
    ctx->pc = 0x30A958u;
    // 0x30a958: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A958u;
    {
        const bool branch_taken_0x30a958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A958u;
        // 0x30a95c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a958) {
            ctx->pc = 0x30A978u;
            goto label_30a978;
        }
    }
    ctx->pc = 0x30A960u;
    // 0x30a960: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a964: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30A964u;
    SET_GPR_U32(ctx, 31, 0x30A96Cu);
    ctx->pc = 0x30A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A964u;
    // 0x30a968: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30A964u, 0x30A96Cu)) {
        return;
    }
    ctx->pc = 0x30A96Cu;
label_30a96c:
    // 0x30a96c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A96Cu;
    {
        const bool branch_taken_0x30a96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a96c) {
            ctx->pc = 0x30A980u;
            goto label_30a980;
        }
    }
    ctx->pc = 0x30A974u;
    // 0x30a974: 0x0  nop
    ctx->pc = 0x30a974u;
    // NOP
label_30a978:
    // 0x30a978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A978u;
    {
        const bool branch_taken_0x30a978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A978u;
        // 0x30a97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a978) {
            ctx->pc = 0x30A998u;
            goto label_30a998;
        }
    }
    ctx->pc = 0x30A980u;
label_30a980:
    // 0x30a980: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A980u;
    {
        const bool branch_taken_0x30a980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A980u;
        // 0x30a984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a980) {
            ctx->pc = 0x30A998u;
            goto label_30a998;
        }
    }
    ctx->pc = 0x30A988u;
    // 0x30a988: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a98c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a990: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a998:
    // 0x30a998: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A998u;
    {
        const bool branch_taken_0x30a998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A998u;
        // 0x30a99c: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a998) {
            ctx->pc = 0x30A9A8u;
            goto label_30a9a8;
        }
    }
    ctx->pc = 0x30A9A0u;
label_30a9a0:
    // 0x30a9a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30A9A0u;
    {
        const bool branch_taken_0x30a9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9A0u;
        // 0x30a9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9a0) {
            ctx->pc = 0x30A9CCu;
            goto label_30a9cc;
        }
    }
    ctx->pc = 0x30A9A8u;
label_30a9a8:
    // 0x30a9a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9ac: 0xc0c43e4  jal         func_310F90
    ctx->pc = 0x30A9ACu;
    SET_GPR_U32(ctx, 31, 0x30A9B4u);
    ctx->pc = 0x30A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A9ACu;
    // 0x30a9b0: 0xc7ad000c  lwc1        $f13, 0xC($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x310F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x310F90u, 0x30A9ACu, 0x30A9B4u)) {
        return;
    }
    ctx->pc = 0x30A9B4u;
label_30a9b4:
    // 0x30a9b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A9B4u;
    {
        const bool branch_taken_0x30a9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9B4u;
        // 0x30a9b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9b4) {
            ctx->pc = 0x30A9CCu;
            goto label_30a9cc;
        }
    }
    ctx->pc = 0x30A9BCu;
    // 0x30a9bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a9c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30a9c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a9cc:
    // 0x30a9cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30a9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a9d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30a9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a9d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30a9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a9d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30A9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9DCu;
        // 0x30a9e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A9E4u;
    // 0x30a9e4: 0x0  nop
    ctx->pc = 0x30a9e4u;
    // NOP
    ctx->pc = 0x30a9e8u;
}
