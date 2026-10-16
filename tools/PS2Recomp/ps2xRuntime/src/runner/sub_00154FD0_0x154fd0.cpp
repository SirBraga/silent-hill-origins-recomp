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

// Function: sub_00154FD0
// Address: 0x154fd0 - 0x155240
void sub_00154FD0_0x154fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154FD0_0x154fd0");
#endif

    switch (ctx->pc) {
        case 0x155050u: goto label_155050;
        case 0x155084u: goto label_155084;
        case 0x15508cu: goto label_15508c;
        case 0x1550b8u: goto label_1550b8;
        case 0x1550c8u: goto label_1550c8;
        case 0x1550f4u: goto label_1550f4;
        case 0x155124u: goto label_155124;
        case 0x15513cu: goto label_15513c;
        case 0x155190u: goto label_155190;
        case 0x1551c4u: goto label_1551c4;
        case 0x1551d4u: goto label_1551d4;
        case 0x155214u: goto label_155214;
        case 0x155224u: goto label_155224;
        default: break;
    }

    ctx->pc = 0x154fd0u;

    // 0x154fd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x154fd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x154fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x154fd8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x154fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x154fdc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x154fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x154fe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x154fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fe4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x154fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x154fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x154fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x154ff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x154ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x154ff4: 0x8c4346d0  lw          $v1, 0x46D0($v0)
    ctx->pc = 0x154ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B46D0u));
    // 0x154ff8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x154ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154ffc: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x154FFCu;
    {
        const bool branch_taken_0x154ffc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x155000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FFCu;
        // 0x155000: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ffc) {
            ctx->pc = 0x155020u;
            goto label_155020;
        }
    }
    ctx->pc = 0x155004u;
    // 0x155004: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x155004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x155008: 0x8c4346d8  lw          $v1, 0x46D8($v0)
    ctx->pc = 0x155008u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B46D8u));
    // 0x15500c: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15500Cu;
    {
        const bool branch_taken_0x15500c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x155010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15500Cu;
        // 0x155010: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15500c) {
            ctx->pc = 0x155020u;
            goto label_155020;
        }
    }
    ctx->pc = 0x155014u;
    // 0x155014: 0x8c4346e0  lw          $v1, 0x46E0($v0)
    ctx->pc = 0x155014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18144)));
    // 0x155018: 0x14c3005f  bne         $a2, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x155018u;
    {
        const bool branch_taken_0x155018 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x15501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155018u;
        // 0x15501c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155018) {
            ctx->pc = 0x155198u;
            goto label_155198;
        }
    }
    ctx->pc = 0x155020u;
label_155020:
    // 0x155020: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x155020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x155024: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x155024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x155028: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x155028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15502c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x15502Cu;
    {
        const bool branch_taken_0x15502c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15502Cu;
        // 0x155030: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15502c) {
            ctx->pc = 0x1550C0u;
            goto label_1550c0;
        }
    }
    ctx->pc = 0x155034u;
    // 0x155034: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x155034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x155038: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x155038u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x15503c: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x15503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x155040: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x155040u;
    {
        const bool branch_taken_0x155040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155040) {
            ctx->pc = 0x155044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155040u;
            // 0x155044: 0x8c90006c  lw          $s0, 0x6C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155084u;
            goto label_155084;
        }
    }
    ctx->pc = 0x155048u;
    // 0x155048: 0xc0644cc  jal         func_191330
    ctx->pc = 0x155048u;
    SET_GPR_U32(ctx, 31, 0x155050u);
    ctx->pc = 0x191330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191330u, 0x155048u, 0x155050u)) {
        return;
    }
    ctx->pc = 0x155050u;
