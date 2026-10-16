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

// Function: sub_0027F8D8
// Address: 0x27f8d8 - 0x27fb70
void sub_0027F8D8_0x27f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F8D8_0x27f8d8");
#endif

    switch (ctx->pc) {
        case 0x27f91cu: goto label_27f91c;
        case 0x27f924u: goto label_27f924;
        case 0x27f938u: goto label_27f938;
        case 0x27f954u: goto label_27f954;
        case 0x27f9a0u: goto label_27f9a0;
        case 0x27f9c0u: goto label_27f9c0;
        case 0x27f9e0u: goto label_27f9e0;
        case 0x27fa0cu: goto label_27fa0c;
        case 0x27fa30u: goto label_27fa30;
        case 0x27fa4cu: goto label_27fa4c;
        case 0x27fa6cu: goto label_27fa6c;
        case 0x27fa8cu: goto label_27fa8c;
        case 0x27fac4u: goto label_27fac4;
        case 0x27fae0u: goto label_27fae0;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb20u: goto label_27fb20;
        default: break;
    }

    ctx->pc = 0x27f8d8u;

    // 0x27f8d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27f8dc: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x27f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x27f8e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x27f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x27f8e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27f8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x27f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x27f8ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x27f8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27f8f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x27f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x27f8f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27f8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27f8fc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x27f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x27f900: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27f904: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x27f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x27f908: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x27f908u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27f90c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27f90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27f910: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x27f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x27f914: 0xc092782  jal         func_249E08
    ctx->pc = 0x27F914u;
    SET_GPR_U32(ctx, 31, 0x27F91Cu);
    ctx->pc = 0x27F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F914u;
    // 0x27f918: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27F914u, 0x27F91Cu)) {
        return;
    }
    ctx->pc = 0x27F91Cu;
label_27f91c:
    // 0x27f91c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F91Cu;
    {
        const bool branch_taken_0x27f91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F91Cu;
        // 0x27f920: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f91c) {
            ctx->pc = 0x27F92Cu;
            goto label_27f92c;
        }
    }
    ctx->pc = 0x27F924u;
label_27f924:
    // 0x27f924: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x27F924u;
    {
        const bool branch_taken_0x27f924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F924u;
        // 0x27f928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f924) {
            ctx->pc = 0x27FB4Cu;
            goto label_27fb4c;
        }
    }
    ctx->pc = 0x27F92Cu;
label_27f92c:
    // 0x27f92c: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x27f92cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x27f930: 0x148180  sll         $s0, $s4, 6
    ctx->pc = 0x27f930u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x27f934: 0x0  nop
    ctx->pc = 0x27f934u;
    // NOP
label_27f938:
    // 0x27f938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f93c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x27f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27f940: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27f940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f944: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x27f944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27f948: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27f948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27f94c: 0xc092782  jal         func_249E08
    ctx->pc = 0x27F94Cu;
    SET_GPR_U32(ctx, 31, 0x27F954u);
    ctx->pc = 0x27F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F94Cu;
    // 0x27f950: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27F94Cu, 0x27F954u)) {
        return;
    }
    ctx->pc = 0x27F954u;
label_27f954:
    // 0x27f954: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27F954u;
    {
        const bool branch_taken_0x27f954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F954u;
        // 0x27f958: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f954) {
            ctx->pc = 0x27F924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f924;
        }
    }
    ctx->pc = 0x27F95Cu;
    // 0x27f95c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x27f95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27f960: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x27F960u;
    {
        const bool branch_taken_0x27f960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F960u;
        // 0x27f964: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f960) {
            ctx->pc = 0x27FB34u;
            goto label_27fb34;
        }
    }
    ctx->pc = 0x27F968u;
    // 0x27f968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f96c: 0x2442cc60  addiu       $v0, $v0, -0x33A0
    ctx->pc = 0x27f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x27f970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f974: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f978: 0x800008  jr          $a0
    ctx->pc = 0x27F978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F980u: goto label_27f980;
            case 0x27FA1Cu: goto label_27fa1c;
            case 0x27FAA8u: goto label_27faa8;
            case 0x27FB34u: goto label_27fb34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F978u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27F980u;
