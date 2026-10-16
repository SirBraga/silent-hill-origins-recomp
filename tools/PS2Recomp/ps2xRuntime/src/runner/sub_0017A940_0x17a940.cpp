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

// Function: sub_0017A940
// Address: 0x17a940 - 0x17aa98
void sub_0017A940_0x17a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A940_0x17a940");
#endif

    switch (ctx->pc) {
        case 0x17a97cu: goto label_17a97c;
        case 0x17a9b8u: goto label_17a9b8;
        case 0x17a9d0u: goto label_17a9d0;
        case 0x17a9d8u: goto label_17a9d8;
        case 0x17a9f0u: goto label_17a9f0;
        case 0x17a9f8u: goto label_17a9f8;
        case 0x17aa08u: goto label_17aa08;
        case 0x17aa48u: goto label_17aa48;
        case 0x17aa68u: goto label_17aa68;
        default: break;
    }

    ctx->pc = 0x17a940u;

    // 0x17a940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17a944: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17a948: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17a94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a950: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17a950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17a954: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17a958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a95c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17a960: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x17A960u;
    {
        const bool branch_taken_0x17a960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A960u;
        // 0x17a964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a960) {
            ctx->pc = 0x17AA78u;
            goto label_17aa78;
        }
    }
    ctx->pc = 0x17A968u;
    // 0x17a968: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17a96c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A96Cu;
    {
        const bool branch_taken_0x17a96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A96Cu;
        // 0x17a970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a96c) {
            ctx->pc = 0x17A980u;
            goto label_17a980;
        }
    }
    ctx->pc = 0x17A974u;
    // 0x17a974: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17A974u;
    SET_GPR_U32(ctx, 31, 0x17A97Cu);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17A974u, 0x17A97Cu)) {
        return;
    }
    ctx->pc = 0x17A97Cu;
label_17a97c:
    // 0x17a97c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17a97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17a980:
    // 0x17a980: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x17A980u;
    {
        const bool branch_taken_0x17a980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A980u;
        // 0x17a984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a980) {
            ctx->pc = 0x17AA78u;
            goto label_17aa78;
        }
    }
    ctx->pc = 0x17A988u;
    // 0x17a988: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x17a988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x17a98c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x17a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x17a990: 0x8c45bcd8  lw          $a1, -0x4328($v0)
    ctx->pc = 0x17a990u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6CBCD8u));
    // 0x17a994: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x17a994u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x17a998: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17A998u;
    {
        const bool branch_taken_0x17a998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17a998) {
            ctx->pc = 0x17A99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A998u;
            // 0x17a99c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A9BCu;
            goto label_17a9bc;
        }
    }
    ctx->pc = 0x17A9A0u;
    // 0x17a9a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17a9a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A9A4u;
    {
        const bool branch_taken_0x17a9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9A4u;
        // 0x17a9a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9a4) {
            ctx->pc = 0x17A9B8u;
            goto label_17a9b8;
        }
    }
    ctx->pc = 0x17A9ACu;
    // 0x17a9ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x17a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17a9b0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17A9B0u;
    SET_GPR_U32(ctx, 31, 0x17A9B8u);
    ctx->pc = 0x17A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9B0u;
    // 0x17a9b4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17A9B0u, 0x17A9B8u)) {
        return;
    }
    ctx->pc = 0x17A9B8u;
label_17a9b8:
    // 0x17a9b8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x17a9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17a9bc:
    // 0x17a9bc: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x17A9BCu;
    {
        const bool branch_taken_0x17a9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9BCu;
        // 0x17a9c0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9bc) {
            ctx->pc = 0x17AA74u;
            goto label_17aa74;
        }
    }
    ctx->pc = 0x17A9C4u;
    // 0x17a9c4: 0x24536a48  addiu       $s3, $v0, 0x6A48
    ctx->pc = 0x17a9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x17a9c8: 0x8e1200b4  lw          $s2, 0xB4($s0)
    ctx->pc = 0x17a9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x17a9cc: 0x0  nop
    ctx->pc = 0x17a9ccu;
    // NOP
label_17a9d0:
    // 0x17a9d0: 0xc05e25c  jal         func_178970
    ctx->pc = 0x17A9D0u;
    SET_GPR_U32(ctx, 31, 0x17A9D8u);
    ctx->pc = 0x17A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9D0u;
    // 0x17a9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178970u, 0x17A9D0u, 0x17A9D8u)) {
        return;
    }
    ctx->pc = 0x17A9D8u;
