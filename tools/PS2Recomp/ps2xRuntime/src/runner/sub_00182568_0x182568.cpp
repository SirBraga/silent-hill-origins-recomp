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

// Function: sub_00182568
// Address: 0x182568 - 0x182870
void sub_00182568_0x182568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182568_0x182568");
#endif

    switch (ctx->pc) {
        case 0x1825b0u: goto label_1825b0;
        case 0x1825ecu: goto label_1825ec;
        case 0x182618u: goto label_182618;
        case 0x18264cu: goto label_18264c;
        case 0x1826a4u: goto label_1826a4;
        case 0x1826b4u: goto label_1826b4;
        case 0x1826dcu: goto label_1826dc;
        case 0x1826e8u: goto label_1826e8;
        case 0x182728u: goto label_182728;
        case 0x182748u: goto label_182748;
        case 0x182754u: goto label_182754;
        case 0x182768u: goto label_182768;
        case 0x182778u: goto label_182778;
        case 0x1827b0u: goto label_1827b0;
        case 0x1827c4u: goto label_1827c4;
        case 0x1827e4u: goto label_1827e4;
        case 0x182834u: goto label_182834;
        case 0x182844u: goto label_182844;
        default: break;
    }

    ctx->pc = 0x182568u;

    // 0x182568: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x182568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18256c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x18256cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x182570: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x182570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x182574: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x182574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x182578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18257c: 0x8c623b84  lw          $v0, 0x3B84($v1)
    ctx->pc = 0x18257cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C3B84u));
    // 0x182580: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x182580u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182584: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x182584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x182588: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x182588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18258c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182590: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x182590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x182594: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x182594u;
    {
        const bool branch_taken_0x182594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182594u;
        // 0x182598: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182594) {
            ctx->pc = 0x182818u;
            goto label_182818;
        }
    }
    ctx->pc = 0x18259Cu;
    // 0x18259c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1825a0: 0x2452faa8  addiu       $s2, $v0, -0x558
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965928));
    // 0x1825a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1825a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825a8: 0xc0be652  jal         func_2F9948
    ctx->pc = 0x1825A8u;
    SET_GPR_U32(ctx, 31, 0x1825B0u);
    ctx->pc = 0x1825ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825A8u;
    // 0x1825ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9948u, 0x1825A8u, 0x1825B0u)) {
        return;
    }
    ctx->pc = 0x1825B0u;
label_1825b0:
    // 0x1825b0: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1825B0u;
    {
        const bool branch_taken_0x1825b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825B0u;
        // 0x1825b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825b0) {
            ctx->pc = 0x182808u;
            goto label_182808;
        }
    }
    ctx->pc = 0x1825B8u;
    // 0x1825b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1825b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1825bc: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x1825c0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1825c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1825c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1825c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1825c8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1825c8u;
    runtime->Store32(rdram, ctx, 0x10000010u, GPR_U32(ctx, 4)); // MMIO: 0x10000010
    // 0x1825cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1825ccu;
    runtime->Store32(rdram, ctx, 0x10000000u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1825d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1825D0u;
    {
        const bool branch_taken_0x1825d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825D0u;
        // 0x1825d4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825d0) {
            ctx->pc = 0x1825E4u;
            goto label_1825e4;
        }
    }
    ctx->pc = 0x1825D8u;
    // 0x1825d8: 0x8c43faf0  lw          $v1, -0x510($v0)
    ctx->pc = 0x1825d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966000)));
    // 0x1825dc: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1825DCu;
    {
        const bool branch_taken_0x1825dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825DCu;
        // 0x1825e0: 0x8ea23b84  lw          $v0, 0x3B84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825dc) {
            ctx->pc = 0x182660u;
            goto label_182660;
        }
    }
    ctx->pc = 0x1825E4u;
label_1825e4:
    // 0x1825e4: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x1825E4u;
    SET_GPR_U32(ctx, 31, 0x1825ECu);
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x1825E4u, 0x1825ECu)) {
        return;
    }
    ctx->pc = 0x1825ECu;