label_27f980:
    // 0x27f980: 0x2709021  addu        $s2, $s3, $s0
    ctx->pc = 0x27f980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27f984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f988: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x27f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f98c: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x27f98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x27f990: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27f990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27f994: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27f994u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27f998: 0xc09275c  jal         func_249D70
    ctx->pc = 0x27F998u;
    SET_GPR_U32(ctx, 31, 0x27F9A0u);
    ctx->pc = 0x27F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F998u;
    // 0x27f99c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x27F998u, 0x27F9A0u)) {
        return;
    }
    ctx->pc = 0x27F9A0u;
label_27f9a0:
    // 0x27f9a0: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x27F9A0u;
    {
        const bool branch_taken_0x27f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9A0u;
        // 0x27f9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9a0) {
            ctx->pc = 0x27F924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f924;
        }
    }
    ctx->pc = 0x27F9A8u;
    // 0x27f9a8: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x27f9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27f9ac: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x27f9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x27f9b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27f9b4: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x27f9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x27f9b8: 0xc092782  jal         func_249E08
    ctx->pc = 0x27F9B8u;
    SET_GPR_U32(ctx, 31, 0x27F9C0u);
    ctx->pc = 0x27F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9B8u;
    // 0x27f9bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27F9B8u, 0x27F9C0u)) {
        return;
    }
    ctx->pc = 0x27F9C0u;
label_27f9c0:
    // 0x27f9c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F9C0u;
    {
        const bool branch_taken_0x27f9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C0u;
        // 0x27f9c4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9c0) {
            ctx->pc = 0x27F9D0u;
            goto label_27f9d0;
        }
    }
    ctx->pc = 0x27F9C8u;
    // 0x27f9c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27F9C8u;
    {
        const bool branch_taken_0x27f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C8u;
        // 0x27f9cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9c8) {
            ctx->pc = 0x27F9ECu;
            goto label_27f9ec;
        }
    }
    ctx->pc = 0x27F9D0u;
label_27f9d0:
    // 0x27f9d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F9D0u;
    {
        const bool branch_taken_0x27f9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9D0u;
        // 0x27f9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9d0) {
            ctx->pc = 0x27F9E8u;
            goto label_27f9e8;
        }
    }
    ctx->pc = 0x27F9D8u;
    // 0x27f9d8: 0xc088cb6  jal         func_2232D8
    ctx->pc = 0x27F9D8u;
    SET_GPR_U32(ctx, 31, 0x27F9E0u);
    ctx->pc = 0x27F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9D8u;
    // 0x27f9dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2232D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2232D8u, 0x27F9D8u, 0x27F9E0u)) {
        return;
    }
    ctx->pc = 0x27F9E0u;
label_27f9e0:
    // 0x27f9e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27F9E0u;
    {
        const bool branch_taken_0x27f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9E0u;
        // 0x27f9e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9e0) {
            ctx->pc = 0x27F9ECu;
            goto label_27f9ec;
        }
    }
    ctx->pc = 0x27F9E8u;
label_27f9e8:
    // 0x27f9e8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x27f9e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f9ec:
    // 0x27f9ec: 0x1060ffcd  beqz        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x27F9ECu;
    {
        const bool branch_taken_0x27f9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9ECu;
        // 0x27f9f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9ec) {
            ctx->pc = 0x27F924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f924;
        }
    }
    ctx->pc = 0x27F9F4u;
    // 0x27f9f4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x27f9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27f9f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f9fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27f9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27fa00: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x27fa00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x27fa04: 0xc092782  jal         func_249E08
    ctx->pc = 0x27FA04u;
    SET_GPR_U32(ctx, 31, 0x27FA0Cu);
    ctx->pc = 0x27FA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA04u;
    // 0x27fa08: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27FA04u, 0x27FA0Cu)) {
        return;
    }
    ctx->pc = 0x27FA0Cu;
label_27fa0c:
    // 0x27fa0c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27FA0Cu;
    {
        const bool branch_taken_0x27fa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA0Cu;
        // 0x27fa10: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa0c) {
            ctx->pc = 0x27FA74u;
            goto label_27fa74;
        }
    }
    ctx->pc = 0x27FA14u;
    // 0x27fa14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27FA14u;
    {
        const bool branch_taken_0x27fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa14) {
            ctx->pc = 0x27FA7Cu;
            goto label_27fa7c;
        }
    }
    ctx->pc = 0x27FA1Cu;
label_27fa1c:
    // 0x27fa1c: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x27fa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27fa20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27fa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa24: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x27fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27fa28: 0xc09275c  jal         func_249D70
    ctx->pc = 0x27FA28u;
    SET_GPR_U32(ctx, 31, 0x27FA30u);
    ctx->pc = 0x27FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA28u;
    // 0x27fa2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x27FA28u, 0x27FA30u)) {
        return;
    }
    ctx->pc = 0x27FA30u;
