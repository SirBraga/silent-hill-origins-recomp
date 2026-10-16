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

// Function: sub_001D8458
// Address: 0x1d8458 - 0x1d8590
void sub_001D8458_0x1d8458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8458_0x1d8458");
#endif

    switch (ctx->pc) {
        case 0x1d8480u: goto label_1d8480;
        case 0x1d84b4u: goto label_1d84b4;
        case 0x1d84e8u: goto label_1d84e8;
        case 0x1d8510u: goto label_1d8510;
        case 0x1d851cu: goto label_1d851c;
        case 0x1d8558u: goto label_1d8558;
        case 0x1d8560u: goto label_1d8560;
        case 0x1d8568u: goto label_1d8568;
        default: break;
    }

    ctx->pc = 0x1d8458u;

    // 0x1d8458: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d8458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d845c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d8460: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1d8460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1d8464: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1d8464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1d8468: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1d8468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1d846c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d8470: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1d8470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1d8474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d8474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d8478: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1D8478u;
    SET_GPR_U32(ctx, 31, 0x1D8480u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1D8478u, 0x1D8480u)) {
        return;
    }
    ctx->pc = 0x1D8480u;
label_1d8480:
    // 0x1d8480: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d8480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8484: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d8484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d8488: 0x8c439d98  lw          $v1, -0x6268($v0)
    ctx->pc = 0x1d8488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339D98u));
    // 0x1d848c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D848Cu;
    {
        const bool branch_taken_0x1d848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D848Cu;
        // 0x1d8490: 0x3c060034  lui         $a2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d848c) {
            ctx->pc = 0x1D8568u;
            goto label_1d8568;
        }
    }
    ctx->pc = 0x1D8494u;
    // 0x1d8494: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d8494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d8498: 0x8cc29d9c  lw          $v0, -0x6264($a2)
    ctx->pc = 0x1d8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294942108)));
    // 0x1d849c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84a0: 0x8c6589dc  lw          $a1, -0x7624($v1)
    ctx->pc = 0x1d84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F89DCu));
    // 0x1d84a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d84a8: 0xacc29d9c  sw          $v0, -0x6264($a2)
    ctx->pc = 0x1d84a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294942108), GPR_U32(ctx, 2));
    // 0x1d84ac: 0xc050c9a  jal         func_143268
    ctx->pc = 0x1D84ACu;
    SET_GPR_U32(ctx, 31, 0x1D84B4u);
    ctx->pc = 0x1D84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84ACu;
    // 0x1d84b0: 0xae65000c  sw          $a1, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x143268u, 0x1D84ACu, 0x1D84B4u)) {
        return;
    }
    ctx->pc = 0x1D84B4u;
label_1d84b4:
    // 0x1d84b4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d84b8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d84bc: 0x8c448978  lw          $a0, -0x7688($v0)
    ctx->pc = 0x1d84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F8978u));
    // 0x1d84c0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1d84c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84c4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1d84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d84c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d84c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d84cc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D84CCu;
    {
        const bool branch_taken_0x1d84cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84CCu;
        // 0x1d84d0: 0xafb30014  sw          $s3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84cc) {
            ctx->pc = 0x1D84E8u;
            goto label_1d84e8;
        }
    }
    ctx->pc = 0x1D84D4u;
    // 0x1d84d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d84d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D84D8u;
    {
        const bool branch_taken_0x1d84d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84D8u;
        // 0x1d84dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84d8) {
            ctx->pc = 0x1D84ECu;
            goto label_1d84ec;
        }
    }
    ctx->pc = 0x1D84E0u;
    // 0x1d84e0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D84E0u;
    SET_GPR_U32(ctx, 31, 0x1D84E8u);
    ctx->pc = 0x1D84E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84E0u;
    // 0x1d84e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D84E0u, 0x1D84E8u)) {
        return;
    }
    ctx->pc = 0x1D84E8u;