label_1825ec:
    // 0x1825ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1825f0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x1825f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x1825f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1825f4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x1825f8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1825f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1825fc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1825FCu;
    {
        const bool branch_taken_0x1825fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825FCu;
        // 0x182600: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825fc) {
            ctx->pc = 0x182638u;
            goto label_182638;
        }
    }
    ctx->pc = 0x182604u;
    // 0x182604: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x182604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x182608: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x182608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x18260c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18260cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x182610: 0xf  sync
    ctx->pc = 0x182610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x182614: 0x40f  sync.p
    ctx->pc = 0x182614u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_182618:
    // 0x182618: 0x0  nop
    ctx->pc = 0x182618u;
    // NOP
    // 0x18261c: 0x0  nop
    ctx->pc = 0x18261cu;
    // NOP
    // 0x182620: 0x0  nop
    ctx->pc = 0x182620u;
    // NOP
    // 0x182624: 0x0  nop
    ctx->pc = 0x182624u;
    // NOP
    // 0x182628: 0x0  nop
    ctx->pc = 0x182628u;
    // NOP
    // 0x18262c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x18262Cu;
    {
        const bool branch_taken_0x18262c = (false);
        if (branch_taken_0x18262c) {
            ctx->pc = 0x182618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182618;
        }
    }
    ctx->pc = 0x182634u;
    // 0x182634: 0x0  nop
    ctx->pc = 0x182634u;
    // NOP
label_182638:
    // 0x182638: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x182638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x18263c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182640: 0x8c45faa0  lw          $a1, -0x560($v0)
    ctx->pc = 0x182640u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BFAA0u));
    // 0x182644: 0xc0be61e  jal         func_2F9878
    ctx->pc = 0x182644u;
    SET_GPR_U32(ctx, 31, 0x18264Cu);
    ctx->pc = 0x182648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182644u;
    // 0x182648: 0x24060380  addiu       $a2, $zero, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9878u, 0x182644u, 0x18264Cu)) {
        return;
    }
    ctx->pc = 0x18264Cu;
label_18264c:
    // 0x18264c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18264Cu;
    {
        const bool branch_taken_0x18264c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x182650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18264Cu;
        // 0x182650: 0x8ea23b84  lw          $v0, 0x3B84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18264c) {
            ctx->pc = 0x182660u;
            goto label_182660;
        }
    }
    ctx->pc = 0x182654u;
    // 0x182654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x182654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182658: 0xaea23b84  sw          $v0, 0x3B84($s5)
    ctx->pc = 0x182658u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15236), GPR_U32(ctx, 2));
    // 0x18265c: 0x8ea23b84  lw          $v0, 0x3B84($s5)
    ctx->pc = 0x18265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
label_182660:
    // 0x182660: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x182660u;
    {
        const bool branch_taken_0x182660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182660u;
        // 0x182664: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182660) {
            ctx->pc = 0x18281Cu;
            goto label_18281c;
        }
    }
    ctx->pc = 0x182668u;
    // 0x182668: 0x2632faa8  addiu       $s2, $s1, -0x558
    ctx->pc = 0x182668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965928));
    // 0x18266c: 0xc620faa8  lwc1        $f0, -0x558($s1)
    ctx->pc = 0x18266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294965928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x182670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x182674: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x182674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182678: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x182678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18267c: 0x3c01391e  lui         $at, 0x391E
    ctx->pc = 0x18267cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14622 << 16));
    // 0x182680: 0x342155c1  ori         $at, $at, 0x55C1
    ctx->pc = 0x182680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21953);
    // 0x182684: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x182684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x182688: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x182688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18268c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18268cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x182690: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x182690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x182694: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x182698: 0xe4418a00  swc1        $f1, -0x7600($v0)
    ctx->pc = 0x182698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x338A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338A00u, _value); } while (0); }
    // 0x18269c: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x18269Cu;
    SET_GPR_U32(ctx, 31, 0x1826A4u);
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x18269Cu, 0x1826A4u)) {
        return;
    }
    ctx->pc = 0x1826A4u;
label_1826a4:
    // 0x1826a4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1826a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1826a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1826a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1826ac: 0xc08bda0  jal         func_22F680
    ctx->pc = 0x1826ACu;
    SET_GPR_U32(ctx, 31, 0x1826B4u);
    ctx->pc = 0x1826B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826ACu;
    // 0x1826b0: 0x34845100  ori         $a0, $a0, 0x5100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20736);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22F680u, 0x1826ACu, 0x1826B4u)) {
        return;
    }
    ctx->pc = 0x1826B4u;
