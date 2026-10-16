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

// Function: sub_002AE4B0
// Address: 0x2ae4b0 - 0x2ae720
void sub_002AE4B0_0x2ae4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE4B0_0x2ae4b0");
#endif

    switch (ctx->pc) {
        case 0x2ae4d8u: goto label_2ae4d8;
        case 0x2ae520u: goto label_2ae520;
        case 0x2ae5d4u: goto label_2ae5d4;
        case 0x2ae5f0u: goto label_2ae5f0;
        case 0x2ae69cu: goto label_2ae69c;
        case 0x2ae6bcu: goto label_2ae6bc;
        case 0x2ae6c8u: goto label_2ae6c8;
        default: break;
    }

    ctx->pc = 0x2ae4b0u;

    // 0x2ae4b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ae4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ae4b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ae4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ae4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae4bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ae4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ae4c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ae4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ae4c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ae4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ae4c8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2ae4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x2ae4cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae4d0: 0xc0ab8b0  jal         func_2AE2C0
    ctx->pc = 0x2AE4D0u;
    SET_GPR_U32(ctx, 31, 0x2AE4D8u);
    ctx->pc = 0x2AE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4D0u;
    // 0x2ae4d4: 0x24130014  addiu       $s3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE2C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE2C0u, 0x2AE4D0u, 0x2AE4D8u)) {
        return;
    }
    ctx->pc = 0x2AE4D8u;
label_2ae4d8:
    // 0x2ae4d8: 0x3652fff0  ori         $s2, $s2, 0xFFF0
    ctx->pc = 0x2ae4d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65520);
    // 0x2ae4dc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2ae4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ae4e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ae4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ae4e4: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x2ae4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae4e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ae4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae4ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ae4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae4f0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae4f4: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x2ae4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2ae4f8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2ae4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2ae4fc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2ae4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2ae500: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2ae500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae504: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x2ae504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x2ae508: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2ae508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2ae50c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2ae50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2ae510: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE510u;
    {
        const bool branch_taken_0x2ae510 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE510u;
        // 0x2ae514: 0xae04006c  sw          $a0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae510) {
            ctx->pc = 0x2AE528u;
            goto label_2ae528;
        }
    }
    ctx->pc = 0x2AE518u;
    // 0x2ae518: 0xc0b00ca  jal         func_2C0328
    ctx->pc = 0x2AE518u;
    SET_GPR_U32(ctx, 31, 0x2AE520u);
    ctx->pc = 0x2AE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE518u;
    // 0x2ae51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0328u, 0x2AE518u, 0x2AE520u)) {
        return;
    }
    ctx->pc = 0x2AE520u;
label_2ae520:
    // 0x2ae520: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2ae520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2ae524: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ae528:
    // 0x2ae528: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2ae528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ae52c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2ae52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ae530: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ae530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae534: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x2ae534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2ae538: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x2ae538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ae53c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2ae53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ae540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ae540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae544: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ae548: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x2ae548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ae54c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae550: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae554: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ae554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ae558: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2ae558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2ae55c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2ae55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2ae560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae564: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x2ae564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x2ae568: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ae568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ae56c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2ae56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2ae570: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae574: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x2ae574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x2ae578: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ae57c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2ae57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2ae580: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x2ae580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2ae584: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2ae584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2ae588: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE588u;
    {
        const bool branch_taken_0x2ae588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE588u;
        // 0x2ae58c: 0xae05004c  sw          $a1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae588) {
            ctx->pc = 0x2AE5B4u;
            goto label_2ae5b4;
        }
    }
    ctx->pc = 0x2AE590u;
    // 0x2ae590: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ae590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ae594: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2ae594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2ae598: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae59c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae5a0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ae5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ae5a4: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2ae5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2ae5a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae5ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2ae5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2ae5b0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ae5b4:
    // 0x2ae5b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ae5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae5b8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2ae5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ae5bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ae5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ae5c0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae5c4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ae5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ae5c8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ae5cc: 0xc0b555c  jal         func_2D5570
    ctx->pc = 0x2AE5CCu;
    SET_GPR_U32(ctx, 31, 0x2AE5D4u);
    ctx->pc = 0x2AE5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5CCu;
    // 0x2ae5d0: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5570u, 0x2AE5CCu, 0x2AE5D4u)) {
        return;
    }
    ctx->pc = 0x2AE5D4u;