label_1d84e8:
    // 0x1d84e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d84ec:
    // 0x1d84ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d84ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84f0: 0x8c429da8  lw          $v0, -0x6258($v0)
    ctx->pc = 0x1d84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942120)));
    // 0x1d84f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D84F4u;
    {
        const bool branch_taken_0x1d84f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84F4u;
        // 0x1d84f8: 0x3c140070  lui         $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84f4) {
            ctx->pc = 0x1D8530u;
            goto label_1d8530;
        }
    }
    ctx->pc = 0x1D84FCu;
    // 0x1d84fc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D84FCu;
    {
        const bool branch_taken_0x1d84fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84FCu;
        // 0x1d8500: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84fc) {
            ctx->pc = 0x1D852Cu;
            goto label_1d852c;
        }
    }
    ctx->pc = 0x1D8504u;
    // 0x1d8504: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d8504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d8508: 0x245189c8  addiu       $s1, $v0, -0x7638
    ctx->pc = 0x1d8508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937032));
    // 0x1d850c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d850cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F89C8u));
label_1d8510:
    // 0x1d8510: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d8510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d8514: 0xc07916a  jal         func_1E45A8
    ctx->pc = 0x1D8514u;
    SET_GPR_U32(ctx, 31, 0x1D851Cu);
    ctx->pc = 0x1D8518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8514u;
    // 0x1d8518: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E45A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E45A8u, 0x1D8514u, 0x1D851Cu)) {
        return;
    }
    ctx->pc = 0x1D851Cu;
label_1d851c:
    // 0x1d851c: 0x8e429da8  lw          $v0, -0x6258($s2)
    ctx->pc = 0x1d851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942120)));
    // 0x1d8520: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d8520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d8524: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8524u;
    {
        const bool branch_taken_0x1d8524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8524) {
            ctx->pc = 0x1D8528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8524u;
            // 0x1d8528: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8510;
        }
    }
    ctx->pc = 0x1D852Cu;
label_1d852c:
    // 0x1d852c: 0xae409da8  sw          $zero, -0x6258($s2)
    ctx->pc = 0x1d852cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942120), GPR_U32(ctx, 0));
label_1d8530:
    // 0x1d8530: 0x8e848998  lw          $a0, -0x7668($s4)
    ctx->pc = 0x1d8530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936984)));
    // 0x1d8534: 0x8ea21a70  lw          $v0, 0x1A70($s5)
    ctx->pc = 0x1d8534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6768)));
    // 0x1d8538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d8538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d853c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D853Cu;
    {
        const bool branch_taken_0x1d853c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D853Cu;
        // 0x1d8540: 0xafb30014  sw          $s3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d853c) {
            ctx->pc = 0x1D8558u;
            goto label_1d8558;
        }
    }
    ctx->pc = 0x1D8544u;
    // 0x1d8544: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d8544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8548u;
    {
        const bool branch_taken_0x1d8548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8548) {
            ctx->pc = 0x1D8558u;
            goto label_1d8558;
        }
    }
    ctx->pc = 0x1D8550u;
    // 0x1d8550: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D8550u;
    SET_GPR_U32(ctx, 31, 0x1D8558u);
    ctx->pc = 0x1D8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8550u;
    // 0x1d8554: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D8550u, 0x1D8558u)) {
        return;
    }
    ctx->pc = 0x1D8558u;
label_1d8558:
    // 0x1d8558: 0xc0791e6  jal         func_1E4798
    ctx->pc = 0x1D8558u;
    SET_GPR_U32(ctx, 31, 0x1D8560u);
    ctx->pc = 0x1D855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8558u;
    // 0x1d855c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4798u, 0x1D8558u, 0x1D8560u)) {
        return;
    }
    ctx->pc = 0x1D8560u;
label_1d8560:
    // 0x1d8560: 0xc0761de  jal         func_1D8778
    ctx->pc = 0x1D8560u;
    SET_GPR_U32(ctx, 31, 0x1D8568u);
    ctx->pc = 0x1D8778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8778u, 0x1D8560u, 0x1D8568u)) {
        return;
    }
    ctx->pc = 0x1D8568u;
label_1d8568:
    // 0x1d8568: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1d8568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d856c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1d856cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8570: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1d8570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8574: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d8574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d857c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1d857cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d8580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8584: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8584u;
        // 0x1d8588: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D858Cu;
    // 0x1d858c: 0x0  nop
    ctx->pc = 0x1d858cu;
    // NOP
    ctx->pc = 0x1d8590u;
}
