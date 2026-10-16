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

// Function: sub_00104498
// Address: 0x104498 - 0x1045d0
void sub_00104498_0x104498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104498_0x104498");
#endif

    switch (ctx->pc) {
        case 0x1044e8u: goto label_1044e8;
        case 0x104520u: goto label_104520;
        case 0x104544u: goto label_104544;
        case 0x104570u: goto label_104570;
        default: break;
    }

    ctx->pc = 0x104498u;

    // 0x104498: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10449c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1044a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1044a4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1044a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1044a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1044a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044ac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1044acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1044b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1044b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1044b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1044b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1044b8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1044b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1044bc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1044bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1044c0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1044c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1044c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1044c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1044c8: 0x8e350018  lw          $s5, 0x18($s1)
    ctx->pc = 0x1044c8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1044cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1044ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1044d0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1044D0u;
    {
        const bool branch_taken_0x1044d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044D0u;
        // 0x1044d4: 0xae250018  sw          $a1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044d0) {
            ctx->pc = 0x1045A0u;
            goto label_1045a0;
        }
    }
    ctx->pc = 0x1044D8u;
    // 0x1044d8: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x1044d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1044dc: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x1044dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1044e0: 0xd71818  mult        $v1, $a2, $s7
    ctx->pc = 0x1044e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1044e4: 0x0  nop
    ctx->pc = 0x1044e4u;
    // NOP
label_1044e8:
    // 0x1044e8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1044e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1044ec: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1044ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1044f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1044f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1044f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1044f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1044f8: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x1044f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1044fc: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1044fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x104500: 0x13982b  sltu        $s3, $zero, $s3
    ctx->pc = 0x104500u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x104504: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x104504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104508: 0x10530020  beq         $v0, $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x104508u;
    {
        const bool branch_taken_0x104508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104508u;
        // 0x10450c: 0x24d40001  addiu       $s4, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104508) {
            ctx->pc = 0x10458Cu;
            goto label_10458c;
        }
    }
    ctx->pc = 0x104510u;
    // 0x104510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104514: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x104514u;
    {
        const bool branch_taken_0x104514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104514u;
        // 0x104518: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104514) {
            ctx->pc = 0x10458Cu;
            goto label_10458c;
        }
    }
    ctx->pc = 0x10451Cu;
    // 0x10451c: 0xd69018  mult        $s2, $a2, $s6
    ctx->pc = 0x10451cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_104520:
    // 0x104520: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x104520u;
    {
        const bool branch_taken_0x104520 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x104524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104520u;
        // 0x104524: 0x1019c0  sll         $v1, $s0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104520) {
            ctx->pc = 0x10454Cu;
            goto label_10454c;
        }
    }
    ctx->pc = 0x104528u;
    // 0x104528: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x104528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x10452c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x10452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x104534: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x104534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x104538: 0x94660074  lhu         $a2, 0x74($v1)
    ctx->pc = 0x104538u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x10453c: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x10453Cu;
    SET_GPR_U32(ctx, 31, 0x104544u);
    ctx->pc = 0x104540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10453Cu;
    // 0x104540: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x10453Cu, 0x104544u)) {
        return;
    }
    ctx->pc = 0x104544u;
label_104544:
    // 0x104544: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x104544u;
    {
        const bool branch_taken_0x104544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104544u;
        // 0x104548: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104544) {
            ctx->pc = 0x104574u;
            goto label_104574;
        }
    }
    ctx->pc = 0x10454Cu;
label_10454c:
    // 0x10454c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104550: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x104550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x104554: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x104554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x104558: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x104558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10455c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x104560: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x104560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x104564: 0x94860078  lhu         $a2, 0x78($a0)
    ctx->pc = 0x104564u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x104568: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x104568u;
    SET_GPR_U32(ctx, 31, 0x104570u);
    ctx->pc = 0x10456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104568u;
    // 0x10456c: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x104568u, 0x104570u)) {
        return;
    }
    ctx->pc = 0x104570u;
label_104570:
    // 0x104570: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x104570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_104574:
    // 0x104574: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x104574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x104578: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x10457c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104580: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x104580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104584: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x104584u;
    {
        const bool branch_taken_0x104584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104584) {
            ctx->pc = 0x104520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104520;
        }
    }
    ctx->pc = 0x10458Cu;
label_10458c:
    // 0x10458c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104590: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x104590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104594: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x104594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104598: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x104598u;
    {
        const bool branch_taken_0x104598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104598u;
        // 0x10459c: 0xd71818  mult        $v1, $a2, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104598) {
            ctx->pc = 0x1044E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1044e8;
        }
    }
    ctx->pc = 0x1045A0u;
label_1045a0:
    // 0x1045a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1045a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1045a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1045a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1045a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1045a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1045ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1045acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1045b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1045b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1045b4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1045b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1045b8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1045b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1045bc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1045bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1045c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1045c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1045c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1045C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1045C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045C4u;
        // 0x1045c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1045CCu;
    // 0x1045cc: 0x0  nop
    ctx->pc = 0x1045ccu;
    // NOP
    ctx->pc = 0x1045d0u;
}
