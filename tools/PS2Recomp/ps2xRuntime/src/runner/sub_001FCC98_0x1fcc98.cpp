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

// Function: sub_001FCC98
// Address: 0x1fcc98 - 0x1fce48
void sub_001FCC98_0x1fcc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCC98_0x1fcc98");
#endif

    switch (ctx->pc) {
        case 0x1fcc98u: goto label_1fcc98;
        case 0x1fcc9cu: goto label_1fcc9c;
        case 0x1fcca0u: goto label_1fcca0;
        case 0x1fcca4u: goto label_1fcca4;
        case 0x1fcca8u: goto label_1fcca8;
        case 0x1fccacu: goto label_1fccac;
        case 0x1fccb0u: goto label_1fccb0;
        case 0x1fccb4u: goto label_1fccb4;
        case 0x1fccb8u: goto label_1fccb8;
        case 0x1fccbcu: goto label_1fccbc;
        case 0x1fccc0u: goto label_1fccc0;
        case 0x1fccc4u: goto label_1fccc4;
        case 0x1fccc8u: goto label_1fccc8;
        case 0x1fccccu: goto label_1fcccc;
        case 0x1fccd0u: goto label_1fccd0;
        case 0x1fccd4u: goto label_1fccd4;
        case 0x1fccd8u: goto label_1fccd8;
        case 0x1fccdcu: goto label_1fccdc;
        case 0x1fcce0u: goto label_1fcce0;
        case 0x1fcce4u: goto label_1fcce4;
        case 0x1fcce8u: goto label_1fcce8;
        case 0x1fccecu: goto label_1fccec;
        case 0x1fccf0u: goto label_1fccf0;
        case 0x1fccf4u: goto label_1fccf4;
        case 0x1fccf8u: goto label_1fccf8;
        case 0x1fccfcu: goto label_1fccfc;
        case 0x1fcd00u: goto label_1fcd00;
        case 0x1fcd04u: goto label_1fcd04;
        case 0x1fcd08u: goto label_1fcd08;
        case 0x1fcd0cu: goto label_1fcd0c;
        case 0x1fcd10u: goto label_1fcd10;
        case 0x1fcd14u: goto label_1fcd14;
        case 0x1fcd18u: goto label_1fcd18;
        case 0x1fcd1cu: goto label_1fcd1c;
        case 0x1fcd20u: goto label_1fcd20;
        case 0x1fcd24u: goto label_1fcd24;
        case 0x1fcd28u: goto label_1fcd28;
        case 0x1fcd2cu: goto label_1fcd2c;
        case 0x1fcd30u: goto label_1fcd30;
        case 0x1fcd34u: goto label_1fcd34;
        case 0x1fcd38u: goto label_1fcd38;
        case 0x1fcd3cu: goto label_1fcd3c;
        case 0x1fcd40u: goto label_1fcd40;
        case 0x1fcd44u: goto label_1fcd44;
        case 0x1fcd48u: goto label_1fcd48;
        case 0x1fcd4cu: goto label_1fcd4c;
        case 0x1fcd50u: goto label_1fcd50;
        case 0x1fcd54u: goto label_1fcd54;
        case 0x1fcd58u: goto label_1fcd58;
        case 0x1fcd5cu: goto label_1fcd5c;
        case 0x1fcd60u: goto label_1fcd60;
        case 0x1fcd64u: goto label_1fcd64;
        case 0x1fcd68u: goto label_1fcd68;
        case 0x1fcd6cu: goto label_1fcd6c;
        case 0x1fcd70u: goto label_1fcd70;
        case 0x1fcd74u: goto label_1fcd74;
        case 0x1fcd78u: goto label_1fcd78;
        case 0x1fcd7cu: goto label_1fcd7c;
        case 0x1fcd80u: goto label_1fcd80;
        case 0x1fcd84u: goto label_1fcd84;
        case 0x1fcd88u: goto label_1fcd88;
        case 0x1fcd8cu: goto label_1fcd8c;
        case 0x1fcd90u: goto label_1fcd90;
        case 0x1fcd94u: goto label_1fcd94;
        case 0x1fcd98u: goto label_1fcd98;
        case 0x1fcd9cu: goto label_1fcd9c;
        case 0x1fcda0u: goto label_1fcda0;
        case 0x1fcda4u: goto label_1fcda4;
        case 0x1fcda8u: goto label_1fcda8;
        case 0x1fcdacu: goto label_1fcdac;
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcdb4u: goto label_1fcdb4;
        case 0x1fcdb8u: goto label_1fcdb8;
        case 0x1fcdbcu: goto label_1fcdbc;
        case 0x1fcdc0u: goto label_1fcdc0;
        case 0x1fcdc4u: goto label_1fcdc4;
        case 0x1fcdc8u: goto label_1fcdc8;
        case 0x1fcdccu: goto label_1fcdcc;
        case 0x1fcdd0u: goto label_1fcdd0;
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcdd8u: goto label_1fcdd8;
        case 0x1fcddcu: goto label_1fcddc;
        case 0x1fcde0u: goto label_1fcde0;
        case 0x1fcde4u: goto label_1fcde4;
        case 0x1fcde8u: goto label_1fcde8;
        case 0x1fcdecu: goto label_1fcdec;
        case 0x1fcdf0u: goto label_1fcdf0;
        case 0x1fcdf4u: goto label_1fcdf4;
        case 0x1fcdf8u: goto label_1fcdf8;
        case 0x1fcdfcu: goto label_1fcdfc;
        case 0x1fce00u: goto label_1fce00;
        case 0x1fce04u: goto label_1fce04;
        case 0x1fce08u: goto label_1fce08;
        case 0x1fce0cu: goto label_1fce0c;
        case 0x1fce10u: goto label_1fce10;
        case 0x1fce14u: goto label_1fce14;
        case 0x1fce18u: goto label_1fce18;
        case 0x1fce1cu: goto label_1fce1c;
        case 0x1fce20u: goto label_1fce20;
        case 0x1fce24u: goto label_1fce24;
        case 0x1fce28u: goto label_1fce28;
        case 0x1fce2cu: goto label_1fce2c;
        case 0x1fce30u: goto label_1fce30;
        case 0x1fce34u: goto label_1fce34;
        case 0x1fce38u: goto label_1fce38;
        case 0x1fce3cu: goto label_1fce3c;
        case 0x1fce40u: goto label_1fce40;
        case 0x1fce44u: goto label_1fce44;
        default: break;
    }

    ctx->pc = 0x1fcc98u;