label_27fa30:
    // 0x27fa30: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x27FA30u;
    {
        const bool branch_taken_0x27fa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA30u;
        // 0x27fa34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa30) {
            ctx->pc = 0x27F924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f924;
        }
    }
    ctx->pc = 0x27FA38u;
    // 0x27fa38: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x27fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fa3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27fa44: 0xc092782  jal         func_249E08
    ctx->pc = 0x27FA44u;
    SET_GPR_U32(ctx, 31, 0x27FA4Cu);
    ctx->pc = 0x27FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA44u;
    // 0x27fa48: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27FA44u, 0x27FA4Cu)) {
        return;
    }
    ctx->pc = 0x27FA4Cu;
label_27fa4c:
    // 0x27fa4c: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x27FA4Cu;
    {
        const bool branch_taken_0x27fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA4Cu;
        // 0x27fa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa4c) {
            ctx->pc = 0x27F924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f924;
        }
    }
    ctx->pc = 0x27FA54u;
    // 0x27fa54: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x27fa54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27fa58: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x27fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x27fa5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27fa60: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x27fa60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x27fa64: 0xc092782  jal         func_249E08
    ctx->pc = 0x27FA64u;
    SET_GPR_U32(ctx, 31, 0x27FA6Cu);
    ctx->pc = 0x27FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA64u;
    // 0x27fa68: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27FA64u, 0x27FA6Cu)) {
        return;
    }
    ctx->pc = 0x27FA6Cu;
label_27fa6c:
    // 0x27fa6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FA6Cu;
    {
        const bool branch_taken_0x27fa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA6Cu;
        // 0x27fa70: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa6c) {
            ctx->pc = 0x27FA7Cu;
            goto label_27fa7c;
        }
    }
    ctx->pc = 0x27FA74u;
label_27fa74:
    // 0x27fa74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27FA74u;
    {
        const bool branch_taken_0x27fa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA74u;
        // 0x27fa78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa74) {
            ctx->pc = 0x27FA98u;
            goto label_27fa98;
        }
    }
    ctx->pc = 0x27FA7Cu;
label_27fa7c:
    // 0x27fa7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FA7Cu;
    {
        const bool branch_taken_0x27fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA7Cu;
        // 0x27fa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa7c) {
            ctx->pc = 0x27FA94u;
            goto label_27fa94;
        }
    }
    ctx->pc = 0x27FA84u;
    // 0x27fa84: 0xc088cb6  jal         func_2232D8
    ctx->pc = 0x27FA84u;
    SET_GPR_U32(ctx, 31, 0x27FA8Cu);
    ctx->pc = 0x27FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA84u;
    // 0x27fa88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2232D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2232D8u, 0x27FA84u, 0x27FA8Cu)) {
        return;
    }
    ctx->pc = 0x27FA8Cu;
label_27fa8c:
    // 0x27fa8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27FA8Cu;
    {
        const bool branch_taken_0x27fa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA8Cu;
        // 0x27fa90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa8c) {
            ctx->pc = 0x27FA98u;
            goto label_27fa98;
        }
    }
    ctx->pc = 0x27FA94u;
label_27fa94:
    // 0x27fa94: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x27fa94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fa98:
    // 0x27fa98: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x27FA98u;
    {
        const bool branch_taken_0x27fa98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA98u;
        // 0x27fa9c: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa98) {
            ctx->pc = 0x27FB38u;
            goto label_27fb38;
        }
    }
    ctx->pc = 0x27FAA0u;
    // 0x27faa0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x27FAA0u;
    {
        const bool branch_taken_0x27faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAA0u;
        // 0x27faa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27faa0) {
            ctx->pc = 0x27FB4Cu;
            goto label_27fb4c;
        }
    }
    ctx->pc = 0x27FAA8u;
label_27faa8:
    // 0x27faa8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x27faa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27faac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27faacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fab0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27fab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27fab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fab8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27fabc: 0xc092782  jal         func_249E08
    ctx->pc = 0x27FABCu;
    SET_GPR_U32(ctx, 31, 0x27FAC4u);
    ctx->pc = 0x27FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FABCu;
    // 0x27fac0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27FABCu, 0x27FAC4u)) {
        return;
    }
    ctx->pc = 0x27FAC4u;
