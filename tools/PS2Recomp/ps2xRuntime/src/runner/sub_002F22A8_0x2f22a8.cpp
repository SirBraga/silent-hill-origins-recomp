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

// Function: sub_002F22A8
// Address: 0x2f22a8 - 0x2f23c8
void sub_002F22A8_0x2f22a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F22A8_0x2f22a8");
#endif

    switch (ctx->pc) {
        case 0x2f2350u: goto label_2f2350;
        default: break;
    }

    ctx->pc = 0x2f22a8u;

    // 0x2f22a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f22a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f22ac: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f22acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f22b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f22b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f22b4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f22b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f22b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f22c0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2f22c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f22c4: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f22c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f22c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22cc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f22ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f22d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f22d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f22d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f22d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f22dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f22dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f22e0: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x2f22e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f22e4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F22E4u;
    {
        const bool branch_taken_0x2f22e4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2F22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22E4u;
        // 0x2f22e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22e4) {
            ctx->pc = 0x2F22F4u;
            goto label_2f22f4;
        }
    }
    ctx->pc = 0x2F22ECu;
    // 0x2f22ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f22ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f22f0: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2f22f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f22f4:
    // 0x2f22f4: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f22f8: 0x3c150072  lui         $s5, 0x72
    ctx->pc = 0x2f22f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)114 << 16));
    // 0x2f22fc: 0x2223818  mult        $a3, $s1, $v0
    ctx->pc = 0x2f22fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f2300: 0x26a8b748  addiu       $t0, $s5, -0x48B8
    ctx->pc = 0x2f2300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948680));
    // 0x2f2304: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2308: 0x25040804  addiu       $a0, $t0, 0x804
    ctx->pc = 0x2f2308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2052));
    // 0x2f230c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2f230cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f2310: 0x24a300ff  addiu       $v1, $a1, 0xFF
    ctx->pc = 0x2f2310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x2f2314: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x2f2314u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x2f2318: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x2f2318u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2f231c: 0xe49021  addu        $s2, $a3, $a0
    ctx->pc = 0x2f231cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2f2320: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2f2320u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f2324: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x2f2324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x2f2328: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f2328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f232c: 0x1090000f  beq         $a0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F232Cu;
    {
        const bool branch_taken_0x2f232c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F232Cu;
        // 0x2f2330: 0x62a023  subu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f232c) {
            ctx->pc = 0x2F236Cu;
            goto label_2f236c;
        }
    }
    ctx->pc = 0x2F2334u;
    // 0x2f2334: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f2334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f2338: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x2f2338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2f233c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2f233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2f2340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2344: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x2f2344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2f2348: 0xc0bd9ec  jal         func_2F67B0
    ctx->pc = 0x2F2348u;
    SET_GPR_U32(ctx, 31, 0x2F2350u);
    ctx->pc = 0x2F234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2348u;
    // 0x2f234c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67B0u, 0x2F2348u, 0x2F2350u)) {
        return;
    }
    ctx->pc = 0x2F2350u;
label_2f2350:
    // 0x2f2350: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2350u;
    {
        const bool branch_taken_0x2f2350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2350) {
            ctx->pc = 0x2F2354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2350u;
            // 0x2f2354: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F236Cu;
            goto label_2f236c;
        }
    }
    ctx->pc = 0x2F2358u;
    // 0x2f2358: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f2358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f235c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f235cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2360: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x2f2360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x2f2364: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F2364u;
    {
        const bool branch_taken_0x2f2364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2364u;
        // 0x2f2368: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2364) {
            ctx->pc = 0x2F23A0u;
            goto label_2f23a0;
        }
    }
    ctx->pc = 0x2F236Cu;
label_2f236c:
    // 0x2f236c: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2370: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2f2370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2f2374: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2f2374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2378: 0x26a4b748  addiu       $a0, $s5, -0x48B8
    ctx->pc = 0x2f2378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948680));
    // 0x2f237c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f2380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f2384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2388: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2388u;
    {
        const bool branch_taken_0x2f2388 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2f2388) {
            ctx->pc = 0x2F238Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2388u;
            // 0x2f238c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F23A0u;
            goto label_2f23a0;
        }
    }
    ctx->pc = 0x2F2390u;
    // 0x2f2390: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f2390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2398: 0x34639001  ori         $v1, $v1, 0x9001
    ctx->pc = 0x2f2398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36865);
    // 0x2f239c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2f239cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2f23a0:
    // 0x2f23a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f23a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f23a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f23a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f23a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f23a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f23ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f23acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f23b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f23b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f23b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f23b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f23b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f23b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f23bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F23BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23BCu;
        // 0x2f23c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F23BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F23C4u;
    // 0x2f23c4: 0x0  nop
    ctx->pc = 0x2f23c4u;
    // NOP
    ctx->pc = 0x2f23c8u;
}