label_1fcc98:
    // 0x1fcc98: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_1fcc9c:
    // 0x1fcc9c: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x1fcc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_1fcca0:
    // 0x1fcca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fcca4:
    // 0x1fcca4: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x1fcca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_1fcca8:
    // 0x1fcca8: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x1fcca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_1fccac:
    // 0x1fccac: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x1fccacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_1fccb0:
    // 0x1fccb0: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_1fccb4:
    // 0x1fccb4: 0x7fb40420  sq          $s4, 0x420($sp)
    ctx->pc = 0x1fccb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 20));
label_1fccb8:
    // 0x1fccb8: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x1fccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_1fccbc:
    // 0x1fccbc: 0xc0c4ab8  jal         func_312AE0
label_1fccc0:
    if (ctx->pc == 0x1FCCC0u) {
        ctx->pc = 0x1FCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCBCu;
        // 0x1fccc0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCC4u;
        goto label_1fccc4;
    }
    ctx->pc = 0x1FCCBCu;
    SET_GPR_U32(ctx, 31, 0x1FCCC4u);
    ctx->pc = 0x1FCCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCBCu;
    // 0x1fccc0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FCCBCu, 0x1FCCC4u)) {
        return;
    }
    ctx->pc = 0x1FCCC4u;
label_1fccc4:
    // 0x1fccc4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fccc8:
    // 0x1fccc8: 0xc080924  jal         func_202490
label_1fcccc:
    if (ctx->pc == 0x1FCCCCu) {
        ctx->pc = 0x1FCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCC8u;
        // 0x1fcccc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCD0u;
        goto label_1fccd0;
    }
    ctx->pc = 0x1FCCC8u;
    SET_GPR_U32(ctx, 31, 0x1FCCD0u);
    ctx->pc = 0x1FCCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCC8u;
    // 0x1fcccc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1FCCC8u, 0x1FCCD0u)) {
        return;
    }
    ctx->pc = 0x1FCCD0u;