label_1826b4:
    // 0x1826b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1826b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826b8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1826B8u;
    {
        const bool branch_taken_0x1826b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826B8u;
        // 0x1826bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826b8) {
            ctx->pc = 0x1826E8u;
            goto label_1826e8;
        }
    }
    ctx->pc = 0x1826C0u;
    // 0x1826c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1826c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1826c4: 0xdc4434c8  ld          $a0, 0x34C8($v0)
    ctx->pc = 0x1826c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 13512)));
    // 0x1826c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1826c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826cc: 0x8c66faa0  lw          $a2, -0x560($v1)
    ctx->pc = 0x1826ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BFAA0u));
    // 0x1826d0: 0x8e27faa8  lw          $a3, -0x558($s1)
    ctx->pc = 0x1826d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965928)));
    // 0x1826d4: 0xc060748  jal         func_181D20
    ctx->pc = 0x1826D4u;
    SET_GPR_U32(ctx, 31, 0x1826DCu);
    ctx->pc = 0x1826D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826D4u;
    // 0x1826d8: 0x8e480004  lw          $t0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D20u, 0x1826D4u, 0x1826DCu)) {
        return;
    }
    ctx->pc = 0x1826DCu;
label_1826dc:
    // 0x1826dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1826dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826e0: 0xc08b8f8  jal         func_22E3E0
    ctx->pc = 0x1826E0u;
    SET_GPR_U32(ctx, 31, 0x1826E8u);
    ctx->pc = 0x1826E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826E0u;
    // 0x1826e4: 0x24050102  addiu       $a1, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E3E0u, 0x1826E0u, 0x1826E8u)) {
        return;
    }
    ctx->pc = 0x1826E8u;
label_1826e8:
    // 0x1826e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1826e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1826ec: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x1826f0: 0x8c62faf0  lw          $v0, -0x510($v1)
    ctx->pc = 0x1826f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFAF0u));
    // 0x1826f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1826F4u;
    {
        const bool branch_taken_0x1826f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826F4u;
        // 0x1826f8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826f4) {
            ctx->pc = 0x182748u;
            goto label_182748;
        }
    }
    ctx->pc = 0x1826FCu;
    // 0x1826fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1826fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x182700: 0x8c438a10  lw          $v1, -0x75F0($v0)
    ctx->pc = 0x182700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338A10u));
    // 0x182704: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x182704u;
    {
        const bool branch_taken_0x182704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182704u;
        // 0x182708: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182704) {
            ctx->pc = 0x182730u;
            goto label_182730;
        }
    }
    ctx->pc = 0x18270Cu;
    // 0x18270c: 0x8c628a0c  lw          $v0, -0x75F4($v1)
    ctx->pc = 0x18270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937100)));
    // 0x182710: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x182710u;
    {
        const bool branch_taken_0x182710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182710) {
            ctx->pc = 0x182714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182710u;
            // 0x182714: 0x2610faf8  addiu       $s0, $s0, -0x508 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966008));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18274Cu;
            goto label_18274c;
        }
    }
    ctx->pc = 0x182718u;
    // 0x182718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18271c: 0x2604faf8  addiu       $a0, $s0, -0x508
    ctx->pc = 0x18271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966008));
    // 0x182720: 0xc0604f2  jal         func_1813C8
    ctx->pc = 0x182720u;
    SET_GPR_U32(ctx, 31, 0x182728u);
    ctx->pc = 0x182724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182720u;
    // 0x182724: 0xac628a0c  sw          $v0, -0x75F4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1813C8u, 0x182720u, 0x182728u)) {
        return;
    }
    ctx->pc = 0x182728u;
label_182728:
    // 0x182728: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x182728u;
    {
        const bool branch_taken_0x182728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182728u;
        // 0x18272c: 0x2610faf8  addiu       $s0, $s0, -0x508 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182728) {
            ctx->pc = 0x18274Cu;
            goto label_18274c;
        }
    }
    ctx->pc = 0x182730u;
label_182730:
    // 0x182730: 0x8c628a0c  lw          $v0, -0x75F4($v1)
    ctx->pc = 0x182730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937100)));
    // 0x182734: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x182734u;
    {
        const bool branch_taken_0x182734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182734) {
            ctx->pc = 0x182738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182734u;
            // 0x182738: 0x2610faf8  addiu       $s0, $s0, -0x508 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966008));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18274Cu;
            goto label_18274c;
        }
    }
    ctx->pc = 0x18273Cu;
    // 0x18273c: 0xac608a0c  sw          $zero, -0x75F4($v1)
    ctx->pc = 0x18273cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937100), GPR_U32(ctx, 0));
    // 0x182740: 0xc060514  jal         func_181450
    ctx->pc = 0x182740u;
    SET_GPR_U32(ctx, 31, 0x182748u);
    ctx->pc = 0x182744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182740u;
    // 0x182744: 0x2604faf8  addiu       $a0, $s0, -0x508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181450u, 0x182740u, 0x182748u)) {
        return;
    }
    ctx->pc = 0x182748u;
