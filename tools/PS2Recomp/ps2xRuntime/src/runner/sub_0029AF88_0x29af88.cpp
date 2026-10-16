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

// Function: sub_0029AF88
// Address: 0x29af88 - 0x29b1e0
void sub_0029AF88_0x29af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AF88_0x29af88");
#endif

    switch (ctx->pc) {
        case 0x29afd0u: goto label_29afd0;
        case 0x29afe8u: goto label_29afe8;
        case 0x29b024u: goto label_29b024;
        case 0x29b044u: goto label_29b044;
        case 0x29b070u: goto label_29b070;
        case 0x29b09cu: goto label_29b09c;
        case 0x29b0c8u: goto label_29b0c8;
        case 0x29b130u: goto label_29b130;
        case 0x29b154u: goto label_29b154;
        default: break;
    }

    ctx->pc = 0x29af88u;

label_29af88:
    // 0x29af88: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x29af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x29af8c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x29af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29af90: 0xffb30240  sd          $s3, 0x240($sp)
    ctx->pc = 0x29af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 19));
    // 0x29af94: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x29af94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29af98: 0xffb10220  sd          $s1, 0x220($sp)
    ctx->pc = 0x29af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 17));
    // 0x29af9c: 0x69e03  sra         $s3, $a2, 24
    ctx->pc = 0x29af9cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 24));
    // 0x29afa0: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x29afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x29afa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29afa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afa8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29afa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afac: 0xffb50260  sd          $s5, 0x260($sp)
    ctx->pc = 0x29afacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 21));
    // 0x29afb0: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x29afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x29afb4: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x29afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
    // 0x29afb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29afb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afbc: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x29afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x29afc0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x29afc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x29afc4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29afc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afc8: 0xc0a799c  jal         func_29E670
    ctx->pc = 0x29AFC8u;
    SET_GPR_U32(ctx, 31, 0x29AFD0u);
    ctx->pc = 0x29AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFC8u;
    // 0x29afcc: 0x27a90200  addiu       $t1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E670u, 0x29AFC8u, 0x29AFD0u)) {
        return;
    }
    ctx->pc = 0x29AFD0u;
label_29afd0:
    // 0x29afd0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x29afd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29afd4: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29afd8: 0x10750005  beq         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AFD8u;
    {
        const bool branch_taken_0x29afd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x29AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFD8u;
        // 0x29afdc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afd8) {
            ctx->pc = 0x29AFF0u;
            goto label_29aff0;
        }
    }
    ctx->pc = 0x29AFE0u;
    // 0x29afe0: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x29AFE0u;
    SET_GPR_U32(ctx, 31, 0x29AFE8u);
    ctx->pc = 0x29AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFE0u;
    // 0x29afe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x29AFE0u, 0x29AFE8u)) {
        return;
    }
    ctx->pc = 0x29AFE8u;
label_29afe8:
    // 0x29afe8: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x29afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x29afec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29afecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29aff0:
    // 0x29aff0: 0xde140000  ld          $s4, 0x0($s0)
    ctx->pc = 0x29aff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29aff4: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x29aff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x29aff8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29affc: 0x282102d  daddu       $v0, $s4, $v0
    ctx->pc = 0x29affcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
    // 0x29b000: 0x10750015  beq         $v1, $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x29B000u;
    {
        const bool branch_taken_0x29b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x29B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B000u;
        // 0x29b004: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b000) {
            ctx->pc = 0x29B058u;
            goto label_29b058;
        }
    }
    ctx->pc = 0x29B008u;
    // 0x29b008: 0x10730013  beq         $v1, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x29B008u;
    {
        const bool branch_taken_0x29b008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x29B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B008u;
        // 0x29b00c: 0x64420001  daddiu      $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b008) {
            ctx->pc = 0x29B058u;
            goto label_29b058;
        }
    }
    ctx->pc = 0x29B010u;
    // 0x29b010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b014: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x29b014u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x29b018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b01c: 0xc0a6be2  jal         func_29AF88
    ctx->pc = 0x29B01Cu;
    SET_GPR_U32(ctx, 31, 0x29B024u);
    ctx->pc = 0x29B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B01Cu;
    // 0x29b020: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AF88u;
    goto label_29af88;
    ctx->pc = 0x29B024u;
