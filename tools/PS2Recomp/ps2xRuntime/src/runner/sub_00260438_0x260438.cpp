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

// Function: sub_00260438
// Address: 0x260438 - 0x260510
void sub_00260438_0x260438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260438_0x260438");
#endif

    switch (ctx->pc) {
        case 0x260438u: goto label_260438;
        case 0x26043cu: goto label_26043c;
        case 0x260440u: goto label_260440;
        case 0x260444u: goto label_260444;
        case 0x260448u: goto label_260448;
        case 0x26044cu: goto label_26044c;
        case 0x260450u: goto label_260450;
        case 0x260454u: goto label_260454;
        case 0x260458u: goto label_260458;
        case 0x26045cu: goto label_26045c;
        case 0x260460u: goto label_260460;
        case 0x260464u: goto label_260464;
        case 0x260468u: goto label_260468;
        case 0x26046cu: goto label_26046c;
        case 0x260470u: goto label_260470;
        case 0x260474u: goto label_260474;
        case 0x260478u: goto label_260478;
        case 0x26047cu: goto label_26047c;
        case 0x260480u: goto label_260480;
        case 0x260484u: goto label_260484;
        case 0x260488u: goto label_260488;
        case 0x26048cu: goto label_26048c;
        case 0x260490u: goto label_260490;
        case 0x260494u: goto label_260494;
        case 0x260498u: goto label_260498;
        case 0x26049cu: goto label_26049c;
        case 0x2604a0u: goto label_2604a0;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604a8u: goto label_2604a8;
        case 0x2604acu: goto label_2604ac;
        case 0x2604b0u: goto label_2604b0;
        case 0x2604b4u: goto label_2604b4;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604bcu: goto label_2604bc;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604ccu: goto label_2604cc;
        case 0x2604d0u: goto label_2604d0;
        case 0x2604d4u: goto label_2604d4;
        case 0x2604d8u: goto label_2604d8;
        case 0x2604dcu: goto label_2604dc;
        case 0x2604e0u: goto label_2604e0;
        case 0x2604e4u: goto label_2604e4;
        case 0x2604e8u: goto label_2604e8;
        case 0x2604ecu: goto label_2604ec;
        case 0x2604f0u: goto label_2604f0;
        case 0x2604f4u: goto label_2604f4;
        case 0x2604f8u: goto label_2604f8;
        case 0x2604fcu: goto label_2604fc;
        case 0x260500u: goto label_260500;
        case 0x260504u: goto label_260504;
        case 0x260508u: goto label_260508;
        case 0x26050cu: goto label_26050c;
        default: break;
    }

    ctx->pc = 0x260438u;

label_260438:
    // 0x260438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x260438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_26043c:
    // 0x26043c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_260440:
    // 0x260440: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x260440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_260444:
    // 0x260444: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x260444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_260448:
    // 0x260448: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x260448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_26044c:
    // 0x26044c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26044cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_260450:
    // 0x260450: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x260450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_260454:
    // 0x260454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260458:
    // 0x260458: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x260458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_26045c:
    // 0x26045c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_260460:
    if (ctx->pc == 0x260460u) {
        ctx->pc = 0x260460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26045Cu;
        // 0x260460: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260464u;
        goto label_260464;
    }
    ctx->pc = 0x26045Cu;
    {
        const bool branch_taken_0x26045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26045Cu;
        // 0x260460: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26045c) {
            ctx->pc = 0x260470u;
            goto label_260470;
        }
    }
    ctx->pc = 0x260464u;
label_260464:
    // 0x260464: 0x1000001f  b           . + 4 + (0x1F << 2)
label_260468:
    if (ctx->pc == 0x260468u) {
        ctx->pc = 0x260468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260464u;
        // 0x260468: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26046Cu;
        goto label_26046c;
    }
    ctx->pc = 0x260464u;
    {
        const bool branch_taken_0x260464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260464u;
        // 0x260468: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260464) {
            ctx->pc = 0x2604E4u;
            goto label_2604e4;
        }
    }
    ctx->pc = 0x26046Cu;
