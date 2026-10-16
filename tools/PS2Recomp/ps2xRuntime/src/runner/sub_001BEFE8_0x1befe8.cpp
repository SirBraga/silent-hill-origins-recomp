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

// Function: sub_001BEFE8
// Address: 0x1befe8 - 0x1bf158
void sub_001BEFE8_0x1befe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEFE8_0x1befe8");
#endif

    switch (ctx->pc) {
        case 0x1bf058u: goto label_1bf058;
        case 0x1bf078u: goto label_1bf078;
        case 0x1bf084u: goto label_1bf084;
        case 0x1bf08cu: goto label_1bf08c;
        case 0x1bf094u: goto label_1bf094;
        case 0x1bf0d8u: goto label_1bf0d8;
        case 0x1bf0e0u: goto label_1bf0e0;
        case 0x1bf108u: goto label_1bf108;
        case 0x1bf11cu: goto label_1bf11c;
        default: break;
    }

    ctx->pc = 0x1befe8u;

    // 0x1befe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1befe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1befec: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1beff0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1beff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1beff4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1beff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1beff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1beff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1beffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf000: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bf000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bf004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf008: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1bf008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1bf00c: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x1bf00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1bf010: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF010u;
    {
        const bool branch_taken_0x1bf010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF010u;
        // 0x1bf014: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf010) {
            ctx->pc = 0x1BF024u;
            goto label_1bf024;
        }
    }
    ctx->pc = 0x1BF018u;
    // 0x1bf018: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x1bf018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x1bf01c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BF01Cu;
    {
        const bool branch_taken_0x1bf01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF01Cu;
        // 0x1bf020: 0xae0002fc  sw          $zero, 0x2FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf01c) {
            ctx->pc = 0x1BF048u;
            goto label_1bf048;
        }
    }
    ctx->pc = 0x1BF024u;
label_1bf024:
    // 0x1bf024: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF024u;
    {
        const bool branch_taken_0x1bf024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF024u;
        // 0x1bf028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf024) {
            ctx->pc = 0x1BF038u;
            goto label_1bf038;
        }
    }
    ctx->pc = 0x1BF02Cu;
    // 0x1bf02c: 0xae0302f8  sw          $v1, 0x2F8($s0)
    ctx->pc = 0x1bf02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 3));
    // 0x1bf030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF030u;
    {
        const bool branch_taken_0x1bf030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF030u;
        // 0x1bf034: 0xae0002fc  sw          $zero, 0x2FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf030) {
            ctx->pc = 0x1BF048u;
            goto label_1bf048;
        }
    }
    ctx->pc = 0x1BF038u;
label_1bf038:
    // 0x1bf038: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF038u;
    {
        const bool branch_taken_0x1bf038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF038u;
        // 0x1bf03c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf038) {
            ctx->pc = 0x1BF04Cu;
            goto label_1bf04c;
        }
    }
    ctx->pc = 0x1BF040u;
    // 0x1bf040: 0xae0302fc  sw          $v1, 0x2FC($s0)
    ctx->pc = 0x1bf040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 3));
    // 0x1bf044: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x1bf044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
label_1bf048:
    // 0x1bf048: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bf048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1bf04c:
    // 0x1bf04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf050: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1BF050u;
    SET_GPR_U32(ctx, 31, 0x1BF058u);
    ctx->pc = 0x1BF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF050u;
    // 0x1bf054: 0x8c44943c  lw          $a0, -0x6BC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BF050u, 0x1BF058u)) {
        return;
    }
    ctx->pc = 0x1BF058u;
label_1bf058:
    // 0x1bf058: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x1bf05c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF05Cu;
    {
        const bool branch_taken_0x1bf05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF05Cu;
        // 0x1bf060: 0xae02027c  sw          $v0, 0x27C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf05c) {
            ctx->pc = 0x1BF07Cu;
            goto label_1bf07c;
        }
    }
    ctx->pc = 0x1BF064u;
    // 0x1bf064: 0x8e040278  lw          $a0, 0x278($s0)
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1bf068: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF068u;
    {
        const bool branch_taken_0x1bf068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf068) {
            ctx->pc = 0x1BF07Cu;
            goto label_1bf07c;
        }
    }
    ctx->pc = 0x1BF070u;
    // 0x1bf070: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1BF070u;
    SET_GPR_U32(ctx, 31, 0x1BF078u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BF070u, 0x1BF078u)) {
        return;
    }
    ctx->pc = 0x1BF078u;
label_1bf078:
    // 0x1bf078: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x1bf078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