label_155050:
    // 0x155050: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x155050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x155054: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x155054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x155058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15505c: 0x8c6343e8  lw          $v1, 0x43E8($v1)
    ctx->pc = 0x15505cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B43E8u));
    // 0x155060: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x155060u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x155064: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155064u;
    {
        const bool branch_taken_0x155064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155064) {
            ctx->pc = 0x155084u;
            goto label_155084;
        }
    }
    ctx->pc = 0x15506Cu;
    // 0x15506c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155070: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155070u;
    {
        const bool branch_taken_0x155070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155070u;
        // 0x155074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155070) {
            ctx->pc = 0x155084u;
            goto label_155084;
        }
    }
    ctx->pc = 0x155078u;
    // 0x155078: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x155078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x15507c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x15507Cu;
    SET_GPR_U32(ctx, 31, 0x155084u);
    ctx->pc = 0x155080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15507Cu;
    // 0x155080: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x15507Cu, 0x155084u)) {
        return;
    }
    ctx->pc = 0x155084u;
label_155084:
    // 0x155084: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x155084u;
    {
        const bool branch_taken_0x155084 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x155084) {
            ctx->pc = 0x155088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155084u;
            // 0x155088: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155094u;
            goto label_155094;
        }
    }
    ctx->pc = 0x15508Cu;
label_15508c:
    // 0x15508c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15508Cu;
    {
        const bool branch_taken_0x15508c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15508Cu;
        // 0x155090: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15508c) {
            ctx->pc = 0x1550B0u;
            goto label_1550b0;
        }
    }
    ctx->pc = 0x155094u;
label_155094:
    // 0x155094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155098: 0x0  nop
    ctx->pc = 0x155098u;
    // NOP
    // 0x15509c: 0x1082fffb  beq         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15509Cu;
    {
        const bool branch_taken_0x15509c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1550A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15509Cu;
        // 0x1550a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15509c) {
            ctx->pc = 0x15508Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15508c;
        }
    }
    ctx->pc = 0x1550A4u;
    // 0x1550a4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1550A4u;
    {
        const bool branch_taken_0x1550a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1550A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A4u;
        // 0x1550a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550a4) {
            ctx->pc = 0x1550B0u;
            goto label_1550b0;
        }
    }
    ctx->pc = 0x1550ACu;
    // 0x1550ac: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1550acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_1550b0:
    // 0x1550b0: 0xc0558f4  jal         func_1563D0
    ctx->pc = 0x1550B0u;
    SET_GPR_U32(ctx, 31, 0x1550B8u);
    ctx->pc = 0x1550B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1550B0u;
    // 0x1550b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1563D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1563D0u, 0x1550B0u, 0x1550B8u)) {
        return;
    }
    ctx->pc = 0x1550B8u;
label_1550b8:
    // 0x1550b8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1550B8u;
    {
        const bool branch_taken_0x1550b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550B8u;
        // 0x1550bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550b8) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x1550C0u;
label_1550c0:
    // 0x1550c0: 0xc05592a  jal         func_1564A8
    ctx->pc = 0x1550C0u;
    SET_GPR_U32(ctx, 31, 0x1550C8u);
    ctx->pc = 0x1550C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1550C0u;
    // 0x1550c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1564A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1564A8u, 0x1550C0u, 0x1550C8u)) {
        return;
    }
    ctx->pc = 0x1550C8u;
label_1550c8:
    // 0x1550c8: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x1550C8u;
    {
        const bool branch_taken_0x1550c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550C8u;
        // 0x1550cc: 0x8e6246d0  lw          $v0, 0x46D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550c8) {
            ctx->pc = 0x15514Cu;
            goto label_15514c;
        }
    }
    ctx->pc = 0x1550D0u;
    // 0x1550d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1550d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1550d4: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1550D4u;
    {
        const bool branch_taken_0x1550d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1550D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550D4u;
        // 0x1550d8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550d4) {
            ctx->pc = 0x155104u;
            goto label_155104;
        }
    }
    ctx->pc = 0x1550DCu;
    // 0x1550dc: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1550dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1550e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1550e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1550e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1550e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1550ec: 0xc055944  jal         func_156510
    ctx->pc = 0x1550ECu;
    SET_GPR_U32(ctx, 31, 0x1550F4u);
    ctx->pc = 0x1550F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1550ECu;
    // 0x1550f0: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156510u, 0x1550ECu, 0x1550F4u)) {
        return;
    }
    ctx->pc = 0x1550F4u;