label_26046c:
    // 0x26046c: 0x0  nop
    ctx->pc = 0x26046cu;
    // NOP
label_260470:
    // 0x260470: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x260470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_260474:
    // 0x260474: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x260474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_260478:
    // 0x260478: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x260478u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_26047c:
    // 0x26047c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x26047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_260480:
    // 0x260480: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x260480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_260484:
    // 0x260484: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_260488:
    if (ctx->pc == 0x260488u) {
        ctx->pc = 0x260488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260484u;
        // 0x260488: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26048Cu;
        goto label_26048c;
    }
    ctx->pc = 0x260484u;
    {
        const bool branch_taken_0x260484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260484u;
        // 0x260488: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260484) {
            ctx->pc = 0x2604D4u;
            goto label_2604d4;
        }
    }
    ctx->pc = 0x26048Cu;
label_26048c:
    // 0x26048c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x26048cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_260490:
    // 0x260490: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x260490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_260494:
    // 0x260494: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x260494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_260498:
    // 0x260498: 0x40f809  jalr        $v0
label_26049c:
    if (ctx->pc == 0x26049Cu) {
        ctx->pc = 0x26049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260498u;
        // 0x26049c: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604A0u;
        goto label_2604a0;
    }
    ctx->pc = 0x260498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2604A0u);
        ctx->pc = 0x26049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260498u;
        // 0x26049c: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260498u, 0x2604A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2604A0u;
label_2604a0:
    // 0x2604a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2604a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2604a4:
    // 0x2604a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2604a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2604a8:
    // 0x2604a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2604a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2604ac:
    // 0x2604ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2604acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2604b0:
    // 0x2604b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2604b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2604b4:
    // 0x2604b4: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x2604b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_2604b8:
    // 0x2604b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2604b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2604bc:
    // 0x2604bc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2604bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_2604c0:
    // 0x2604c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2604c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2604c4:
    // 0x2604c4: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x2604c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_2604c8:
    // 0x2604c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2604c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2604cc:
    // 0x2604cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2604d0:
    if (ctx->pc == 0x2604D0u) {
        ctx->pc = 0x2604D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604CCu;
        // 0x2604d0: 0xac530014  sw          $s3, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604D4u;
        goto label_2604d4;
    }
    ctx->pc = 0x2604CCu;
    {
        const bool branch_taken_0x2604cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2604D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604CCu;
        // 0x2604d0: 0xac530014  sw          $s3, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604cc) {
            ctx->pc = 0x2604F0u;
            goto label_2604f0;
        }
    }
    ctx->pc = 0x2604D4u;
label_2604d4:
    // 0x2604d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2604d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2604d8:
    // 0x2604d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2604d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2604dc:
    // 0x2604dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2604dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2604e0:
    // 0x2604e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2604e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2604e4:
    // 0x2604e4: 0xc0933a4  jal         func_24CE90
label_2604e8:
    if (ctx->pc == 0x2604E8u) {
        ctx->pc = 0x2604ECu;
        goto label_2604ec;
    }
    ctx->pc = 0x2604E4u;
    SET_GPR_U32(ctx, 31, 0x2604ECu);
    ctx->pc = 0x24CE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CE90u, 0x2604E4u, 0x2604ECu)) {
        return;
    }
    ctx->pc = 0x2604ECu;
label_2604ec:
    // 0x2604ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2604ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2604f0:
    // 0x2604f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2604f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2604f4:
    // 0x2604f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2604f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2604f8:
    // 0x2604f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2604f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2604fc:
    // 0x2604fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2604fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_260500:
    // 0x260500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260504:
    // 0x260504: 0x3e00008  jr          $ra
label_260508:
    if (ctx->pc == 0x260508u) {
        ctx->pc = 0x260508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260504u;
        // 0x260508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26050Cu;
        goto label_26050c;
    }
    ctx->pc = 0x260504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260504u;
        // 0x260508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26050Cu;
label_26050c:
    // 0x26050c: 0x0  nop
    ctx->pc = 0x26050cu;
    // NOP
    ctx->pc = 0x260510u;
}