label_29b024:
    // 0x29b024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29b024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b028: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x29B028u;
    {
        const bool branch_taken_0x29b028 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B028u;
        // 0x29b02c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b028) {
            ctx->pc = 0x29B09Cu;
            goto label_29b09c;
        }
    }
    ctx->pc = 0x29B030u;
    // 0x29b030: 0x14803c  dsll32      $s0, $s4, 0
    ctx->pc = 0x29b030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 0));
    // 0x29b034: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29b034u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29b038: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x29b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x29b03c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29B03Cu;
    SET_GPR_U32(ctx, 31, 0x29B044u);
    ctx->pc = 0x29B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B03Cu;
    // 0x29b040: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29B03Cu, 0x29B044u)) {
        return;
    }
    ctx->pc = 0x29B044u;
label_29b044:
    // 0x29b044: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x29b044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x29b048: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x29b048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29b04c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x29b04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x29b050: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29B050u;
    {
        const bool branch_taken_0x29b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B050u;
        // 0x29b054: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b050) {
            ctx->pc = 0x29B09Cu;
            goto label_29b09c;
        }
    }
    ctx->pc = 0x29B058u;
label_29b058:
    // 0x29b058: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x29b058u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b05c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x29b05cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x29b060: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29b060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b064: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29b064u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x29b068: 0xc080888  jal         func_202220
    ctx->pc = 0x29B068u;
    SET_GPR_U32(ctx, 31, 0x29B070u);
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x29B068u, 0x29B070u)) {
        return;
    }
    ctx->pc = 0x29B070u;
label_29b070:
    // 0x29b070: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29b070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b074: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B074u;
    {
        const bool branch_taken_0x29b074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B074u;
        // 0x29b078: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b074) {
            ctx->pc = 0x29B09Cu;
            goto label_29b09c;
        }
    }
    ctx->pc = 0x29B07Cu;
    // 0x29b07c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b080: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29b080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b084: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29b088: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x29b088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b08c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b090: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x29b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x29b094: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29B094u;
    SET_GPR_U32(ctx, 31, 0x29B09Cu);
    ctx->pc = 0x29B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B094u;
    // 0x29b098: 0x922023  subu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29B094u, 0x29B09Cu)) {
        return;
    }
    ctx->pc = 0x29B09Cu;
label_29b09c:
    // 0x29b09c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29b09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0a0: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x29b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x29b0a4: 0xdfb50260  ld          $s5, 0x260($sp)
    ctx->pc = 0x29b0a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x29b0a8: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x29b0a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x29b0ac: 0xdfb30240  ld          $s3, 0x240($sp)
    ctx->pc = 0x29b0acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x29b0b0: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x29b0b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x29b0b4: 0xdfb10220  ld          $s1, 0x220($sp)
    ctx->pc = 0x29b0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x29b0b8: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x29b0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x29b0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0BCu;
        // 0x29b0c0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B0C4u;
    // 0x29b0c4: 0x0  nop
    ctx->pc = 0x29b0c4u;
    // NOP
label_29b0c8:
    // 0x29b0c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b0cc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x29b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29b0d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29b0d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29b0d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29b0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29b0e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29b0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b0ec: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29b0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29b0f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B0F0u;
    {
        const bool branch_taken_0x29b0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0F0u;
        // 0x29b0f4: 0x68e03  sra         $s1, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0f0) {
            ctx->pc = 0x29B108u;
            goto label_29b108;
        }
    }
    ctx->pc = 0x29B0F8u;
    // 0x29b0f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29b0fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b100: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29B100u;
    {
        const bool branch_taken_0x29b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B100u;
        // 0x29b104: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b100) {
            ctx->pc = 0x29B134u;
            goto label_29b134;
        }
    }
    ctx->pc = 0x29B108u;