label_1550f4:
    // 0x1550f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1550f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1550f8: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x1550f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x1550fc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1550FCu;
    {
        const bool branch_taken_0x1550fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550FCu;
        // 0x155100: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550fc) {
            ctx->pc = 0x155224u;
            goto label_155224;
        }
    }
    ctx->pc = 0x155104u;
label_155104:
    // 0x155104: 0x8c4346d8  lw          $v1, 0x46D8($v0)
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18136)));
    // 0x155108: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x155108u;
    {
        const bool branch_taken_0x155108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x15510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155108u;
        // 0x15510c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155108) {
            ctx->pc = 0x155134u;
            goto label_155134;
        }
    }
    ctx->pc = 0x155110u;
    // 0x155110: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x155110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x155114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15511c: 0xc055944  jal         func_156510
    ctx->pc = 0x15511Cu;
    SET_GPR_U32(ctx, 31, 0x155124u);
    ctx->pc = 0x155120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15511Cu;
    // 0x155120: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156510u, 0x15511Cu, 0x155124u)) {
        return;
    }
    ctx->pc = 0x155124u;
label_155124:
    // 0x155124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155128: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x155128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x15512c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15512Cu;
    {
        const bool branch_taken_0x15512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15512Cu;
        // 0x155130: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15512c) {
            ctx->pc = 0x155224u;
            goto label_155224;
        }
    }
    ctx->pc = 0x155134u;
label_155134:
    // 0x155134: 0xc05595e  jal         func_156578
    ctx->pc = 0x155134u;
    SET_GPR_U32(ctx, 31, 0x15513Cu);
    ctx->pc = 0x155138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155134u;
    // 0x155138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156578u, 0x155134u, 0x15513Cu)) {
        return;
    }
    ctx->pc = 0x15513Cu;
label_15513c:
    // 0x15513c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155140: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x155140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x155144: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x155144u;
    {
        const bool branch_taken_0x155144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155144u;
        // 0x155148: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155144) {
            ctx->pc = 0x155224u;
            goto label_155224;
        }
    }
    ctx->pc = 0x15514Cu;
label_15514c:
    // 0x15514c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155150: 0x10a20002  beq         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x155150u;
    {
        const bool branch_taken_0x155150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155150u;
        // 0x155154: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155150) {
            ctx->pc = 0x15515Cu;
            goto label_15515c;
        }
    }
    ctx->pc = 0x155158u;
    // 0x155158: 0x8c4346d8  lw          $v1, 0x46D8($v0)
    ctx->pc = 0x155158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18136)));
label_15515c:
    // 0x15515c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x15515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x155160: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x155164: 0x8c4543f0  lw          $a1, 0x43F0($v0)
    ctx->pc = 0x155164u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43F0u));
    // 0x155168: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x155168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x15516c: 0x10a3002e  beq         $a1, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x15516Cu;
    {
        const bool branch_taken_0x15516c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x155170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15516Cu;
        // 0x155170: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15516c) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x155174u;
    // 0x155174: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155178: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x155178u;
    {
        const bool branch_taken_0x155178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155178u;
        // 0x15517c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155178) {
            ctx->pc = 0x15522Cu;
            goto label_15522c;
        }
    }
    ctx->pc = 0x155180u;
    // 0x155180: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x155180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x155184: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x155184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155188: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x155188u;
    SET_GPR_U32(ctx, 31, 0x155190u);
    ctx->pc = 0x15518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155188u;
    // 0x15518c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x155188u, 0x155190u)) {
        return;
    }
    ctx->pc = 0x155190u;