label_1fccd0:
    // 0x1fccd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fccd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fccd4:
    // 0x1fccd4: 0x2631108c  addiu       $s1, $s1, 0x108C
    ctx->pc = 0x1fccd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4236));
label_1fccd8:
    // 0x1fccd8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fccdc:
    // 0x1fccdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fcce0:
    // 0x1fcce0: 0x40f809  jalr        $v0
label_1fcce4:
    if (ctx->pc == 0x1FCCE4u) {
        ctx->pc = 0x1FCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCE0u;
        // 0x1fcce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCE8u;
        goto label_1fcce8;
    }
    ctx->pc = 0x1FCCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCCE8u);
        ctx->pc = 0x1FCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCE0u;
        // 0x1fcce4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCCE0u, 0x1FCCE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCCE8u;
label_1fcce8:
    // 0x1fcce8: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x1fcce8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1fccec:
    // 0x1fccec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fccecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fccf0:
    // 0x1fccf0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1fccf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fccf4:
    // 0x1fccf4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1fccf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1fccf8:
    // 0x1fccf8: 0x27b10400  addiu       $s1, $sp, 0x400
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_1fccfc:
    // 0x1fccfc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_1fcd00:
    if (ctx->pc == 0x1FCD00u) {
        ctx->pc = 0x1FCD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCFCu;
        // 0x1fcd00: 0x27b30404  addiu       $s3, $sp, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD04u;
        goto label_1fcd04;
    }
    ctx->pc = 0x1FCCFCu;
    {
        const bool branch_taken_0x1fccfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCFCu;
        // 0x1fcd00: 0x27b30404  addiu       $s3, $sp, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccfc) {
            ctx->pc = 0x1FCD34u;
            goto label_1fcd34;
        }
    }
    ctx->pc = 0x1FCD04u;
label_1fcd04:
    // 0x1fcd04: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1fcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1fcd08:
    // 0x1fcd08: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_1fcd0c:
    if (ctx->pc == 0x1FCD0Cu) {
        ctx->pc = 0x1FCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD08u;
        // 0x1fcd0c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD10u;
        goto label_1fcd10;
    }
    ctx->pc = 0x1FCD08u;
    {
        const bool branch_taken_0x1fcd08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD08u;
        // 0x1fcd0c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd08) {
            ctx->pc = 0x1FCD34u;
            goto label_1fcd34;
        }
    }
    ctx->pc = 0x1FCD10u;
label_1fcd10:
    // 0x1fcd10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1fcd10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1fcd14:
    // 0x1fcd14: 0x0  nop
    ctx->pc = 0x1fcd14u;
    // NOP
label_1fcd18:
    // 0x1fcd18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fcd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fcd1c:
    // 0x1fcd1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fcd20:
    // 0x1fcd20: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1fcd20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1fcd24:
    // 0x1fcd24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fcd28:
    if (ctx->pc == 0x1FCD28u) {
        ctx->pc = 0x1FCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD24u;
        // 0x1fcd28: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD2Cu;
        goto label_1fcd2c;
    }
    ctx->pc = 0x1FCD24u;
    {
        const bool branch_taken_0x1fcd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD24u;
        // 0x1fcd28: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd24) {
            ctx->pc = 0x1FCD34u;
            goto label_1fcd34;
        }
    }
    ctx->pc = 0x1FCD2Cu;
label_1fcd2c:
    // 0x1fcd2c: 0x5445fffa  bnel        $v0, $a1, . + 4 + (-0x6 << 2)
label_1fcd30:
    if (ctx->pc == 0x1FCD30u) {
        ctx->pc = 0x1FCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD2Cu;
        // 0x1fcd30: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD34u;
        goto label_1fcd34;
    }
    ctx->pc = 0x1FCD2Cu;
    {
        const bool branch_taken_0x1fcd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fcd2c) {
            ctx->pc = 0x1FCD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCD2Cu;
            // 0x1fcd30: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcd18;
        }
    }
    ctx->pc = 0x1FCD34u;
label_1fcd34:
    // 0x1fcd34: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