label_27fac4:
    // 0x27fac4: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x27FAC4u;
    {
        const bool branch_taken_0x27fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAC4u;
        // 0x27fac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fac4) {
            ctx->pc = 0x27F924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f924;
        }
    }
    ctx->pc = 0x27FACCu;
    // 0x27facc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27fad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27fad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fad4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27fad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27fad8: 0xc092782  jal         func_249E08
    ctx->pc = 0x27FAD8u;
    SET_GPR_U32(ctx, 31, 0x27FAE0u);
    ctx->pc = 0x27FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAD8u;
    // 0x27fadc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27FAD8u, 0x27FAE0u)) {
        return;
    }
    ctx->pc = 0x27FAE0u;
label_27fae0:
    // 0x27fae0: 0x1040ff90  beqz        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x27FAE0u;
    {
        const bool branch_taken_0x27fae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAE0u;
        // 0x27fae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fae0) {
            ctx->pc = 0x27F924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f924;
        }
    }
    ctx->pc = 0x27FAE8u;
    // 0x27fae8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x27fae8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27faec: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x27faecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x27faf0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27faf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27faf4: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x27faf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x27faf8: 0xc092782  jal         func_249E08
    ctx->pc = 0x27FAF8u;
    SET_GPR_U32(ctx, 31, 0x27FB00u);
    ctx->pc = 0x27FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAF8u;
    // 0x27fafc: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27FAF8u, 0x27FB00u)) {
        return;
    }
    ctx->pc = 0x27FB00u;
label_27fb00:
    // 0x27fb00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FB00u;
    {
        const bool branch_taken_0x27fb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB00u;
        // 0x27fb04: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb00) {
            ctx->pc = 0x27FB10u;
            goto label_27fb10;
        }
    }
    ctx->pc = 0x27FB08u;
    // 0x27fb08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27FB08u;
    {
        const bool branch_taken_0x27fb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB08u;
        // 0x27fb0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb08) {
            ctx->pc = 0x27FB2Cu;
            goto label_27fb2c;
        }
    }
    ctx->pc = 0x27FB10u;
label_27fb10:
    // 0x27fb10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FB10u;
    {
        const bool branch_taken_0x27fb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB10u;
        // 0x27fb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb10) {
            ctx->pc = 0x27FB28u;
            goto label_27fb28;
        }
    }
    ctx->pc = 0x27FB18u;
    // 0x27fb18: 0xc088cb6  jal         func_2232D8
    ctx->pc = 0x27FB18u;
    SET_GPR_U32(ctx, 31, 0x27FB20u);
    ctx->pc = 0x27FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB18u;
    // 0x27fb1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2232D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2232D8u, 0x27FB18u, 0x27FB20u)) {
        return;
    }
    ctx->pc = 0x27FB20u;
label_27fb20:
    // 0x27fb20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27FB20u;
    {
        const bool branch_taken_0x27fb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB20u;
        // 0x27fb24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb20) {
            ctx->pc = 0x27FB2Cu;
            goto label_27fb2c;
        }
    }
    ctx->pc = 0x27FB28u;
label_27fb28:
    // 0x27fb28: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x27fb28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fb2c:
    // 0x27fb2c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FB2Cu;
    {
        const bool branch_taken_0x27fb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB2Cu;
        // 0x27fb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb2c) {
            ctx->pc = 0x27FB4Cu;
            goto label_27fb4c;
        }
    }
    ctx->pc = 0x27FB34u;
label_27fb34:
    // 0x27fb34: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x27fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_27fb38:
    // 0x27fb38: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x27fb38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27fb3c: 0x2e830002  sltiu       $v1, $s4, 0x2
    ctx->pc = 0x27fb3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27fb40: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x27FB40u;
    {
        const bool branch_taken_0x27fb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB40u;
        // 0x27fb44: 0x148180  sll         $s0, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb40) {
            ctx->pc = 0x27F938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f938;
        }
    }
    ctx->pc = 0x27FB48u;
    // 0x27fb48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27fb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27fb4c:
    // 0x27fb4c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x27fb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27fb50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x27fb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27fb54: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x27fb54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27fb58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x27fb58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fb5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27fb5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fb60: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x27fb60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fb64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27fb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fb68: 0x3e00008  jr          $ra
    ctx->pc = 0x27FB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB68u;
        // 0x27fb6c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FB70u;
}