label_182748:
    // 0x182748: 0x2610faf8  addiu       $s0, $s0, -0x508
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966008));
label_18274c:
    // 0x18274c: 0xc06044c  jal         func_181130
    ctx->pc = 0x18274Cu;
    SET_GPR_U32(ctx, 31, 0x182754u);
    ctx->pc = 0x182750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18274Cu;
    // 0x182750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181130u, 0x18274Cu, 0x182754u)) {
        return;
    }
    ctx->pc = 0x182754u;
label_182754:
    // 0x182754: 0x8e23faf0  lw          $v1, -0x510($s1)
    ctx->pc = 0x182754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966000)));
    // 0x182758: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x182758u;
    {
        const bool branch_taken_0x182758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182758u;
        // 0x18275c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182758) {
            ctx->pc = 0x182784u;
            goto label_182784;
        }
    }
    ctx->pc = 0x182760u;
    // 0x182760: 0xc0605d2  jal         func_181748
    ctx->pc = 0x182760u;
    SET_GPR_U32(ctx, 31, 0x182768u);
    ctx->pc = 0x182764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182760u;
    // 0x182764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181748u, 0x182760u, 0x182768u)) {
        return;
    }
    ctx->pc = 0x182768u;
label_182768:
    // 0x182768: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x182768u;
    {
        const bool branch_taken_0x182768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182768u;
        // 0x18276c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182768) {
            ctx->pc = 0x182784u;
            goto label_182784;
        }
    }
    ctx->pc = 0x182770u;
    // 0x182770: 0xc060530  jal         func_1814C0
    ctx->pc = 0x182770u;
    SET_GPR_U32(ctx, 31, 0x182778u);
    ctx->pc = 0x182774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182770u;
    // 0x182774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1814C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1814C0u, 0x182770u, 0x182778u)) {
        return;
    }
    ctx->pc = 0x182778u;
label_182778:
    // 0x182778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18277c: 0xae22faf0  sw          $v0, -0x510($s1)
    ctx->pc = 0x18277cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966000), GPR_U32(ctx, 2));
    // 0x182780: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x182780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_182784:
    // 0x182784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x182784u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x182788: 0x2c4201f4  sltiu       $v0, $v0, 0x1F4
    ctx->pc = 0x182788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x18278c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18278Cu;
    {
        const bool branch_taken_0x18278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18278Cu;
        // 0x182790: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18278c) {
            ctx->pc = 0x18280Cu;
            goto label_18280c;
        }
    }
    ctx->pc = 0x182794u;
    // 0x182794: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x182798: 0x2454faa8  addiu       $s4, $v0, -0x558
    ctx->pc = 0x182798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965928));
    // 0x18279c: 0x24733b80  addiu       $s3, $v1, 0x3B80
    ctx->pc = 0x18279cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
    // 0x1827a0: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1827a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x1827a4: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x1827a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x1827a8: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x1827a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x1827ac: 0x8e053b80  lw          $a1, 0x3B80($s0)
    ctx->pc = 0x1827acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6C3B80u));
label_1827b0:
    // 0x1827b0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1827B0u;
    {
        const bool branch_taken_0x1827b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1827B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827B0u;
        // 0x1827b4: 0x2652823  subu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827b0) {
            ctx->pc = 0x1827D8u;
            goto label_1827d8;
        }
    }
    ctx->pc = 0x1827B8u;
    // 0x1827b8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1827b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1827bc: 0xc060bb4  jal         func_182ED0
    ctx->pc = 0x1827BCu;
    SET_GPR_U32(ctx, 31, 0x1827C4u);
    ctx->pc = 0x1827C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827BCu;
    // 0x1827c0: 0x2624fb80  addiu       $a0, $s1, -0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182ED0u, 0x1827BCu, 0x1827C4u)) {
        return;
    }
    ctx->pc = 0x1827C4u;
label_1827c4:
    // 0x1827c4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1827c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1827C8u;
    {
        const bool branch_taken_0x1827c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1827CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827C8u;
        // 0x1827cc: 0xae023b80  sw          $v0, 0x3B80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827c8) {
            ctx->pc = 0x1827F0u;
            goto label_1827f0;
        }
    }
    ctx->pc = 0x1827D0u;
    // 0x1827d0: 0x24a5fb80  addiu       $a1, $a1, -0x480
    ctx->pc = 0x1827d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966144));
    // 0x1827d4: 0x0  nop
    ctx->pc = 0x1827d4u;
    // NOP