label_1fcd38:
    if (ctx->pc == 0x1FCD38u) {
        ctx->pc = 0x1FCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD34u;
        // 0x1fcd38: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD3Cu;
        goto label_1fcd3c;
    }
    ctx->pc = 0x1FCD34u;
    {
        const bool branch_taken_0x1fcd34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD34u;
        // 0x1fcd38: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd34) {
            ctx->pc = 0x1FCD64u;
            goto label_1fcd64;
        }
    }
    ctx->pc = 0x1FCD3Cu;
label_1fcd3c:
    // 0x1fcd3c: 0xc0c4ab8  jal         func_312AE0
label_1fcd40:
    if (ctx->pc == 0x1FCD40u) {
        ctx->pc = 0x1FCD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD3Cu;
        // 0x1fcd40: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD44u;
        goto label_1fcd44;
    }
    ctx->pc = 0x1FCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD44u);
    ctx->pc = 0x1FCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD3Cu;
    // 0x1fcd40: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1FCD3Cu, 0x1FCD44u)) {
        return;
    }
    ctx->pc = 0x1FCD44u;
label_1fcd44:
    // 0x1fcd44: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fcd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fcd48:
    // 0x1fcd48: 0xc080924  jal         func_202490
label_1fcd4c:
    if (ctx->pc == 0x1FCD4Cu) {
        ctx->pc = 0x1FCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD48u;
        // 0x1fcd4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD50u;
        goto label_1fcd50;
    }
    ctx->pc = 0x1FCD48u;
    SET_GPR_U32(ctx, 31, 0x1FCD50u);
    ctx->pc = 0x1FCD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD48u;
    // 0x1fcd4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1FCD48u, 0x1FCD50u)) {
        return;
    }
    ctx->pc = 0x1FCD50u;
label_1fcd50:
    // 0x1fcd50: 0x2683108c  addiu       $v1, $s4, 0x108C
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4236));
label_1fcd54:
    // 0x1fcd54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd58:
    // 0x1fcd58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fcd5c:
    // 0x1fcd5c: 0x40f809  jalr        $v0
label_1fcd60:
    if (ctx->pc == 0x1FCD60u) {
        ctx->pc = 0x1FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD5Cu;
        // 0x1fcd60: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD64u;
        goto label_1fcd64;
    }
    ctx->pc = 0x1FCD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCD64u);
        ctx->pc = 0x1FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD5Cu;
        // 0x1fcd60: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCD5Cu, 0x1FCD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FCD64u;
label_1fcd64:
    // 0x1fcd64: 0xc07f2f2  jal         func_1FCBC8
label_1fcd68:
    if (ctx->pc == 0x1FCD68u) {
        ctx->pc = 0x1FCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD64u;
        // 0x1fcd68: 0xafbd0400  sw          $sp, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD6Cu;
        goto label_1fcd6c;
    }
    ctx->pc = 0x1FCD64u;
    SET_GPR_U32(ctx, 31, 0x1FCD6Cu);
    ctx->pc = 0x1FCD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD64u;
    // 0x1fcd68: 0xafbd0400  sw          $sp, 0x400($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FCD64u, 0x1FCD6Cu)) {
        return;
    }
    ctx->pc = 0x1FCD6Cu;
label_1fcd6c:
    // 0x1fcd6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd70:
    // 0x1fcd70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd74:
    // 0x1fcd74: 0xc07f622  jal         func_1FD888
label_1fcd78:
    if (ctx->pc == 0x1FCD78u) {
        ctx->pc = 0x1FCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD74u;
        // 0x1fcd78: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD7Cu;
        goto label_1fcd7c;
    }
    ctx->pc = 0x1FCD74u;
    SET_GPR_U32(ctx, 31, 0x1FCD7Cu);
    ctx->pc = 0x1FCD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD74u;
    // 0x1fcd78: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD888u, 0x1FCD74u, 0x1FCD7Cu)) {
        return;
    }
    ctx->pc = 0x1FCD7Cu;
label_1fcd7c:
    // 0x1fcd7c: 0xc07f2f2  jal         func_1FCBC8
label_1fcd80:
    if (ctx->pc == 0x1FCD80u) {
        ctx->pc = 0x1FCD84u;
        goto label_1fcd84;
    }
    ctx->pc = 0x1FCD7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD84u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FCD7Cu, 0x1FCD84u)) {
        return;
    }
    ctx->pc = 0x1FCD84u;