label_29b108:
    // 0x29b108: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x29b108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29b10c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B10Cu;
    {
        const bool branch_taken_0x29b10c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B10Cu;
        // 0x29b110: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b10c) {
            ctx->pc = 0x29B134u;
            goto label_29b134;
        }
    }
    ctx->pc = 0x29B114u;
    // 0x29b114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b118: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29b11c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29b120: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B120u;
    {
        const bool branch_taken_0x29b120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B120u;
        // 0x29b124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b120) {
            ctx->pc = 0x29B134u;
            goto label_29b134;
        }
    }
    ctx->pc = 0x29B128u;
    // 0x29b128: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29B128u;
    SET_GPR_U32(ctx, 31, 0x29B130u);
    ctx->pc = 0x29B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B128u;
    // 0x29b12c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29B128u, 0x29B130u)) {
        return;
    }
    ctx->pc = 0x29B130u;
label_29b130:
    // 0x29b130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b134:
    // 0x29b134: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x29B134u;
    {
        const bool branch_taken_0x29b134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B134u;
        // 0x29b138: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b134) {
            ctx->pc = 0x29B1B8u;
            goto label_29b1b8;
        }
    }
    ctx->pc = 0x29B13Cu;
    // 0x29b13c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b140: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x29b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x29b144: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29b144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b148: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x29b148u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b14c: 0xc0a6be2  jal         func_29AF88
    ctx->pc = 0x29B14Cu;
    SET_GPR_U32(ctx, 31, 0x29B154u);
    ctx->pc = 0x29B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B14Cu;
    // 0x29b150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AF88u;
    goto label_29af88;
    ctx->pc = 0x29B154u;
label_29b154:
    // 0x29b154: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B154u;
    {
        const bool branch_taken_0x29b154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B154u;
        // 0x29b158: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b154) {
            ctx->pc = 0x29B170u;
            goto label_29b170;
        }
    }
    ctx->pc = 0x29B15Cu;
    // 0x29b15c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29b15cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b160: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b164: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B168u;
    {
        const bool branch_taken_0x29b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B168u;
        // 0x29b16c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b168) {
            ctx->pc = 0x29B178u;
            goto label_29b178;
        }
    }
    ctx->pc = 0x29B170u;
label_29b170:
    // 0x29b170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b174: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29b174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_29b178:
    // 0x29b178: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29b17c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x29b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x29b180: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29B180u;
    {
        const bool branch_taken_0x29b180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B180u;
        // 0x29b184: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b180) {
            ctx->pc = 0x29B1C4u;
            goto label_29b1c4;
        }
    }
    ctx->pc = 0x29B188u;
    // 0x29b188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b18c: 0x9043001a  lbu         $v1, 0x1A($v0)
    ctx->pc = 0x29b18cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x29b190: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x29b190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x29b194: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x29b194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b198: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29b198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b19c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B19Cu;
    {
        const bool branch_taken_0x29b19c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B19Cu;
        // 0x29b1a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b19c) {
            ctx->pc = 0x29B1C4u;
            goto label_29b1c4;
        }
    }
    ctx->pc = 0x29B1A4u;
    // 0x29b1a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b1a8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29b1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29b1ac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29b1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29b1b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B1B0u;
    {
        const bool branch_taken_0x29b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1B0u;
        // 0x29b1b4: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1b0) {
            ctx->pc = 0x29B1C0u;
            goto label_29b1c0;
        }
    }
    ctx->pc = 0x29B1B8u;
label_29b1b8:
    // 0x29b1b8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x29b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x29b1bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_29b1c0:
    // 0x29b1c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b1c4:
    // 0x29b1c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29b1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b1c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29b1c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b1cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29b1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b1d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29b1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x29B1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1D4u;
        // 0x29b1d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B1DCu;
    // 0x29b1dc: 0x0  nop
    ctx->pc = 0x29b1dcu;
    // NOP
    ctx->pc = 0x29b1e0u;
}