label_17a9d8:
    // 0x17a9d8: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x17a9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17a9dc: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x17A9DCu;
    {
        const bool branch_taken_0x17a9dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9DCu;
        // 0x17a9e0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9dc) {
            ctx->pc = 0x17AA6Cu;
            goto label_17aa6c;
        }
    }
    ctx->pc = 0x17A9E4u;
    // 0x17a9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9e8: 0xc080dd6  jal         func_203758
    ctx->pc = 0x17A9E8u;
    SET_GPR_U32(ctx, 31, 0x17A9F0u);
    ctx->pc = 0x17A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9E8u;
    // 0x17a9ec: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203758u, 0x17A9E8u, 0x17A9F0u)) {
        return;
    }
    ctx->pc = 0x17A9F0u;
label_17a9f0:
    // 0x17a9f0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17A9F0u;
    SET_GPR_U32(ctx, 31, 0x17A9F8u);
    ctx->pc = 0x17A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9F0u;
    // 0x17a9f4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17A9F0u, 0x17A9F8u)) {
        return;
    }
    ctx->pc = 0x17A9F8u;
label_17a9f8:
    // 0x17a9f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17a9fc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17A9FCu;
    {
        const bool branch_taken_0x17a9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9FCu;
        // 0x17aa00: 0xae13000c  sw          $s3, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9fc) {
            ctx->pc = 0x17AA60u;
            goto label_17aa60;
        }
    }
    ctx->pc = 0x17AA04u;
    // 0x17aa04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17aa08:
    // 0x17aa08: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17AA08u;
    {
        const bool branch_taken_0x17aa08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa08) {
            ctx->pc = 0x17AA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AA08u;
            // 0x17aa0c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AA58u;
            goto label_17aa58;
        }
    }
    ctx->pc = 0x17AA10u;
    // 0x17aa10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17aa14: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AA14u;
    {
        const bool branch_taken_0x17aa14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA14u;
        // 0x17aa18: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa14) {
            ctx->pc = 0x17AA24u;
            goto label_17aa24;
        }
    }
    ctx->pc = 0x17AA1Cu;
    // 0x17aa1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AA1Cu;
    {
        const bool branch_taken_0x17aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA1Cu;
        // 0x17aa20: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa1c) {
            ctx->pc = 0x17AA28u;
            goto label_17aa28;
        }
    }
    ctx->pc = 0x17AA24u;
label_17aa24:
    // 0x17aa24: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17aa28:
    // 0x17aa28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17aa2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AA2Cu;
    {
        const bool branch_taken_0x17aa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA2Cu;
        // 0x17aa30: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa2c) {
            ctx->pc = 0x17AA3Cu;
            goto label_17aa3c;
        }
    }
    ctx->pc = 0x17AA34u;
    // 0x17aa34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AA34u;
    {
        const bool branch_taken_0x17aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA34u;
        // 0x17aa38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa34) {
            ctx->pc = 0x17AA40u;
            goto label_17aa40;
        }
    }
    ctx->pc = 0x17AA3Cu;
label_17aa3c:
    // 0x17aa3c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_17aa40:
    // 0x17aa40: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17AA40u;
    SET_GPR_U32(ctx, 31, 0x17AA48u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17AA40u, 0x17AA48u)) {
        return;
    }
    ctx->pc = 0x17AA48u;
label_17aa48:
    // 0x17aa48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17aa4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17aa50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17aa54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17aa58:
    // 0x17aa58: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x17AA58u;
    {
        const bool branch_taken_0x17aa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17aa58) {
            ctx->pc = 0x17AA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AA58u;
            // 0x17aa5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aa08;
        }
    }
    ctx->pc = 0x17AA60u;
label_17aa60:
    // 0x17aa60: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17AA60u;
    SET_GPR_U32(ctx, 31, 0x17AA68u);
    ctx->pc = 0x17AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA60u;
    // 0x17aa64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17AA60u, 0x17AA68u)) {
        return;
    }
    ctx->pc = 0x17AA68u;
label_17aa68:
    // 0x17aa68: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x17aa68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17aa6c:
    // 0x17aa6c: 0x5600ffd8  bnel        $s0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x17AA6Cu;
    {
        const bool branch_taken_0x17aa6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17aa6c) {
            ctx->pc = 0x17AA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AA6Cu;
            // 0x17aa70: 0x8e1200b4  lw          $s2, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a9d0;
        }
    }
    ctx->pc = 0x17AA74u;
label_17aa74:
    // 0x17aa74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17aa78:
    // 0x17aa78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17aa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17aa7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17aa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17aa80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17aa80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17aa84: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17aa84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA8Cu;
        // 0x17aa90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA94u;
    // 0x17aa94: 0x0  nop
    ctx->pc = 0x17aa94u;
    // NOP
    ctx->pc = 0x17aa98u;
}
