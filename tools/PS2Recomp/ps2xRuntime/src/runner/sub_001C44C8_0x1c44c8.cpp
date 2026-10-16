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

// Function: sub_001C44C8
// Address: 0x1c44c8 - 0x1c4600
void sub_001C44C8_0x1c44c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C44C8_0x1c44c8");
#endif

    switch (ctx->pc) {
        case 0x1c44e8u: goto label_1c44e8;
        case 0x1c4514u: goto label_1c4514;
        case 0x1c452cu: goto label_1c452c;
        case 0x1c4540u: goto label_1c4540;
        case 0x1c4558u: goto label_1c4558;
        case 0x1c456cu: goto label_1c456c;
        case 0x1c4584u: goto label_1c4584;
        case 0x1c459cu: goto label_1c459c;
        case 0x1c45b8u: goto label_1c45b8;
        case 0x1c45d4u: goto label_1c45d4;
        default: break;
    }

    ctx->pc = 0x1c44c8u;

    // 0x1c44c8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1c44c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1c44cc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1c44ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1c44d0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1c44d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1c44d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44d8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1c44d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1c44dc: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1c44dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1c44e0: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C44E0u;
    SET_GPR_U32(ctx, 31, 0x1C44E8u);
    ctx->pc = 0x1C44E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44E0u;
    // 0x1c44e4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C44E0u, 0x1C44E8u)) {
        return;
    }
    ctx->pc = 0x1C44E8u;
label_1c44e8:
    // 0x1c44e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c44ec: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1c44f0: 0x2463e5b0  addiu       $v1, $v1, -0x1A50
    ctx->pc = 0x1c44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960560));
    // 0x1c44f4: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1c44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1c44f8: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c44fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c44fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4500: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c4500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1c4504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4508: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1c4508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1c450c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C450Cu;
    SET_GPR_U32(ctx, 31, 0x1C4514u);
    ctx->pc = 0x1C4510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C450Cu;
    // 0x1c4510: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C450Cu, 0x1C4514u)) {
        return;
    }
    ctx->pc = 0x1C4514u;
label_1c4514:
    // 0x1c4514: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c4514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c4518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c451c: 0x24a5e570  addiu       $a1, $a1, -0x1A90
    ctx->pc = 0x1c451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960496));
    // 0x1c4520: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c4520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4524: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C4524u;
    SET_GPR_U32(ctx, 31, 0x1C452Cu);
    ctx->pc = 0x1C4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4524u;
    // 0x1c4528: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C4524u, 0x1C452Cu)) {
        return;
    }
    ctx->pc = 0x1C452Cu;
label_1c452c:
    // 0x1c452c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c452cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4530: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4530u;
    {
        const bool branch_taken_0x1c4530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4530u;
        // 0x1c4534: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4530) {
            ctx->pc = 0x1C4544u;
            goto label_1c4544;
        }
    }
    ctx->pc = 0x1C4538u;
    // 0x1c4538: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C4538u;
    SET_GPR_U32(ctx, 31, 0x1C4540u);
    ctx->pc = 0x1C453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4538u;
    // 0x1c453c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C4538u, 0x1C4540u)) {
        return;
    }
    ctx->pc = 0x1C4540u;
label_1c4540:
    // 0x1c4540: 0xae020260  sw          $v0, 0x260($s0)
    ctx->pc = 0x1c4540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
label_1c4544:
    // 0x1c4544: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c4544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c4548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c454c: 0x24a5e578  addiu       $a1, $a1, -0x1A88
    ctx->pc = 0x1c454cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960504));
    // 0x1c4550: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C4550u;
    SET_GPR_U32(ctx, 31, 0x1C4558u);
    ctx->pc = 0x1C4554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4550u;
    // 0x1c4554: 0x2606026c  addiu       $a2, $s0, 0x26C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C4550u, 0x1C4558u)) {
        return;
    }
    ctx->pc = 0x1C4558u;
label_1c4558:
    // 0x1c4558: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1c4558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c455c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c455cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4564: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C4564u;
    SET_GPR_U32(ctx, 31, 0x1C456Cu);
    ctx->pc = 0x1C4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4564u;
    // 0x1c4568: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C4564u, 0x1C456Cu)) {
        return;
    }
    ctx->pc = 0x1C456Cu;