label_1bf07c:
    // 0x1bf07c: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1BF07Cu;
    SET_GPR_U32(ctx, 31, 0x1BF084u);
    ctx->pc = 0x1BF080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF07Cu;
    // 0x1bf080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1BF07Cu, 0x1BF084u)) {
        return;
    }
    ctx->pc = 0x1BF084u;
label_1bf084:
    // 0x1bf084: 0xc0659e0  jal         func_196780
    ctx->pc = 0x1BF084u;
    SET_GPR_U32(ctx, 31, 0x1BF08Cu);
    ctx->pc = 0x196780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196780u, 0x1BF084u, 0x1BF08Cu)) {
        return;
    }
    ctx->pc = 0x1BF08Cu;
label_1bf08c:
    // 0x1bf08c: 0xc05fd92  jal         func_17F648
    ctx->pc = 0x1BF08Cu;
    SET_GPR_U32(ctx, 31, 0x1BF094u);
    ctx->pc = 0x17F648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F648u, 0x1BF08Cu, 0x1BF094u)) {
        return;
    }
    ctx->pc = 0x1BF094u;
label_1bf094:
    // 0x1bf094: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1bf094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1bf098: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1bf098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bf09c: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x1bf09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
    // 0x1bf0a0: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x1bf0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x1bf0a4: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x1bf0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x1bf0a8: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1bf0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x1bf0ac: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x1bf0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x1bf0b0: 0xae0002f4  sw          $zero, 0x2F4($s0)
    ctx->pc = 0x1bf0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x1bf0b4: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1bf0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1bf0b8: 0xa20402a3  sb          $a0, 0x2A3($s0)
    ctx->pc = 0x1bf0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 675), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf0bc: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x1bf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x1bf0c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF0C0u;
    {
        const bool branch_taken_0x1bf0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0C0u;
        // 0x1bf0c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0c0) {
            ctx->pc = 0x1BF0DCu;
            goto label_1bf0dc;
        }
    }
    ctx->pc = 0x1BF0C8u;
    // 0x1bf0c8: 0x8e0602c8  lw          $a2, 0x2C8($s0)
    ctx->pc = 0x1bf0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1bf0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0d0: 0xc06fc56  jal         func_1BF158
    ctx->pc = 0x1BF0D0u;
    SET_GPR_U32(ctx, 31, 0x1BF0D8u);
    ctx->pc = 0x1BF0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF0D0u;
    // 0x1bf0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BF158u, 0x1BF0D0u, 0x1BF0D8u)) {
        return;
    }
    ctx->pc = 0x1BF0D8u;
label_1bf0d8:
    // 0x1bf0d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bf0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bf0dc:
    // 0x1bf0dc: 0x26060324  addiu       $a2, $s0, 0x324
    ctx->pc = 0x1bf0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
label_1bf0e0:
    // 0x1bf0e0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1bf0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1bf0e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bf0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bf0e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bf0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bf0ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf0f0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1bf0f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bf0f4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BF0F4u;
    {
        const bool branch_taken_0x1bf0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0F4u;
        // 0x1bf0f8: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0f4) {
            ctx->pc = 0x1BF0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf0e0;
        }
    }
    ctx->pc = 0x1BF0FCu;
    // 0x1bf0fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bf0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf100: 0x261103bc  addiu       $s1, $s0, 0x3BC
    ctx->pc = 0x1bf100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 956));
    // 0x1bf104: 0x24130025  addiu       $s3, $zero, 0x25
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1bf108:
    // 0x1bf108: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bf108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf10c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF10Cu;
    {
        const bool branch_taken_0x1bf10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf10c) {
            ctx->pc = 0x1BF110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF10Cu;
            // 0x1bf110: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF124u;
            goto label_1bf124;
        }
    }
    ctx->pc = 0x1BF114u;
    // 0x1bf114: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1BF114u;
    SET_GPR_U32(ctx, 31, 0x1BF11Cu);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BF114u, 0x1BF11Cu)) {
        return;
    }
    ctx->pc = 0x1BF11Cu;
label_1bf11c:
    // 0x1bf11c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bf11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bf120: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1bf120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1bf124:
    // 0x1bf124: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1bf124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1bf128: 0x661fff7  bgez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BF128u;
    {
        const bool branch_taken_0x1bf128 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1BF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF128u;
        // 0x1bf12c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf128) {
            ctx->pc = 0x1BF108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf108;
        }
    }
    ctx->pc = 0x1BF130u;
    // 0x1bf130: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1bf130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1bf134: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bf134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf138: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bf138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf13c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf13cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf140: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bf140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf148: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x1bf148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    // 0x1bf14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF14Cu;
        // 0x1bf150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF154u;
    // 0x1bf154: 0x0  nop
    ctx->pc = 0x1bf154u;
    // NOP
    ctx->pc = 0x1bf158u;
}