label_1fcd84:
    // 0x1fcd84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fcd88:
    // 0x1fcd88: 0x8fb00200  lw          $s0, 0x200($sp)
    ctx->pc = 0x1fcd88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_1fcd8c:
    // 0x1fcd8c: 0x10700003  beq         $v1, $s0, . + 4 + (0x3 << 2)
label_1fcd90:
    if (ctx->pc == 0x1FCD90u) {
        ctx->pc = 0x1FCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD8Cu;
        // 0x1fcd90: 0xafa30210  sw          $v1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD94u;
        goto label_1fcd94;
    }
    ctx->pc = 0x1FCD8Cu;
    {
        const bool branch_taken_0x1fcd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1FCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD8Cu;
        // 0x1fcd90: 0xafa30210  sw          $v1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd8c) {
            ctx->pc = 0x1FCD9Cu;
            goto label_1fcd9c;
        }
    }
    ctx->pc = 0x1FCD94u;
label_1fcd94:
    // 0x1fcd94: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fcd98:
    if (ctx->pc == 0x1FCD98u) {
        ctx->pc = 0x1FCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD94u;
        // 0x1fcd98: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD9Cu;
        goto label_1fcd9c;
    }
    ctx->pc = 0x1FCD94u;
    {
        const bool branch_taken_0x1fcd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD94u;
        // 0x1fcd98: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd94) {
            ctx->pc = 0x1FCDA0u;
            goto label_1fcda0;
        }
    }
    ctx->pc = 0x1FCD9Cu;
label_1fcd9c:
    // 0x1fcd9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fcd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcda0:
    // 0x1fcda0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1fcda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1fcda4:
    // 0x1fcda4: 0xc080858  jal         func_202160
label_1fcda8:
    if (ctx->pc == 0x1FCDA8u) {
        ctx->pc = 0x1FCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDA4u;
        // 0x1fcda8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDACu;
        goto label_1fcdac;
    }
    ctx->pc = 0x1FCDA4u;
    SET_GPR_U32(ctx, 31, 0x1FCDACu);
    ctx->pc = 0x1FCDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDA4u;
    // 0x1fcda8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1FCDA4u, 0x1FCDACu)) {
        return;
    }
    ctx->pc = 0x1FCDACu;
label_1fcdac:
    // 0x1fcdac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fcdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdb0:
    // 0x1fcdb0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1fcdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1fcdb4:
    // 0x1fcdb4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fcdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1fcdb8:
    // 0x1fcdb8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1fcdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1fcdbc:
    // 0x1fcdbc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1fcdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_1fcdc0:
    // 0x1fcdc0: 0xc07f2f2  jal         func_1FCBC8
label_1fcdc4:
    if (ctx->pc == 0x1FCDC4u) {
        ctx->pc = 0x1FCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDC0u;
        // 0x1fcdc4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDC8u;
        goto label_1fcdc8;
    }
    ctx->pc = 0x1FCDC0u;
    SET_GPR_U32(ctx, 31, 0x1FCDC8u);
    ctx->pc = 0x1FCDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDC0u;
    // 0x1fcdc4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FCDC0u, 0x1FCDC8u)) {
        return;
    }
    ctx->pc = 0x1FCDC8u;
label_1fcdc8:
    // 0x1fcdc8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1fcdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1fcdcc:
    // 0x1fcdcc: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1fcdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1fcdd0:
    // 0x1fcdd0: 0xafb10214  sw          $s1, 0x214($sp)
    ctx->pc = 0x1fcdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 17));
label_1fcdd4:
    // 0x1fcdd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdd8:
    // 0x1fcdd8: 0xafb20220  sw          $s2, 0x220($sp)
    ctx->pc = 0x1fcdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 18));
label_1fcddc:
    // 0x1fcddc: 0xafb10224  sw          $s1, 0x224($sp)
    ctx->pc = 0x1fcddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 17));
label_1fcde0:
    // 0x1fcde0: 0xc07f730  jal         func_1FDCC0
label_1fcde4:
    if (ctx->pc == 0x1FCDE4u) {
        ctx->pc = 0x1FCDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDE0u;
        // 0x1fcde4: 0xafb20210  sw          $s2, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDE8u;
        goto label_1fcde8;
    }
    ctx->pc = 0x1FCDE0u;
    SET_GPR_U32(ctx, 31, 0x1FCDE8u);
    ctx->pc = 0x1FCDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDE0u;
    // 0x1fcde4: 0xafb20210  sw          $s2, 0x210($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FDCC0u, 0x1FCDE0u, 0x1FCDE8u)) {
        return;
    }
    ctx->pc = 0x1FCDE8u;