label_1827d8:
    // 0x1827d8: 0x8e063b80  lw          $a2, 0x3B80($s0)
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15232)));
    // 0x1827dc: 0xc0bf6aa  jal         func_2FDAA8
    ctx->pc = 0x1827DCu;
    SET_GPR_U32(ctx, 31, 0x1827E4u);
    ctx->pc = 0x1827E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827DCu;
    // 0x1827e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDAA8u, 0x1827DCu, 0x1827E4u)) {
        return;
    }
    ctx->pc = 0x1827E4u;
label_1827e4:
    // 0x1827e4: 0x8e033b80  lw          $v1, 0x3B80($s0)
    ctx->pc = 0x1827e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15232)));
    // 0x1827e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1827ec: 0xae033b80  sw          $v1, 0x3B80($s0)
    ctx->pc = 0x1827ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15232), GPR_U32(ctx, 3));
label_1827f0:
    // 0x1827f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1827f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1827f4: 0x2c4201f4  sltiu       $v0, $v0, 0x1F4
    ctx->pc = 0x1827f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1827f8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1827F8u;
    {
        const bool branch_taken_0x1827f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1827FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827F8u;
        // 0x1827fc: 0x8e053b80  lw          $a1, 0x3B80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827f8) {
            ctx->pc = 0x1827B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1827b0;
        }
    }
    ctx->pc = 0x182800u;
    // 0x182800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182800u;
    {
        const bool branch_taken_0x182800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182800u;
        // 0x182804: 0x8ea23b84  lw          $v0, 0x3B84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182800) {
            ctx->pc = 0x182810u;
            goto label_182810;
        }
    }
    ctx->pc = 0x182808u;
label_182808:
    // 0x182808: 0xaea23b84  sw          $v0, 0x3B84($s5)
    ctx->pc = 0x182808u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15236), GPR_U32(ctx, 2));
label_18280c:
    // 0x18280c: 0x8ea23b84  lw          $v0, 0x3B84($s5)
    ctx->pc = 0x18280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
label_182810:
    // 0x182810: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x182810u;
    {
        const bool branch_taken_0x182810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182810u;
        // 0x182814: 0x8ea23b84  lw          $v0, 0x3B84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182810) {
            ctx->pc = 0x182848u;
            goto label_182848;
        }
    }
    ctx->pc = 0x182818u;
label_182818:
    // 0x182818: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x182818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_18281c:
    // 0x18281c: 0x8c628a04  lw          $v0, -0x75FC($v1)
    ctx->pc = 0x18281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937092)));
    // 0x182820: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x182820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x182824: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182824u;
    {
        const bool branch_taken_0x182824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182824) {
            ctx->pc = 0x18283Cu;
            goto label_18283c;
        }
    }
    ctx->pc = 0x18282Cu;
    // 0x18282c: 0xc060a1c  jal         func_182870
    ctx->pc = 0x18282Cu;
    SET_GPR_U32(ctx, 31, 0x182834u);
    ctx->pc = 0x182870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182870u, 0x18282Cu, 0x182834u)) {
        return;
    }
    ctx->pc = 0x182834u;
label_182834:
    // 0x182834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182834u;
    {
        const bool branch_taken_0x182834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182834u;
        // 0x182838: 0x8ea23b84  lw          $v0, 0x3B84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182834) {
            ctx->pc = 0x182848u;
            goto label_182848;
        }
    }
    ctx->pc = 0x18283Cu;
label_18283c:
    // 0x18283c: 0xc06091a  jal         func_182468
    ctx->pc = 0x18283Cu;
    SET_GPR_U32(ctx, 31, 0x182844u);
    ctx->pc = 0x182840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18283Cu;
    // 0x182840: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182468u, 0x18283Cu, 0x182844u)) {
        return;
    }
    ctx->pc = 0x182844u;
label_182844:
    // 0x182844: 0x8ea23b84  lw          $v0, 0x3B84($s5)
    ctx->pc = 0x182844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15236)));
label_182848:
    // 0x182848: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x182848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18284c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18284cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182850: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x182850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182858: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x182858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18285c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18285cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182864: 0x3e00008  jr          $ra
    ctx->pc = 0x182864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182864u;
        // 0x182868: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18286Cu;
    // 0x18286c: 0x0  nop
    ctx->pc = 0x18286cu;
    // NOP
    ctx->pc = 0x182870u;
}