label_155190:
    // 0x155190: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x155190u;
    {
        const bool branch_taken_0x155190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155190u;
        // 0x155194: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155190) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x155198u;
label_155198:
    // 0x155198: 0x8c43f050  lw          $v1, -0xFB0($v0)
    ctx->pc = 0x155198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963280)));
    // 0x15519c: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15519Cu;
    {
        const bool branch_taken_0x15519c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1551A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15519Cu;
        // 0x1551a0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15519c) {
            ctx->pc = 0x1551DCu;
            goto label_1551dc;
        }
    }
    ctx->pc = 0x1551A4u;
    // 0x1551a4: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x1551a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1551a8: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x1551a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x1551ac: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x1551acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x1551b0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1551b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1551b4: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x1551b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x1551b8: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1551b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1551bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1551BCu;
    SET_GPR_U32(ctx, 31, 0x1551C4u);
    ctx->pc = 0x1551C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551BCu;
    // 0x1551c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1551BCu, 0x1551C4u)) {
        return;
    }
    ctx->pc = 0x1551C4u;
label_1551c4:
    // 0x1551c4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1551c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1551c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1551c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1551CCu;
    SET_GPR_U32(ctx, 31, 0x1551D4u);
    ctx->pc = 0x1551D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551CCu;
    // 0x1551d0: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1551CCu, 0x1551D4u)) {
        return;
    }
    ctx->pc = 0x1551D4u;
label_1551d4:
    // 0x1551d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1551D4u;
    {
        const bool branch_taken_0x1551d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551D4u;
        // 0x1551d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551d4) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x1551DCu;
label_1551dc:
    // 0x1551dc: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x1551dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1551e0: 0x10c40004  beq         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1551E0u;
    {
        const bool branch_taken_0x1551e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1551E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551E0u;
        // 0x1551e4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551e0) {
            ctx->pc = 0x1551F4u;
            goto label_1551f4;
        }
    }
    ctx->pc = 0x1551E8u;
    // 0x1551e8: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x1551e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
    // 0x1551ec: 0x54c3000e  bnel        $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1551ECu;
    {
        const bool branch_taken_0x1551ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1551ec) {
            ctx->pc = 0x1551F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1551ECu;
            // 0x1551f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x1551F4u;
label_1551f4:
    // 0x1551f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1551f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1551f8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1551F8u;
    {
        const bool branch_taken_0x1551f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F8u;
        // 0x1551fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551f8) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x155200u;
    // 0x155200: 0x54c40006  bnel        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155200u;
    {
        const bool branch_taken_0x155200 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x155200) {
            ctx->pc = 0x155204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155200u;
            // 0x155204: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15521Cu;
            goto label_15521c;
        }
    }
    ctx->pc = 0x155208u;
    // 0x155208: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x155208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15520c: 0xc05537e  jal         func_154DF8
    ctx->pc = 0x15520Cu;
    SET_GPR_U32(ctx, 31, 0x155214u);
    ctx->pc = 0x155210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15520Cu;
    // 0x155210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x154DF8u, 0x15520Cu, 0x155214u)) {
        return;
    }
    ctx->pc = 0x155214u;
label_155214:
    // 0x155214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x155214u;
    {
        const bool branch_taken_0x155214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155214u;
        // 0x155218: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155214) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x15521Cu;
label_15521c:
    // 0x15521c: 0xc055238  jal         func_1548E0
    ctx->pc = 0x15521Cu;
    SET_GPR_U32(ctx, 31, 0x155224u);
    ctx->pc = 0x155220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15521Cu;
    // 0x155220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1548E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1548E0u, 0x15521Cu, 0x155224u)) {
        return;
    }
    ctx->pc = 0x155224u;
label_155224:
    // 0x155224: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x155224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_155228:
    // 0x155228: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x155228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15522c:
    // 0x15522c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15522cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155230: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x155230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155238: 0x3e00008  jr          $ra
    ctx->pc = 0x155238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155238u;
        // 0x15523c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155240u;
}