label_1fcde8:
    // 0x1fcde8: 0xc07f2f2  jal         func_1FCBC8
label_1fcdec:
    if (ctx->pc == 0x1FCDECu) {
        ctx->pc = 0x1FCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDE8u;
        // 0x1fcdec: 0xafb20404  sw          $s2, 0x404($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDF0u;
        goto label_1fcdf0;
    }
    ctx->pc = 0x1FCDE8u;
    SET_GPR_U32(ctx, 31, 0x1FCDF0u);
    ctx->pc = 0x1FCDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDE8u;
    // 0x1fcdec: 0xafb20404  sw          $s2, 0x404($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FCDE8u, 0x1FCDF0u)) {
        return;
    }
    ctx->pc = 0x1FCDF0u;
label_1fcdf0:
    // 0x1fcdf0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1fcdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1fcdf4:
    // 0x1fcdf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdf8:
    // 0x1fcdf8: 0xc07f622  jal         func_1FD888
label_1fcdfc:
    if (ctx->pc == 0x1FCDFCu) {
        ctx->pc = 0x1FCDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDF8u;
        // 0x1fcdfc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE00u;
        goto label_1fce00;
    }
    ctx->pc = 0x1FCDF8u;
    SET_GPR_U32(ctx, 31, 0x1FCE00u);
    ctx->pc = 0x1FCDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDF8u;
    // 0x1fcdfc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD888u, 0x1FCDF8u, 0x1FCE00u)) {
        return;
    }
    ctx->pc = 0x1FCE00u;
label_1fce00:
    // 0x1fce00: 0xc07f2f2  jal         func_1FCBC8
label_1fce04:
    if (ctx->pc == 0x1FCE04u) {
        ctx->pc = 0x1FCE08u;
        goto label_1fce08;
    }
    ctx->pc = 0x1FCE00u;
    SET_GPR_U32(ctx, 31, 0x1FCE08u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FCE00u, 0x1FCE08u)) {
        return;
    }
    ctx->pc = 0x1FCE08u;
label_1fce08:
    // 0x1fce08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fce0c:
    // 0x1fce0c: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x1fce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_1fce10:
    // 0x1fce10: 0xafa30210  sw          $v1, 0x210($sp)
    ctx->pc = 0x1fce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 3));
label_1fce14:
    // 0x1fce14: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
label_1fce18:
    if (ctx->pc == 0x1FCE18u) {
        ctx->pc = 0x1FCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE14u;
        // 0x1fce18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE1Cu;
        goto label_1fce1c;
    }
    ctx->pc = 0x1FCE14u;
    {
        const bool branch_taken_0x1fce14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE14u;
        // 0x1fce18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce14) {
            ctx->pc = 0x1FCE20u;
            goto label_1fce20;
        }
    }
    ctx->pc = 0x1FCE1Cu;
label_1fce1c:
    // 0x1fce1c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1fce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1fce20:
    // 0x1fce20: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1fce20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_1fce24:
    // 0x1fce24: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x1fce24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_1fce28:
    // 0x1fce28: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x1fce28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_1fce2c:
    // 0x1fce2c: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x1fce2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_1fce30:
    // 0x1fce30: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x1fce30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_1fce34:
    // 0x1fce34: 0x7bb40420  lq          $s4, 0x420($sp)
    ctx->pc = 0x1fce34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_1fce38:
    // 0x1fce38: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x1fce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_1fce3c:
    // 0x1fce3c: 0x3e00008  jr          $ra
label_1fce40:
    if (ctx->pc == 0x1FCE40u) {
        ctx->pc = 0x1FCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE3Cu;
        // 0x1fce40: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE44u;
        goto label_1fce44;
    }
    ctx->pc = 0x1FCE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE3Cu;
        // 0x1fce40: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCE44u;
label_1fce44:
    // 0x1fce44: 0x0  nop
    ctx->pc = 0x1fce44u;
    // NOP
    ctx->pc = 0x1fce48u;
}