label_1c456c:
    // 0x1c456c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c456cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c4570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4574: 0x24a5e588  addiu       $a1, $a1, -0x1A78
    ctx->pc = 0x1c4574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960520));
    // 0x1c4578: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c4578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c457c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C457Cu;
    SET_GPR_U32(ctx, 31, 0x1C4584u);
    ctx->pc = 0x1C4580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C457Cu;
    // 0x1c4580: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C457Cu, 0x1C4584u)) {
        return;
    }
    ctx->pc = 0x1C4584u;
label_1c4584:
    // 0x1c4584: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1c4584u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4588: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4588u;
    {
        const bool branch_taken_0x1c4588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4588u;
        // 0x1c458c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4588) {
            ctx->pc = 0x1C45E4u;
            goto label_1c45e4;
        }
    }
    ctx->pc = 0x1C4590u;
    // 0x1c4590: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1c4590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1c4594: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1C4594u;
    SET_GPR_U32(ctx, 31, 0x1C459Cu);
    ctx->pc = 0x1C4598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4594u;
    // 0x1c4598: 0x2484e598  addiu       $a0, $a0, -0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1C4594u, 0x1C459Cu)) {
        return;
    }
    ctx->pc = 0x1C459Cu;
label_1c459c:
    // 0x1c459c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C459Cu;
    {
        const bool branch_taken_0x1c459c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c459c) {
            ctx->pc = 0x1C45A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C459Cu;
            // 0x1c45a0: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C45ACu;
            goto label_1c45ac;
        }
    }
    ctx->pc = 0x1C45A4u;
    // 0x1c45a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C45A4u;
    {
        const bool branch_taken_0x1c45a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45A4u;
        // 0x1c45a8: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45a4) {
            ctx->pc = 0x1C45E4u;
            goto label_1c45e4;
        }
    }
    ctx->pc = 0x1C45ACu;
label_1c45ac:
    // 0x1c45ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c45acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45b0: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1C45B0u;
    SET_GPR_U32(ctx, 31, 0x1C45B8u);
    ctx->pc = 0x1C45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45B0u;
    // 0x1c45b4: 0x2484e5a0  addiu       $a0, $a0, -0x1A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1C45B0u, 0x1C45B8u)) {
        return;
    }
    ctx->pc = 0x1C45B8u;
label_1c45b8:
    // 0x1c45b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C45B8u;
    {
        const bool branch_taken_0x1c45b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45b8) {
            ctx->pc = 0x1C45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C45B8u;
            // 0x1c45bc: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C45C8u;
            goto label_1c45c8;
        }
    }
    ctx->pc = 0x1C45C0u;
    // 0x1c45c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C45C0u;
    {
        const bool branch_taken_0x1c45c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45C0u;
        // 0x1c45c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45c0) {
            ctx->pc = 0x1C45E0u;
            goto label_1c45e0;
        }
    }
    ctx->pc = 0x1C45C8u;
label_1c45c8:
    // 0x1c45c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c45c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45cc: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1C45CCu;
    SET_GPR_U32(ctx, 31, 0x1C45D4u);
    ctx->pc = 0x1C45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45CCu;
    // 0x1c45d0: 0x2484e5a8  addiu       $a0, $a0, -0x1A58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1C45CCu, 0x1C45D4u)) {
        return;
    }
    ctx->pc = 0x1C45D4u;
label_1c45d4:
    // 0x1c45d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C45D4u;
    {
        const bool branch_taken_0x1c45d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45D4u;
        // 0x1c45d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45d4) {
            ctx->pc = 0x1C45E8u;
            goto label_1c45e8;
        }
    }
    ctx->pc = 0x1C45DCu;
    // 0x1c45dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c45e0:
    // 0x1c45e0: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1c45e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_1c45e4:
    // 0x1c45e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c45e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c45e8:
    // 0x1c45e8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1c45e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c45ec: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1c45ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c45f0: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1c45f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c45f4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1c45f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c45f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C45F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45F8u;
        // 0x1c45fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C45F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4600u;
}