label_2ae5d4:
    // 0x2ae5d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae5d8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ae5dc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2ae5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2ae5e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE5E0u;
    {
        const bool branch_taken_0x2ae5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5E0u;
        // 0x2ae5e4: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae5e0) {
            ctx->pc = 0x2AE5F8u;
            goto label_2ae5f8;
        }
    }
    ctx->pc = 0x2AE5E8u;
    // 0x2ae5e8: 0xc0b144c  jal         func_2C5130
    ctx->pc = 0x2AE5E8u;
    SET_GPR_U32(ctx, 31, 0x2AE5F0u);
    ctx->pc = 0x2AE5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5E8u;
    // 0x2ae5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5130u, 0x2AE5E8u, 0x2AE5F0u)) {
        return;
    }
    ctx->pc = 0x2AE5F0u;
label_2ae5f0:
    // 0x2ae5f0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2ae5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2ae5f4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ae5f8:
    // 0x2ae5f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2ae5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ae5fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae600: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x2ae600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ae604: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ae604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ae608: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae60c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ae60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ae610: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ae614: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AE614u;
    {
        const bool branch_taken_0x2ae614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE614u;
        // 0x2ae618: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae614) {
            ctx->pc = 0x2AE684u;
            goto label_2ae684;
        }
    }
    ctx->pc = 0x2AE61Cu;
    // 0x2ae61c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2ae61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ae620: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2ae620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ae624: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ae624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ae628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ae628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ae62c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2ae62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ae630: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2ae630u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae634: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2ae634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ae638: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2ae638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2ae63c: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x2ae63cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x2ae640: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2ae640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2ae644: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ae648: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x2ae648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x2ae64c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae650: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2ae650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2ae654: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ae654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ae658: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2ae658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2ae65c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ae65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ae660: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2ae660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ae664: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ae664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae668: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2ae668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2ae66c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae670: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x2ae670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x2ae674: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ae674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ae678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ae678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ae67c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2ae67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2ae680: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ae684:
    // 0x2ae684: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ae688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ae68c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE68Cu;
    {
        const bool branch_taken_0x2ae68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae68c) {
            ctx->pc = 0x2AE690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE68Cu;
            // 0x2ae690: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE6A8u;
            goto label_2ae6a8;
        }
    }
    ctx->pc = 0x2AE694u;
    // 0x2ae694: 0xc0b124e  jal         func_2C4938
    ctx->pc = 0x2AE694u;
    SET_GPR_U32(ctx, 31, 0x2AE69Cu);
    ctx->pc = 0x2AE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE694u;
    // 0x2ae698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C4938u, 0x2AE694u, 0x2AE69Cu)) {
        return;
    }
    ctx->pc = 0x2AE69Cu;
label_2ae69c:
    // 0x2ae69c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2ae69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2ae6a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ae6a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ae6a8:
    // 0x2ae6a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2ae6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2ae6ac: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2AE6ACu;
    {
        const bool branch_taken_0x2ae6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae6ac) {
            ctx->pc = 0x2AE6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE6ACu;
            // 0x2ae6b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE6DCu;
            goto label_2ae6dc;
        }
    }
    ctx->pc = 0x2AE6B4u;
    // 0x2ae6b4: 0xc0b01d2  jal         func_2C0748
    ctx->pc = 0x2AE6B4u;
    SET_GPR_U32(ctx, 31, 0x2AE6BCu);
    ctx->pc = 0x2AE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6B4u;
    // 0x2ae6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0748u, 0x2AE6B4u, 0x2AE6BCu)) {
        return;
    }
    ctx->pc = 0x2AE6BCu;
label_2ae6bc:
    // 0x2ae6bc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2ae6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2ae6c0: 0xc0b00da  jal         func_2C0368
    ctx->pc = 0x2AE6C0u;
    SET_GPR_U32(ctx, 31, 0x2AE6C8u);
    ctx->pc = 0x2AE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6C0u;
    // 0x2ae6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0368u, 0x2AE6C0u, 0x2AE6C8u)) {
        return;
    }
    ctx->pc = 0x2AE6C8u;
label_2ae6c8:
    // 0x2ae6c8: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2ae6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2ae6cc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ae6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2ae6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ae6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae6d4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2ae6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ae6d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ae6dc:
    // 0x2ae6dc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2ae6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2ae6e0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE6E0u;
    {
        const bool branch_taken_0x2ae6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6E0u;
        // 0x2ae6e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6e0) {
            ctx->pc = 0x2AE704u;
            goto label_2ae704;
        }
    }
    ctx->pc = 0x2AE6E8u;
    // 0x2ae6e8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2ae6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ae6ec: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2ae6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ae6f0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2ae6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2ae6f4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2ae6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2ae6f8: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2ae6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2ae6fc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ae6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ae700: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ae700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ae704:
    // 0x2ae704: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ae704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae708: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ae708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae70c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ae70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae710: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ae710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae718: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE718u;
        // 0x2ae71c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE720u;
}
